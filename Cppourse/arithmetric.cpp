#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout << "9/5 = " << 9 / 5 << endl;
    cout << "9.0/5 = " << 9.0 / 5 << endl;
    cout << "1.e7f/9.0f = " << 1.e7f / 9.0f << endl;//float
    cout << "1.e7/9.0 = " << 1.e7/9.0 << endl; //double

    // int a (1000000000000.0);// error warning 
    // cout << a << endl;

    int x = 66;
    x = 31325; 
    char c5 = x; // only leave the low 8 bits of x to c5
    cout << c5 << endl;

    
    cout << static_cast<float> (x) << endl;
    cout << (float) x / 2 << endl;

    


    return 0;
}