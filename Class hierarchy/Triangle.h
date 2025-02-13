#pragma once
#include <iostream>
class Triangle
{

protected:
    int a, b, c;
    int A, B, C;
    std::string name;
public:
    Triangle();

    int  get_a() const; const

        int  get_b();const

        int  get_c();const

        int  get_A();const

        int  get_B();const

        std::string  getName();
   
        virtual  void print_info(); 



};