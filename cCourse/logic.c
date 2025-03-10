#include <stdio.h>

int main(void)
{
    int month;
    printf("input month:");
    scanf("%d",&month);

    if (month == 1 || month == 2 || month == 12){
        puts("It's winter.");
    }else if(month <= 5 && month >= 3){
        puts("It's spring.");
    }else if(month >= 6 && month <= 8){
        puts("it's summer");
    }else{
        puts("It's autumn");
    }

    // int num;
    // printf("number:");
    // scanf("%d",&num);
    // switch(num){
    //     case 1: puts("num == 1"); break; // break to avoid leak
    //     case 2: puts("num == 2"); break;
    //     case 3: puts("num == 3"); break;
    // }

    int a = 1;
    int b = 0;

    printf("%d\n", a & b);
    printf("%d\n", a | b);
    printf("%d\n", a ^ b);
    printf("%lu\n", sizeof(int));
    printf("%d\n", ~a); // 取反码

    // 位移运算
    unsigned int c = 2;
    printf("%d\n", c << 1); // c *= 2 （左移一位，右边0填充）
    printf("%d\n",c >> 1); // c /= 2 (右移一位，左边用最高位填充)
    return 0;

    
}