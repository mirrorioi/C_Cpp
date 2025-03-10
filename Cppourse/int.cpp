#include <iostream>
using namespace std;

int main()
{
    short a;
    a = 1;
    printf("%d\n", a); // short <= 32767 (16 bits)

    int b;
    b = 2;
    cout << b << endl; // int <= 2147483647 (32 bits)

    // long -> (32 bits) 2147483647 , long long -> (64 bits) 9223372036854775807

    cout << sizeof(int) << " bytes.\n"; // -> 4 * 8 = 32

    int c = INT_MAX; // defined symbolic variable
    cout << c << endl;

    int d(666); // give value to variable d
    d -= 1000;
    // we can also use:
    // int emus{7};
    // int rheas = {12};
    // if the {} is empty, it is 0 for the variable
    cout << d << endl;

    // unsign -> from 0 to maximum
    unsigned short e = 60000; // 60000 > 32767
    cout << e << endl;
    // short f = 60000; // Error
    // cout << f << endl;

    char s = 'A';
    cout << s << endl;

    signed char uc = 97; // signed char -> -128 to 127
    // unsigned char -> 0 to 255
    cout << uc << endl;  // 97 -> a

    int st = 0x42;
    cout << st << endl; // 66 = 4 * 16 + 2 * 1
    cout << hex; // change output to hexadecimsl
    cout << st << endl;
    
    char ch = 'A';
    int i = ch;
    cout << "the ASCII code for " << ch << " is " << i << endl;
    cout.put(ch) << endl;
    // ' ' is 32, the ASCII code for the space character.
    
    char alarm = '\n';
    cout << "next line" << alarm;
    cout << "Yes\n";
    return 0;
}