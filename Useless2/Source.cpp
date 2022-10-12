#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

Figure* Generate(Figure* ptr);

int main() {
    srand(time(NULL));
    const int size = 15;
    Figure* ptr[size] = {};
    int circle = 0, rect = 0;

    for (int i = 0; i < size; ++i) {

        ptr[i] = Generate(ptr[i]);
        if (dynamic_cast<Circle*>(ptr[i]))
        {
            circle++;
        }
        else if (dynamic_cast<Rectangle*>(ptr[i]))
        {
            rect++;
        }
    }

    cout << "Circles - " << circle << endl;
    cout << "Rectangles - " << rect << endl;
    

    return 0;
}



Figure* Generate(Figure* ptr)
{
    Figure* new_figure = nullptr;
   
    int choice = rand() % 2;
    switch (choice) {
    case 0:
        new_figure = new Rectangle();
        break;
    case 1:
        new_figure = new Circle();
        break;
    }
   
    return new_figure;
    
}


