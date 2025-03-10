#include <stdio.h>
#define FirstMacro 1
int main(void) {
  int x = FirstMacro;
  #ifdef SecondMacro
    x += SecondMacro;
  #endif
  #ifdef ThirdMacro
    x += ThirdMacro;
  #endif
  printf("%d\n", x);
}