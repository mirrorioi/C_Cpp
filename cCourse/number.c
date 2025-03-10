#include <stdio.h>
#include <limits.h>
#include <math.h>


double dist(double x1, double y1, double x2, double y2){
    return (sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
}


int main(void)
{
    long a = 1000;
    printf("%ld\n", a);

    char b = CHAR_MIN;
    printf("%d\n", b);

    if (b){
        puts("signed");
    }else{
        puts("unsigned");
    }

    printf("%lu\n",sizeof(char));

    printf("%.2lu\n", ULONG_MAX);

    int c = 2000;
    int d = -128;

    printf("%f\n",dist(a,b,c,d));

    int e = -100;
    e = (unsigned) e;
    printf("%u\n",e);

    char vc[3];
    printf("%d\n", (int) (sizeof(vc) / sizeof(vc[0])));
}
