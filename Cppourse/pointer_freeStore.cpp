#include <iostream>

int main()
{
    using namespace std;

    int a = 1;
    printf("%p\n", &a);

    int *p;
    p = &a;
    cout << *p << endl;

    int *pt;
    // pt = 0xB8000000; // mismatch, computer don't know it's an address
    pt = (int *)0xB8000000; // Actually not useful
    // *pt = 10;
}