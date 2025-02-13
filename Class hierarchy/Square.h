#pragma once
#include "Rectangle.h"

class Square :public Rectangle {

public:
    Square(int a ) :Rectangle(a, b)
    {
        d = b = a;
        this->a = a;
        this->b = b;
        this->d = d;
        this->name = " вадрат :";
    }
   
};
