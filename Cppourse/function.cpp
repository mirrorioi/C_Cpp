#include <iostream>
using namespace std;

int addOne(int n){
    return n + 1;
}

// void(prototype) -> do not have a return value
void fuck(int c){
    if (c == 3){
        cout << "input is equal to 3" << endl;
    }else{
        cout << "input is not equal to 3" << endl;
    }
}



int main(){
    //function
    int k;
    k = addOne(3);
    k = sqrt(k);
    cout << k << endl;

    cout << pow(5,2) << endl;
    cout << rand() << endl;
    int input;
    cin >> input;
    fuck(input);
}

