#ifndef POLYGON_H
#define POLYGON_H

// declaring Polygon class
class Polygon{
public:
    Polygon(); // default constructor
    Polygon(int newWidth, int newHeight); // constructor with width and height parameters
    virtual int getArea() = 0; // pure virtual function for calculating area
    // virtual int getArea();
    virtual void draw() const = 0; // pure virtual function for drawing
    void setWidth(int newWidth); // function to set width
    void setHeight(int newHeight); // function to set height

protected:
    int width = 0; // width of polygon
    int height = 0; // height of polygon
};

// declaring Rectangle class which inherits from Polygon
class Rectangle: public Polygon{
public:
    Rectangle(); // default constructor
    Rectangle(int newWidth, int newHeight); // constructor with width and height parameters
    int getArea() override; // override function to calculate area
    void draw() const override; // override function to draw rectangle
};

// declaring Traingle class which inherits from Polygon
class Triangle: public Polygon{
public:
    Triangle(); // default constructor
    Triangle(int newWidth, int newHeight); // constructor with width and height parameters
    int getArea() override; // override function to calculate area
    void draw() const override; // override function to draw triangle
};

#endif // POLYGON_H
