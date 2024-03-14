// Author: Ashton Herrick
// Program: HW3, Q2
// Date Created: March 13, 2024
// Date Last Modified: March 13, 2024
//
// Problem: Write a program that creates a Rectangle and Triangle for the output
// and then update them both
//
// Question 1: The error I got was a compilation error. This happened because
// "Polygon", which is an abstract class, cannot be instantiated directly.
// 
// Question 2: After doing this I still encountered a compilation error due to
// the same issue as before and that's the Polygon being an abstract class, which
// still can't be instantiated directly.

#include <iostream>
#include "Polygon.h"

using namespace std;

int main(){
    // Create a Rectangle
    Rectangle rect(5, 9);
    cout<<"Rectangle Area: "<<rect.getArea()<<endl;
    cout<<"Rectangle Draw:"<<endl;
    rect.draw();
    cout<<endl;

    // Create a Triangle
    Triangle tri(10, 5);
    cout<<"Triangle Area: "<<tri.getArea()<<endl;
    cout<<"Triangle Draw:"<<endl;
    tri.draw();
    cout<<endl;

    // Change width and height of Rectangle
    rect.setWidth(8);
    rect.setHeight(6);
    cout<<"Updated Rectangle Area: "<<rect.getArea()<<endl;
    cout<<"Updated Rectangle Draw:"<<endl;
    rect.draw();
    cout<<endl;

    // Change width and height of Triangle
    tri.setWidth(6);
    tri.setHeight(8);
    cout<<"Updated Triangle Area: "<<tri.getArea()<<endl;
    cout<<"Updated Triangle Draw:"<<endl;
    tri.draw();
    cout<<endl;

    return 0;
}
