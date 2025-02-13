#pragma once
#include <iostream>

class Quadrangle
{

protected:
    int a, b, c, d;
    int A, B, C, D;
    std::string name;


public:
    Quadrangle();
    Quadrangle(int, int, int, int, int, int, int, int, std::string);

    virtual void print_info();

    int  get_a(); const

        const int  get_b(); const

        int  get_c(); const

        int  get_d();const

        int  get_A();const

        int  get_B();const

        int  get_C();const

        int  get_D();const

        std::string  getName();



};