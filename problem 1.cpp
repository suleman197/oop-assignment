#include <iostream> 

using namespace std; 

  

class Circle 

{ 

private: 

    float radius; 

    float x; 

    float y; 

  

public: 

    Circle() 

    { 

        radius = 0; 

        x = 0; 

        y = 0; 

    } 

  

    Circle(float xValue, float yValue, float radiusValue) 

    { 

        x = xValue; 

        y = yValue; 

  

        if (radiusValue >= 0) 

            radius = radiusValue; 

        else 

        { 

            cout << "Invalid radius! Radius cannot be negative." << endl; 

            radius = 0; 

        } 

    } 

  

    void setValues(float xValue, float yValue, float radiusValue) 

    { 

        x = xValue; 

        y = yValue; 

  

        if (radiusValue >= 0) 

            radius = radiusValue; 

        else 

        { 

            cout << "Invalid radius! Radius cannot be negative." << endl; 

            radius = 0; 

        } 

    } 

  

    float area() 

    { 

        return 3.14159 * radius * radius; 

    } 

  

    float circumference() 

    { 

        return 2 * 3.14159 * radius; 

    } 

  

    void print() 

    { 

        cout << "X = " << x << endl; 

        cout << "Y = " << y << endl; 

        cout << "Radius = " << radius << endl; 

    } 

}; 

  

int main() 

{ 

    Circle c1; 

  

    cout << "Circle 1:" << endl; 

    c1.print(); 

    cout << "Area = " << c1.area() << endl; 

    cout << "Circumference = " << c1.circumference() << endl; 

  

    cout << endl; 

  

    Circle c2(5, 10, 7); 

  

    cout << "Circle 2:" << endl; 

    c2.print(); 

    cout << "Area = " << c2.area() << endl; 

    cout << "Circumference = " << c2.circumference() << endl; 

  

    cout << endl; 

  

    Circle c3(2, 3, -5); 

  

    cout << "Circle 3:" << endl; 

    c3.print(); 

  

    return 0; 

}
