#include <iostream>

int main()
{
    using namespace std;
    double times[3] = {1.2, 3.4, 5.2};
    for (double time : times)
    {   
        time = time * 10;
        cout << time << endl;
    }

    for (double time : times)
    {   
        cout << time << endl;
    }

    for (double &time : times)
    {   
        time = time * 10;
    }

        for (double time : times)
    {   
        cout << time << endl;
    }
    return 0;
}