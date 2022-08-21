#include <iostream>

double power(double base, int exponent)
{
    int result=1;
    for (int i=0; i<exponent; i++)
    {
        result = result * base;
    }
   return result;
}

void print_power(double base, int exponent)
{
    double myPower = power(base, exponent);
    std::cout << base << " to the power of " << exponent << " is " << myPower << ".\n";
}

int main()
{
    double base;
    int exponent;
    std::cout << "Enter Base: ";
    std::cin >> base;
    std::cout << "Enter Exponent: ";
    std::cin >> exponent;
    print_power(base, exponent);
    return 0;
} 