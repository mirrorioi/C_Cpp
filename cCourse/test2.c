#include <stdio.h>

bool read_two_same(){
  int n1;
  int n2;
  int s1 = scanf("%d",&n1);
  int s2 = scanf("%d",&n2);
  if (s1 == 1 && s2 == 1 && n1 == n2){
    return 1;
  }
  return 0;
}

int count_same_pairs(int max){
  if (max > 0 && read_two_same()){
    return 1 + count_same_pairs(max - 1);
  } 
  return 0;
}


int main(void) {
  int number = 0;
  if (1 == scanf("%d", &number)){
    int count = count_same_pairs(number);
    printf("%d\n",count);
  }
  return 0;
}