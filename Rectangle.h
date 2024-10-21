#include "Figure.h"

class Rectangle : public Figure
{
private:
    double* length;
    double* width;

public:
    Rectangle(double l, double w);

    double calcArea();

    void show();

    Figure* Copy();

    ~Rectangle();
};
