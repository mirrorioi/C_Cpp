#include <iostream>
using namespace std;

enum spectrum
{
    red,
    orange,
    yellow = 100,
    green,
    blue,
    violet,
    indigo = 200,
    ultraviolet
};

enum bits
{
    one = 1,
    two = 2,
    four = 4,
    eight = 8
};

int main()
{
    spectrum band;
    band = red;
    cout << band << endl; // 0

    int color = yellow;
    cout << color << endl; // 2

    int k = green + orange;
    cout << k << endl;

    spectrum b = ultraviolet;
    cout << b << endl;

    bits myflag;
    myflag = bits(16); // in [1,8]
    cout << myflag << endl;
}