// Class hierarchy.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <Windows.h>
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles_triangle.h"
#include "Equilateral_triangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Rhombus.h"




int main()
{
    setlocale(LC_ALL, "rus");


    Triangle  triangle;
    triangle.print_info();

    Right_triangle right_triangle(10, 20, 30, 50, 60);

    Triangle* par_right_triangle = &right_triangle;
    par_right_triangle->print_info();

    Isosceles_triangle  isosceles_triangle(10, 20, 50, 60);

    Triangle* par_isosceles_triangle = &isosceles_triangle;
    par_isosceles_triangle->print_info();

    Equilateral_triangle equilateral_triangle(10);

    Triangle* par_equilateral_triangle = &equilateral_triangle;
    par_equilateral_triangle->print_info();
    Quadrangle quadrangle;
    quadrangle.print_info();
    Parallelogram parallelogram(20, 30, 30, 40);

    Quadrangle* par_parallelogram = &parallelogram;
    par_parallelogram->print_info();

    class Rectangle rectangle(10, 20);

    Quadrangle* par_rectangle = &rectangle;
    par_rectangle->print_info();
    Square square(20);

    Quadrangle* par_square = &square;
    par_square->print_info();

    Rhombus rhombus(30, 30, 40);

    Quadrangle* par_rhombus = &rhombus;
    par_rhombus->print_info();


}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
