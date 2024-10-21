#include "Figure.h"
#include "Rectangle.h"

Rectangle::Rectangle(double l, double w)
{
    length = new double;
    width = new double;
    *length = l;
    *width = w;
}

double Rectangle::calcArea()
{
    return (*length)*(*width);
}

void Rectangle::show()
{
    cout << "Rectangle with height = " << *length << " and width = " << *width << endl;
}

Figure* Rectangle::Copy()
{
    return new Rectangle(*length, *width);
}

Rectangle::~Rectangle()
{
    delete length;
    delete width;
}
