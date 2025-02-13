
#include "Equilateral_triangle.h"

Equilateral_triangle::Equilateral_triangle(int a)
{
    c = b = a;
    C = B = A = 60;

    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;
    this->name = "Равносторонний треугольник:";
}