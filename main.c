#include <stdio.h>

int main() {
  float kd;
  int dc;
  scanf("%2f",&kd);
  if(kd < 4.0)
  {
    printf("F");
  }
  else if(kd <= 4.5)
  {
    printf("D");
  }
  else if(kd <= 5.5)
  {
    printf("D+");
  }
   else if(kd <= 6.5)
  {
    printf("C");
  }
   else if(kd <= 7)
  {
    printf("C+");
  }
   else if(kd <= 8)
  {
    printf("B");
  }
   else if(kd <= 9)
  {
    printf("B+");
  }
   else if(kd <= 10)
  {
    printf("A");
  }
  
  return 0;
}