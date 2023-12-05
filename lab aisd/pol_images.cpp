#include <iostream>
#include "Header.h"
#include <random>
using namespace std;

int main()
{
    int size_x, size_y;
    cout << "Enter the dimensions of the field" << endl;
    cout << "a: ";
    cin >> size_x;
    cout << "b: ";
    cin >> size_y;
    Image<bool> a(size_x, size_y, false);
    double x1, y1, x2, y2;
    cout << "Enter the coordinates" << endl;
    cout << "x1: ";
    cin >> x1;
    cout << "y1: ";
    cin >> y1;
    cout << "x2: ";
    cin >> x2;
    cout << "y2: ";
    cin >> y2;

    for (int i = 0; i < size_x; i++) {
        for (int j = 0; j < size_y; j++) {
            if (((j - y1) / (y2 - y1)) == ((i - x1) / (x2 - x1))) {
                a(i, j) = 1;
            }
        }
    }
    cout << a;
}