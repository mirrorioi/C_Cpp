#include <stdio.h>

int main(void)
{
    int a, b, c;
    double d;
    puts("3 int:");
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    printf("c:");
    scanf("%d", &c);

    int sum;
    sum = a + b + c;
    d = (double)sum / 3;

    printf("sum:%5d:\n", sum);     // 显示至少5位的十进制整数
    printf("average:%5.3f:\n", d); // 显示至少5位的浮点数。但是，小数点后只显示3位

    // d -> int
    printf("[%.4d]\n",123); // [0123]
    printf("[%4d]\n",123); // [ 123]
    printf("[%-4d]\n",123); // [123 ]

    // f -> double
    printf("[%f]\n",123.12); //[123.120000]
    printf("[%.1f]\n",123.12); //[123.1]

    


    return 0;
}