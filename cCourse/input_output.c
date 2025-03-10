#include <stdio.h>

int main(void){
    puts("输入一个数:"); // 自带换行
    int no;
    scanf("%d",&no);
    printf("%d\n",no); // 需要手动换行

    int a;
    int b;
    scanf("%d",&a);
    scanf("");
    scanf("%d",&b);
    printf("Average:%d.\n",(a+b)/2);


    return 0;
}