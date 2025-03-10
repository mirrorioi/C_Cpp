#include <iostream>
using namespace std;

struct per
{
    char name[10];
    int age;
};

int main()
{
    per *ps = new per; // attribute storage
    // ps.age = 10; // error with .
    ps->age = 10; // passed
    cout << ps->age << endl;

    cin >> (*ps).name; // another way to visit
    cout << (*ps).name << endl;

    delete ps;

    return 0;
}