#include <stdio.h>

int main(void)
{

    int count = 100;

    do
    {
        printf("%d\n", count);
        count--;
    } while (count > -1);

    int num;

    do
    {
        scanf("%d", &num);
    } while (num < 0);

    do
    {
        printf("%d", num % 10);
        num /= 10;
    } while (num > 0);
    printf("\n");

    int n = 10;
    while (n > 0)
    {
        printf("%d\n", --n);
    }

    printf("%d",100); putchar('\n');

    puts("");
    int i;
    for (i = 1; i < 10; i++){
        printf("%d\n",i);
    }

}