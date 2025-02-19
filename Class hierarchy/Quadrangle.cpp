
#include "Quadrangle.h"
#include <iostream>

Quadrangle::Quadrangle() :a(10), b(20), c(10), d(20), A(50), B(60), C(70), D(80), name("Четырехугольник :") {  };

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->name = name;
};
//virtual void print_info() const
//{
//    std::cout << name << std::endl;
//    std::cout << "Стороны :" << "a =" << a << " " << "b =" << b << " " << "c =" << c << " " << "d =" << d << std::endl;
//    std::cout << "Углы :" << "A =" << A << " " << "B =" << B << " " << "C =" << C << " " << "D =" << D << std::endl;
//    std::cout << std::endl;
//}

 void Quadrangle::print_info()
{
    std::cout << name << std::endl;
    std::cout << "Стороны :" << "a =" << a << " " << "b =" << b << " " << "c =" << c << " " << "d =" << d << std::endl;
    std::cout << "Углы :" << "A =" << A << " " << "B =" << B << " " << "C =" << C << " " << "D =" << D << std::endl;
    std::cout << std::endl;

};
 int Quadrangle::get_a() 
 {
     return a;
 }
  int Quadrangle::get_b() 
 {
     return b;
 }
  int Quadrangle::get_c()
 {
     return c;
 }
  int Quadrangle::get_d()
 {
     return d;
 }
  int Quadrangle::get_A()
 {
     return A;
 }
  int Quadrangle::get_B()
 {
     return B;
 }
  int Quadrangle::get_C()
 {
     return C;
 }
  int Quadrangle::get_D()
 {
     return D;
 }
  std::string Quadrangle::getName()
 {
     return name;
 }
