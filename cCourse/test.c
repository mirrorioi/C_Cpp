#include <stdio.h>

int x = 900;

void print_x(void)
{
    printf("x = %d\n", x);
}

void tr(int n){
    printf("%d\n", n + 1);
}

int main(void)
{
    // int i;
    // int x = 800; // a brand-new variale only in main()

    // printf("%d\n",x);
    // print_x();

    // printf("x = %d\n",x);
    // for (i = 0; i < 5; i++){
    //     int x = i * 100;
    //     printf("x = %d\n",x);
    // }

    // printf("x = %d\n",x);
    // tr('h');
    // return 0;
    char *a = "ABCDEFG";
    *a = 'j';
    printf("%s\n", a);
    
}
