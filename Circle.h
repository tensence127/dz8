class Circle : public Figure
{
private:
    double *radius;

public:
    Circle(double r);
    double calcArea();

    void show();

    Figure* Copy();

    ~Circle();

};
