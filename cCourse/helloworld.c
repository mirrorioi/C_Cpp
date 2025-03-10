#include <stdio.h>

// typedef struct
// {
//     int a[2]; // 定义一个整型数组a，其包含2个元素
//     double d; // 定义一个double类型的变量d
// } struct_t;   // 通过typedef给这个结构体起一个别名struct_t

// // 函数声明，接受一个整型参数i，返回一个double类型的值
// double fun(int i)
// {
//     volatile struct_t s; // 定义一个volatile修饰的struct_t类型的变量s
//     s.d = 3.14;          // 将s的成员d初始化为3.14
//     s.a[i] = 1073741824; // 尝试给数组a的第i个元素赋值1073741824，这里可能会越界
//     return s.d;          // 返回s的成员d的值
// }

// int main()
// {
//     // 调用fun函数，传入一个可能导致越界的参数值
//     double result = fun(1);         // 这里传入的是1，是安全的；如果传入的是大于1的值，则可能越界
//     printf("Result: %f\n", result); // 打印fun函数的返回值
//     return 0;
// }


int main(){
    printf("hello world\n");
    printf("result:%d\n",100);
    // %d -> decimal 

    return 0;
}