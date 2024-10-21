class Figure
{
public:
    virtual double calcArea() = 0;
    virtual void show() = 0;
    virtual Figure* Copy() = 0;
};

