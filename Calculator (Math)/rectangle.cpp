#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

int main()
{
    double length, width;
    cout << "Enter length (in cm): ";
    cin >> length;
    cout << "Enter width (in cm): ";
    cin >> width;

    double perimeter = 2*(length + width);
    double area = length * width;
    double diagonal = sqrt(length*length + width*width);

    cout << std::endl;
    cout << "Length: " << length << "cm\n"; 
    cout << "Width: " << width << "cm\n\n";
    if (length==width) 
    {
        cout<<"The rectangle is a square.\n";
    }
    cout << "Perimeter: " << perimeter << "cm\n"; 
    cout << "Area: " << area << "cm²\n";
    cout << "Diagonal: " << diagonal << "cm\n\n";

    return 0;
}