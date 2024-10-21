#include "Figure.h"
#include "Cylinder.h"

Cylinder::Cylinder(Figure* f, double H)
{
   F = f->Copy();
   height = new double;
   *height = H;
}

double Cylinder::calcVolume()
{
    return F->calcArea()*(*height);
}

Cylinder::~Cylinder()
{
    delete height;
    delete F;
 }
