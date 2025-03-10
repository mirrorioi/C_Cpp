#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    // char ch;
    // cin.get(ch);

    // cout << isalpha(ch) << endl;

    // int num;
    // cout << "Please enter a number: ";
    // cin >> num;

    // // 如果输入失败，清除错误标志，忽略错误输入直到下一个换行符
    // if (!cin) {
    //     cin.clear(); // 清除cin的错误状态
    //     cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略错误输入直到下一个换行符
    //     cout << "That was not a number. Please enter a number: ";
    //     cin >> num;
    // }

    // cout << "You entered: " << num << endl;

    char word[50];
    cin.getline(word,50);
    
    for (int i = 0; i < 50 ; i++){
        cout << word[i] << endl;
    }
    return 0;
}