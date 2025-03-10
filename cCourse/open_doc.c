#include <stdio.h>

FILE *fp;
FILE *fp2;

int main(void)
{
    fp = fopen("/Users/mac/Desktop/CCC/senior/s1/s1.1-01.in", "r");
    if (fp == NULL)
    {
        puts("invalid input");
    }
    int a;
    fscanf(fp, "%d", &a);
    printf("%d\n", a);
    fclose(fp);

    fp2 = fopen("/Users/mac/Desktop/CCC/senior/s1/s1.1-01.in", "w");
    fprintf(fp2, "%d", 10086);
    fclose(fp2);

    // int fgetc (FILE *stream);

    // int fputc (int c, FILE *stream);

    return 0;
}