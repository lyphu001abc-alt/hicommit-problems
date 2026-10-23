#include <stdio.h>

int main() {
  float kd;
  int dc;
  scanf("%2f",&kd);
  if(kd < 4.0)
  {
    printf("F");
  }
  else if(kd <= 4.9)
  {
    printf("D");
  }
  else if(kd <= 5.4)
  {
    printf("D+");
  }
   else if(kd <= 6.4999)
  {
    printf("C");
  }
   else if(kd <= 6.9)
  {
    printf("C+");
  }
   else if(kd <= 7.9)
  {
    printf("B");
  }
   else if(kd <= 8.9)
  {
    printf("B+");
  }
   else if(kd <= 10)
  {
    printf("A");
  }
  
  return 0;
}