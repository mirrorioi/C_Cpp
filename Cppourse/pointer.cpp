#include <iostream>

int main()
{
    using namespace std;

    // pointer to const
    int a = 1;
    int b = 2;
    const int *pt = &a;
    pt = &b;
    // *pt = 20; // error
    cout << *pt << endl;

    // const pointer
    int c = 3;
    int d = 4;
    int * const cpt = &c;
    // cpt = &d; //error
    *cpt = 10;
    cout << c << endl;
}