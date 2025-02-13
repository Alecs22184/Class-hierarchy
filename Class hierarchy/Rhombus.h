#pragma once

class Rhombus :public Parallelogram {

public:
    Rhombus(int a, int A, int B) :Parallelogram(a, b, A, B)
    {
        d = b = a;
        this->a = a;
        this->b = b;
        this->d = d;
        this->A = A;
        this->B = B;
        this->name = "Ромб :";
    }
   
};