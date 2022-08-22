#include <iostream>
#include <float.h>
using std::cout;
using std::endl;

int main()
{
    float a = 10.0 / 3 * 100000000000000000;
    double b = 10.0 / 3 * 100000000000000000;
    long double c = 10.0 / 3 * 100000000000000;
    
    cout << endl;
    cout << "Type 'float': " << std::fixed << a << endl;
    cout << "Type 'double': " << std::fixed << b << endl;
    cout << "Type 'long double': " << std::fixed << c << endl << endl;
    cout << "*** All of these fractional numbers were calculated by \"10/3\"\n";
    cout << "The most precise type is 'long double', followed by 'double' and 'float'\n\n";

    cout << "Up to how many digits you can trust for floating points:\n\n";
    cout << "For 'float': " << FLT_DIG << " digits.\n";
    cout << "For 'double': " << DBL_DIG << " digits.\n";
    cout << "For 'long double': " << LDBL_DIG << " digits.\n\n";
}