class Cylinder
{
private:
    Figure* F;
    double* height;

public:
    Cylinder(Figure* f, double H);
    double calcVolume();
    ~Cylinder();

};
