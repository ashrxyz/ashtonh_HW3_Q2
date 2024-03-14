#include <iostream>
#include "Polygon.h"

using namespace std;

// default constructor for Polygon
Polygon::Polygon(){
   // Polygon poly(5, 5);
    // return 0;
}

// constructor with width and height parameters for Polygon
Polygon::Polygon(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;
}

// setWidth function for Polygon
void Polygon::setWidth(int newWidth){
    width = newWidth;
}

// setHeight function for Polygon
void Polygon::setHeight(int newHeight){
    height = newHeight;
}

// default constructor for Rectangle
Rectangle::Rectangle(): Polygon(){}

// constructor with width and height parameters for Rectangle
Rectangle::Rectangle(int newWidth, int newHeight): Polygon(newWidth, newHeight) {}

// getArea function for Rectangle
int Rectangle::getArea(){
    return width*height;
}

// draw function for Rectangle
void Rectangle::draw() const{
    for(int i=0; i<height; ++i){
        for(int j=0; j<width; ++j){
            cout<<"*";
        }
        cout<<endl;
    }
}
// default constructor for Triangle
Triangle::Triangle(): Polygon(){}

// constructor with width and height parameters for Triangle
Triangle::Triangle(int newWidth, int newHeight): Polygon(newWidth, newHeight){}

// getArea function for Triangle
int Triangle::getArea(){
    return width*height/2;
}

// draw function for Triangle
void Triangle::draw() const {
    int mid = width/2;
    for (int i=0; i<height; ++i){
        for(int j=0; j<width; ++j) {
            if(j >= mid - i && j <= mid + i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
