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

    int  get_a() ; 

        int  get_b();

        int  get_c();

        int  get_A();

        int  get_B();

        std::string  getName();
   
        virtual  void print_info(); 



};