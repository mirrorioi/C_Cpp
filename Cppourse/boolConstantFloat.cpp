#include <iostream>
# define HOMO 114514
using namespace std;

int main(){
    bool is_ready = true;
    bool start = -100; // -> true
    bool end = 0; // -> false
    cout << is_ready << endl;

    const int a = 1;
    // a = 2; // Error as a is a constant
    cout << a << endl;

    float f = HOMO;
    f /= 5;
    cout << f << endl;

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
    double tub = 10.0 / 3.0;
    tub *= 1.0e6;
    float mint = 10.0 / 3.0;
    mint *= 1.0e6;
    cout << tub << endl; 
    cout << mint << endl; // difference in precision

    return 0;
}