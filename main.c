#include <stdio.h>

int main() {
  float kd;
  int dc;
  scanf("%2f",&kd);
  if(kd < 4.00)
  {
    printf("F");
  }
  else if((kd >= 4.00) && (kd < 4.99))
  {
    printf("D");
  }
  else if((kd >= 5.00) && (kd < 5.49))
  {
    printf("D+");
  }
   else if((kd >= 5.50) && (kd < 6.49))
  {
    printf("C");
  }
   else if((kd >= 6.50) && (kd < 6.90))
  {
    printf("C+");
  }
   else if((kd >= 7.00)  && (kd < 7.99))
  {
    printf("B");
  }
   else if((kd >= 8.00) && (kd < 8.99))
  {
    printf("B+");
  }
   else if((kd >= 9.00) && (kd <= 10.00))
  {
    printf("A");
  }
  
  return 0;
}