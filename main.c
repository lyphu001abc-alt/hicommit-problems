#include <stdio.h>

int main() {
  int kd,int dc;
  if(kd < 4.0)
  {
    printf("F");
  }
  else if(kd >= 4.0 && kd <= 4.9)
  {
    printf("D");
  }
  else if(kd >= 5.0 && kd <= 5.4)
  {
    printf("D+");
  }
   else if(kd >= 5.5 && kd <= 6.4)
  {
    printf("C");
  }
   else if(kd >= 6.5 && kd <= 6.9)
  {
    printf("C+");
  }
   else if(kd >= 7.0  && kd <= 7.9)
  {
    printf("B");
  }
   else if(kd >= 8.0 && kd <= 8.9)
  {
    printf("B+");
  }
   else if(kd >= 9.0 && kd <= 10)
  {
    printf("A");
  }
  
  return 0;
}