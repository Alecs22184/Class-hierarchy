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
    Quadrangle(int a, int b, int c, int d, int A , int B, int C , int D, std::string);

    virtual void print_info();

    int  get_a(); 

         int  get_b(); 

        int  get_c(); 

        int  get_d();

        int  get_A();

        int  get_B();

        int  get_C();

        int  get_D();

        std::string  getName();



};