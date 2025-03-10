#include <stdio.h>

double power(double dx, int po)
{
    double res = 1;
    for (int i = 0; i < po; i++)
    {
        res *= dx;
    }
    return res;
}

void addOne(int *val)
{
    *val += 1;
}


void getA(void);

int a = 1; // global variable a
int main(void)
{
    printf("%.f\n", power(3, 4));

    extern int a; // can be excluded
    addOne(&a);
    printf("%d\n", a);

    getA();
}


void getA(void){
    extern int a;
    printf("%d\n",a);
}