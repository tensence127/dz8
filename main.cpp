#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Cylinder.h"

using namespace std;

int main()
{

    int choice;
    Cylinder* c1;
    double height;
    cout << "Enter height: ";
    cin >> height;
    cout << "1 - circle. 2 - rectangle" << endl;
    cin >> choice;
    switch(choice)
    {
    case 1:
        double radius;
        cout << "Enter radius: ";
        cin >> radius;
        c1 = new Cylinder(new Circle(radius), height);
        break;
    case 2:
        double length, width;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        c1 = new Cylinder(new Rectangle(length, width), height);
    }
    cout << c1->calcVolume();
    return 0;
}
