#include <iostream>
using namespace std;
int main(){
    char ruler[66];
    int i;
    for (i = 1; i < 64; i ++) ruler[i] = ' ';
    ruler[65] = '\0';
    ruler[0] = '|';
    ruler[64] = '|';

    std::cout << ruler << std::endl;
    cout << ruler << endl;

    char ru[10] = {'a','a','a','a','a','a','a','a','a','a'};
    cout << ru << endl;
    int ar[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << ar << endl;
    return 0;
}