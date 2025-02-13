#include <iostream>
#include "Triangle.h"

Triangle::Triangle() { a = 10, b = 20, c = 30, A = 50, B = 60, C = 70, name = "Треугольник :"; }

 int Triangle::get_a() const 
{
	return a;
}

 const int Triangle::get_b()
{
	return b;
}

const int Triangle::get_c()
{
	return c;
}

const int Triangle::get_A()
{
	return A;
}

const int Triangle::get_B()
{
	return B;
}

const std::string Triangle::getName()
{
	return name;
}

  void  Triangle ::print_info() 
{
	std::cout << name << std::endl;
	std::cout << "Стороны :" << "a =" << a << " " << "b =" << b << " " << "c =" << c << std::endl;
	std::cout << "Углы :" << "A =" << A << " " << "B =" << B << " " << "C =" << C << std::endl;
	std::cout << std::endl;
}
