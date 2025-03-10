#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int a = 2;
    int b = (a += 1) + 1;
    cout << b << endl; // 4

    cout << (b < 5) << endl; // 1
    cout.setf(ios_base::boolalpha);
    cout << (b < 5) << endl; // true

    int x = 1;
    int y = (4 + x++) + 2; // 7
    cout << y << endl;

    ++x, --y;
    cout << x << " " << y << endl;

    int i = 20, j = 2 * i;
    cout << i << " " << j << endl;
    // int cats = (1, 2); // 1 have no effect
    // cout << cats << endl;

    char word[5] = "mate";
    cout << strcmp(word, "mate") << endl; //!!! 0 -> same and 1 -> different
    // strcmp原理：m - m, a - a, t - t, e - e
    cout << strcmp(word, "matea") << endl; // -97
    // if not identical, return immediately:
    cout << strcmp(word, "n") << endl; // -1

    string qiang = "hello";
    cout << (qiang == "hello") << endl; // true


}