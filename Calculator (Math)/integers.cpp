#include <iostream>
#include <climits>
using std::cout;
using std::endl;

int main()
{
    short a;        // 16 bits
    int b;          // 32 bits
    long c;         // 64 bits
    long long d;    // 64 bits
    // short <= int <= long <= long long
    unsigned short aa;  
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;
    
    cout << endl;
    cout << "MINIMUM VALUES FOR INTEGERS\n";
    cout << "Signed 'short' min: " << SHRT_MIN << endl;
    cout << "Signed 'int' min: " << INT_MIN << endl;
    cout << "Signed 'long' min: " << LONG_MIN << endl;
    cout << "Signed 'long long' min: " << LLONG_MIN << endl;
    cout << endl;
    cout << "MAXIMUM VALUES FOR INTEGERS\n";
    cout << "Signed 'short' max: " << SHRT_MAX << endl;
    cout << "Signed 'int' max: " << INT_MAX << endl;
    cout << "Signed 'long' max: " << LONG_MAX << endl;
    cout << "Signed 'long long' max: " << LLONG_MAX << endl;
    cout << "Unsigned 'short' max: " << USHRT_MAX << endl;
    cout << "Unsigned 'int' max: " <<UINT_MAX << endl;
    cout << "Unsigned 'long' max: " << ULONG_MAX << endl;
    cout << "Unsigned 'long long' max: " << ULLONG_MAX << endl;
    cout << endl;
    
    return 0;
}