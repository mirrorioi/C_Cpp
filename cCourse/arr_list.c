#include <stdio.h>

int main(void){
    int vv[5] = {10,20,30,40,50};

    int *ptr = &vv[0];
    for (int i = 0; i < 5; i++){
        printf("%d,%d,%d\n",vv[i],ptr[i],*(ptr+i)); // amazing
    }
}