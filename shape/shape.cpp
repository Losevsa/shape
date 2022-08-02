#include <iostream>

struct BoundingBoxDimensions
{
    int height, width;
};

class Shape
{
public:

    virtual void squareCount() = 0;
    virtual void printParams(Shape* shape) = 0;
    virtual double square() = 0;
    virtual BoundingBoxDimensions dimensions() = 0;
    virtual std::string type() = 0;
};

class Circle : virtual public Shape
{
public:
	Circle(){}

    virtual void squareCount()
    {

    }
    virtual void printParams(Shape* shape)
    {
        std::cout << "Type: " << shape->type() << std::endl;
    }
    virtual double square()
    {

    }
    virtual BoundingBoxDimensions dimensions()
    {

    }
    virtual std::string type()
    {
        return "Circle";
    }

private:
    double a;
    double b;
    double c;
};


int main()
{

    std::cout << "Hello World!\n";
}

