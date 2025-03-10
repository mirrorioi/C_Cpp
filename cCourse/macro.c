#include <stdio.h>

#define sqr(x) ((x)*(x))
#define swap(type, a, b) do { type temp = (a); (a) = (b); (b) = temp; } while (0)

int factorial(int x){
    return x == 1? 1 : x * factorial(x-1) ;
} 

#define alert() (putchar('\a'))

int gcdf(int x,int y){
        return (y == 0? x: gcdf(y,x%y));
}


int main(){
    int a = 1;
    printf("%d\n",sqr(a));

    int b = 2;
    printf("a = %d,b = %d\n",a,b);
    swap(int, a, b);
    printf("a = %d,b = %d\n",a,b);

    enum name {Hans=100,John,Bob};
    printf("%d\n",Hans);
    printf("%d\n",John);

    printf("%d\n",factorial(3));
    int x = 10;
    int y = 3;

    printf("%d\n", x > y ? gcdf(x,y):gcdf(y,x));

}

