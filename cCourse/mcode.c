#include <stdio.h>

int add(int x, int y) {
 return x + y;
}

int sub(int x, int y) {
 return x - y;
}

int main(void) {
 int a = 1;
 int b = 2;
 int c = add(a, b);
 int d = sub(a, b);
 printf("%d\n", c + d);
 return 0;
}


