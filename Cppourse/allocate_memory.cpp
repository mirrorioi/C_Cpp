#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int *pt = (int *)malloc(sizeof(int));
    *pt = 10;
    cout << *pt << endl;

    int *pn = new int;
    *pn = 100;
    cout << *pn << endl; // 100
    // cout << sizeof pn << endl;
    // cout << pn << endl;
    delete pn;           // freeing memory
    cout << *pn << endl; // 0

    int *psome = new int[10];
    *(psome + 2) = 10086;
    cout << psome[2] << endl;
    delete[] psome;

    char arr[100] = "noo";
    char *st = arr;
    // *st = "ab"; // error as it is const
    strcpy((st + 1), "ab"); // strcpy(address,string_to_add)
    cout << arr << endl;    // nab

    const char *bird = "wren"; // string is seen as an address
    cout << bird << endl;      // it is supposed to be an address,but we use "wren" as the address
    // That's interesting!
    cout << (int *)bird << endl; // transform string address to int pointer address
    cout << (int *)"wren" << endl;

    char *ps = new char[strlen(bird) + 1];
    strncpy(ps, bird,4);// first 4 chars of bird to ps
    cout << ps << endl; // same value but different address

    
}