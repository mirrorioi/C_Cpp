#include <iostream>
using namespace std;

union one4all{
    int int_val;
    long long_val;
    double double_val;
};

// anonymous union
struct widget{
    char brand[20];
    int type;
    union{
        long id_num;
        char id_char[20];
    }; // only one can exist at a time
};

int main(){
    one4all pail;
    pail.int_val = 15;
    cout << pail.int_val << endl;
    pail.double_val = 10.243;
    cout << pail.int_val << endl; // the int value is lost after double value is given

}