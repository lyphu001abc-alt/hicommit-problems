#include <stdio.h>

int main() {
  float kd;
  int dc;
  scanf("%f",&kd);
  if(kd < 4.00)
  {
    printf("F");
  }
  else if(kd < 5.0f)
  {
    printf("D");
  }
  else if(kd < 5.5f)
  {
    printf("D+");
  }
   else if(kd < 6.5f)
  {
    printf("C");
  }
   else if(kd < 7.0f)
  {
    printf("C+");
  }
   else if(kd < 8.0f)
  {
    printf("B");
  }
   else if(kd < 9.0f)
  {
    printf("B+");
  }
   else if(kd >= 9.00)
  {
    printf("A");
  }
  
  return 0;
}