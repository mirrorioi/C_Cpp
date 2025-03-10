#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string str1 = "hello";
    cout << str1 << endl;
    cout << str1[0] << endl;

    string str2 = " world";
    string str3 = str1 + str2;

    cout << str3 << endl;

    string str4 = str3;
    cout << str4 << endl;

    char str5[] = "Fuck";
    strcat(str5, " you");
    cout << str5 << endl;

    int len4 = str4.size();
    int len5 = strlen(str5);

    // str3 = str1 + str2; // for a string
    
    // strcpy(charr3, charr1);
    // strcat(charr3, charr2); // for a char array

    // raw string
    // cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << '\n'; // when -std >= 11, it works



    return 0;
}