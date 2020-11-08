#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <list>
#include <vector>

double func1_task11(double x, double u, double z)
{
	return z;
}

double func2_task11(double x, double u, double z)
{
	double m, c, k, k_;
	m = 1.0;
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
	while ((x < b) && (i < N_MAX))
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