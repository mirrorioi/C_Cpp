#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
    vector<int> vi; // create a zero-size array of int
    vi.push_back(10);
    cout << vi.at(0) << endl;
    cout << vi[0] << endl;
    cout << &vi[0] << endl;
    vi.clear();
    vector<double> vd(3); // create an array of 3 doubles

    array<int, 5> ai;
    array<double, 4> ad = {1.2, 2.3, 3.2, 4.3};
    cout << ad[2] << endl;
    cout << ad[-1] << endl;

    array<int, 5> nums;
    for (int i = 1; i <= 9; i += 2)
    {
        nums[(i - 1) / 2] = i;
    }
    for (int j = 0; j < 5; j++)
    {
        cout << nums[j] << endl;
    }

    int even = nums[0] + nums[4];
    cout << even << endl;

    char grade = 'A';
    grade += 1;
    cout << grade << endl;
    
}