#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct student
{
    char name[20];
    float height;
    float weight;
    string dog;
};

struct
{
    int x;
    int y;
} position = {
    1,
    2,
};

int main()
{
    student Hans = {
        "Hans",
        190.1,
        80.0,
        "Simon",
    };

    student Mark;
    // Mark.name = "Mark"; // error
    strcpy(Mark.name, "Mark");

    cout << position.x << " " << position.y << endl;

    student li[2] = {
        {"Jack",180.2,54.6},
        {"Bob",163.2,76.3}
    };

    printf("%s\n",li[0].name);

    
}