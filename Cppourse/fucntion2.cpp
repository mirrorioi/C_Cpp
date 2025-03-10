#include <iostream>

using namespace std;

void change(int arr[],int l)
{
    for(int i = 0;i < l; i++){
        *(arr + i) *= 2;
    }
}

int main()
{
    int a[3] = {1,2,3};
    change(a,3);
    for(int i = 0;i < 3; i++){
        cout << a[i] << '\t';
    }
    cout << endl;

    return 0;
}