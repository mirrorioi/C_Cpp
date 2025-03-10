#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int *x, int *y){
    if (*x > *y) swap(x, y);
}

int main(void)
{
    int a = 1;

    printf("%p\n", &a); // address

    int *b;
    b = &a;
    *b = 2;             // can change a
    printf("%p\n", b);  // pointer to a
    printf("%d\n", *b); // val of a
    printf("%d\n", a);

    
    // long c = &a; // pointer but in decimal
    // printf("%lx\n", c); // change to heximal
    // printf("%d\n",*c); // error unusable

    int *d;
    d = b;
    printf("%p\n", d);  
    printf("%d\n", *d); 


    int m = 10;
    int n = 11;
    
    sort(&n,&m);
    printf("%d,%d\n",n,m);


}