#include <iostream>
#include <clocale>
#include <cstdlib>
#include <iterator>
#include <iomanip>
#include "RK4.h"
#define EPS 0.001

int main()
{
	setlocale(LC_CTYPE, "Russian");

	double x0 = 0;
	double u0 = 10;
	double z0 = 0;
	double h, b;
	int N_MAX;
	double m, c, k, k_;
	m = 1.0;
	c = 0.15;
	k = 2.0;
	k_ = 2.0;
	double RBC = 0.05;
	std::cout << "¬ведите h, b и N_MAX" << std::endl;
	std::cin >> h >> b >> N_MAX;
	std::list<std::vector<double> > result = numerical_function_control_task11(x0, u0, z0, h, b, N_MAX, EPS, m, c, k, k_, RBC);
	std::list<std::vector<double> >::iterator it;
	std::cout << "x     | u          u'" << std::endl;
	for (it = result.begin(); it != result.end(); it++)
	{
		std::cout << std::left << std::setw(5) << it->at(0) << " | " << std::left << std::setw(5) << it->at(1) << " | " << std::left << std::setw(5) << it->at(2) << std::endl;
	}

	system("pause");
	return 0;
}