#include <stdio.h>

int main(void)
{
    //哨兵思想
    int arr[4] = {1, 2, 3};
    arr[3] = 1000;
    printf("%d\n", arr[3]);

    
}