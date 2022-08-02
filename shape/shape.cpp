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
	Circle(double radius)
    {
        this->radius = radius;
    }

    virtual void squareCount()
    {

    }
    virtual void printParams(Shape* shape)
    {
        std::cout << "Type: " << shape->type() << std::endl;
    }
    virtual double square()
    {
        return 0;
    }
    virtual BoundingBoxDimensions dimensions()
    {
        BoundingBoxDimensions a;
        a.height = 0;
        a.width = 0;
        return a;
    }
    virtual std::string type()
    {
        return "Circle";
    }

private:
    double radius = 0;
};


int main()
{
    Shape* circle = new Circle(23);
    circle->printParams(circle);
    std::cout << "Hello World!\n";
}

