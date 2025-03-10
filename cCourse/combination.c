#include <stdio.h>

int combination(int n,int r){
    if (r == 1){
        return n;
    }else if (r == n){
        return 1;
    }else{
        return combination(n-1,r-1) + combination(n-1,r);
    }
}

int main(void){
    printf("%d\n",combination(4,2));
}