#include <stdio.h>
#include <ctype.h>

unsigned str_len(const char str[]){
    unsigned len = 0;
    while (str[len]){
        len++;
    }
    return (len);
}

void put_rstr(const char string[]){
    unsigned l = str_len(string);
    while(l > 0){
        l--;
        putchar(string[l]);
    } 
    putchar('\n');
}

int main()
{
    char ns[] = "abc";
    puts(ns);
    printf("%s\n", ns);

    printf("%.2s\n", ns); // at most 2
    printf("%2s\n", ns); // at least 2 
    printf("%8s\n", ns); // move to right 
    printf("%-8s\n", ns); // move to left
    printf("%9.9s\n", ns);

    // empty
    //  char ns[] = "";
    //  char ns[] = ('\0');

    char cs[3][6] = {"Turbo","NA","DOHC"};
    for (int i = 0; i < 3 ; i++){
        printf("%s\n",cs[i]);
    }
    
    char st[100] = "doeioboiboiodcni";
    printf("%u\n",str_len(st));
    put_rstr(st);

    char s = 'a';
    s = toupper(s); // -> A
    s = tolower(s); // -> a
    printf("%c\n",s);

    


}