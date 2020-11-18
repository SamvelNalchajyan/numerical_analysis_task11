#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <list>
#include <vector>
#define RIGHT_BORDER_CONTROL 0.05

double func1_task11(double x, double u, double z)
{
	return z;
}

double func2_task11(double x, double u, double z)
{
	double m, c, k, k_;
	//m = 1.0;
	m = 0.01;
	c = 0.15;
	k = 2.0;
	k_ = 2.0;
	return ((-c / m) * z + (-k / m) * u + (-k / m) * (u * u * u));
}

std::vector<double> RK4_task11(double x, double u, double z, double h)
{
	double k1, k2, k3, k4;
	double l1, l2, l3, l4;
	k1 = h * func1_task11(x, u, z);
	l1 = h * func2_task11(x, u, z);
	k2 = h * func1_task11(x + h / 2.0, u + k1 / 2.0, z + l1 / 2.0);
	l2 = h * func2_task11(x + h / 2.0, u + k1 / 2.0, z + l1 / 2.0);
	k3 = h * func1_task11(x + h / 2.0, u + k2 / 2.0, z + l2 / 2.0);
	l3 = h * func2_task11(x + h / 2.0, u + k2 / 2.0, z + l2 / 2.0);
	k4 = h * func1_task11(x + h, u + k3, z + l3);
	l4 = h * func2_task11(x + h, u + k3, z + l3);
	std::vector<double> result;
	result.push_back(u + (k1 + 2 * k2 + 2 * k3 + k4) * (1.0 / 6.0));
	result.push_back(z + (l1 + 2 * l2 + 2 * l3 + l4) * (1.0 / 6.0));
	return result;
}

std::list<std::vector<double> > numerical_function_task11(double x0, double u0, double z0, double h, double b, double N_MAX)
{
	std::list<std::vector<double> > result;
	double u_next, z_next, u_current, z_current;
	u_current = u0;
	z_current = z0;
	double x = x0;
	std::vector<double> v0 = { x0, u0, z0 };
	result.push_back(v0);
	int i = 0;
	while ((x < b - RIGHT_BORDER_CONTROL) && (i < N_MAX))
	{
		std::vector<double> tmp = RK4_task11(x, u_current, z_current, h);
		u_next = tmp[0];
		z_next = tmp[1];
		x += h;
		u_current = u_next;
		z_current = z_next;
		std::vector<double> v = { x, u_current, z_current };
		result.push_back(v);
		i++;
	}
	return result;
}

std::list<std::vector<double> > numerical_function_control_task11(double x0, double u0, double z0, double h0, double b, double N_MAX, double epsilon)
{
	std::list<std::vector<double> > result;
	double u_next, z_next, u_current, z_current, u_next_double, z_next_double, s_u, s_z, h;
	u_current = u0;
	z_current = z0;
	h = h0;
	double x = x0;
	double C1 = 0, C2 = 0;
	std::vector<double> v0 = { x0, u0, z0, u0, z0, 0, 0, 0, h, C1, C2 };
	result.push_back(v0);
	int i = 0;
	while ((x < b - RIGHT_BORDER_CONTROL) && (i < N_MAX))
	{
		std::vector<double> tmp = RK4_task11(x, u_current, z_current, h);
		u_next = tmp[0];
		z_next = tmp[1];
		tmp = RK4_task11(x, u_current, z_current, h / 2.0);
		u_next_double = tmp[0];
		z_next_double = tmp[1];
		tmp = RK4_task11(x + h / 2.0, u_next_double, z_next_double, h / 2.0);
		u_next_double = tmp[0];
		z_next_double = tmp[1];
		s_u = (u_next_double - u_next) / 15.0;
		s_u = fabs(s_u);
		s_z = (z_next_double - z_next) / 15.0;
		s_z = fabs(s_z);
		if (s_u > epsilon || s_z > epsilon)
		{
			h /= 2.0;
			C1++;
		}
		else
		{
			x += h;
			///*
			if (x >= b)
			{
				break;
			}
			//*/
			u_current = u_next;
			z_current = z_next;
			double s_max = s_u;
			if (s_z > s_max)
			{
				s_max = s_z;
			}
			std::vector<double> v = { x, u_current, z_current, u_next_double, z_next_double, u_current - u_next_double, z_current - z_next_double, s_max * 16.0, h, C1, C2 };
			if (s_u < epsilon / 32.0 && s_z < epsilon / 32.0)
			{
				h *= 2.0;
				C2++;
			}
			v[10] = C2;
			result.push_back(v);
			i++;
		}
	}
	return result;
}