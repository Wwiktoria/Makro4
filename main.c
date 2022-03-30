#include <stdio.h>
#define NAJ(x,y,z) ((x>=y)&&(x>=z))?x:((y>=z)?y:z)
int main(void) {
  printf("%d",NAJ(1,2,3));
  return 0;
}