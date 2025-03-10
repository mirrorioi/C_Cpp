#include <stdio.h>

int main(void)
{
    if (0 > 1)
    {
        printf("%d\n", 2 > 1);
        puts("2 > 1");
    }
    else
    {
        puts("666");
    }

    if (2 % 2)
        puts("?");
    else
        puts("hhh");
        puts("nb"); // 虽然看起来很正常，实际上这和ifelse没关系
    
    int a;
    printf("a:");
    scanf("%d",&a);

    if (a%5 != 0)
        printf("a is not the multiple of 5\n");
    else if (a == 5)
        puts("a is equal to 5");

    int max;
    max = (1 > 2)? 1 : 2;
    printf("%d\n",max);

    {int x; int y; x = 5; y = 3; printf("%d\n",x);};

}