#include <stdio.h>

char *copy(char *s1, const char *s2){
    char *t = s1;

    while ((*s1++ = *s2++))
        ;

    return t;
}

int main(void){

    char a1[4] = "abc";
    char b2[4] = "xyz";

    copy(a1,b2);

    printf("%c\n",a1[2]);
    return 0;
}