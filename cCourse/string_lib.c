#include <stdio.h>
#include <string.h>

char *str_chr(const char *str, int c)
{
    while (*str != '\0')
    { // 检查当前字符是否是终止符
        if (*str == c)
        {
            return (char *)str; // 如果找到字符，返回当前指针
        }
        str++; // 移动到下一个字符
    }
    return NULL; // 如果没有找到字符，返回NULL
}

int str_chnum(const char *str, char c)
{
    int res = 0;
    while (*str != '\0')
    {
        if (*str == 'c')
        {
            res++;
        }
        str++;
    }
    return res;
}

int main(void)
{
    char str[] = "abc";          // 字符数组应该足够大以容纳字符串和终止符'\0'
    char *a = str_chr(str, 'c'); // 使用指针来接收返回的地址
    if (a != NULL)
    {
        printf("%p\n", a); // 通过指针打印字符
    }
    else
    {
        printf("Character not found\n");
    }

    int len = strlen(str); // length in lib
    printf("%d\n", len);

    // char strcpy(char *s1, const char *s2) copy in lib

    // char *strncy (char *s1, const char *s2, size_t n)
    // if len(s2) >= n, copy it to s1 till the nth character

    // char *strcat (char *s1, const char *52) similar to append
    // char *strncat (char *s1, const char *s2, size_t n) append the 1st to nth character of s2 to s1

    // int stremp (const char *s1, const char *s2) 字符串比大小，相等返回0，s1 > s2返回正数，反正则为负数
    // int strncmp (const char *s1, const char *s2, size_t n) s1 和 s2前n位 比大小
    // ... in <string.h>

    int n = str_chnum(str, 'a');
    printf("%d\n", n);

    return 0;
}
