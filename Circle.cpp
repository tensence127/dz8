#include "Circle.h"
#include "Figure.h"
#include <math.h>

Circle::Circle(double r)
{
    radius = new double;
    *radius = r;
}

double Circle::calcArea()
{
    return acos(-1)*pow(*radius, 2);
}

void Circle::show()
{
    cout << "Circle with radius: " << *radius;
}

Figure* Circle::Copy()
{
    return new Circle(*radius);
}

Circle::~Circle()
{
    delete radius;
}
