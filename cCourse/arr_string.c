#include <stdio.h>

int main(void)
{
    char str[] = "abc";
    char *ptr = "123";

    putchar(str[1]);
    putchar(ptr[1]);
    putchar('\n');

    // str = "edf"; // error, string cannot be changed
    ptr = "456"; // Redirect the pointer

    char st[3][6] = {"Turbo", "NA", "DOHC"};
    char *pt[3];
    pt[0] = st[0];
    printf("%s\n", st[0]);
    printf("%s\n", pt[0]);
}