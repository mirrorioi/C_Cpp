#include <iostream>
using namespace std;


int sum(const int * begin, const int * end){
    const int * pt;
    int sum;
    for (pt = begin; pt != end; pt ++){
        sum += * pt;
    }
    return sum;
    
}
int main()
{
    // short month[12];
    // month[1] = 100;
    // cout << month[1] << endl;

    // // initailize
    // int yamcosts[3] = {1, 2, 3};
    // // int yamcoust[3]{1,2,3} // when -std >= 11, it works
    // // int camcosts[3] {2, 3, 4}; // c++ 11

    // short hun[100] = {0};
    // cout << hun[2] << endl; // 0

    // int li[] = {2, 3, 4, 5};
    // cout << sizeof(li) / sizeof(int) << endl; // calculate length of li

    // // array represent a string
    // char cat[6] = {'G', 'O', 'S', 'S', 'Y', '\n'};          // string end with '\n'
    // char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'}; // not a string!

    // char bird[] = "Mr.Cheeps";
    // string bird2 = "Ms.Fun";
    // cout << bird[1] << endl;
    // cout << bird2[1] << endl;

    // "" is for string while '' is for ASCII character
    // char shirt_size = "S"; // illegal type mismatch

    // char name[] = {};
    // // cin.getline(name,20);
    // // cout << name << endl;

    // char title[] = {};
    // cin.get(title,20);
    // cin.get(); // solve the problem for the last newline character
    // cin.get(name,20);
    // cout << title << endl;
    // cout << name << endl;

    // int year;
    // cin >> year;
    // char address[] = {};
    // cin.get();                // solve the problem by read the Enter before
    // cin.getline(address, 20); // problem, it read the Enter
    // cout << address << endl;

    // int maxtemps[4][5];

    // for (int row = 0; row < 4; ++row){
    //     for (int column = 0; column < 5 ; column ++){
    //         maxtemps[row][column] = row + column;
    //     }
    // }
    // for (int row = 0; row < 4; ++row){
    //     for (int column = 0; column < 5 ; column ++){
    //         cout << maxtemps[row][column] << "\t";
    //     }
    //     cout << endl;
    // }

    // int dp[10][10] = {{0,1,1,1,1,1,1,1,1,1},{1},{1},{1},{1},{1},{1},{1},{1},{1}};
    // for (int i = 1; i < 10; i++){
    //     for (int j = 1; j < 10 ; j++){
    //         dp[i][j] = dp[i-1][j] + dp[i][j-1];
    //     }
    // }
    // for (int i = 0; i < 10; i++){
    //     for (int j = 0; j < 10 ; j++){
    //         cout << dp[i][j] << '\t';
    //     }
    //     cout << endl;
    // }
    // for (int i = 1;i < 10; i++){
    //         dp[0][i] = 1;
    //     }
    // for (int i = 1;i < 10; i++){
    //         dp[i][0] = 1;
    //     }

    // cout << dp[9][9] << endl;
    // return 0;

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << sum(arr,arr + 9) << endl;
}