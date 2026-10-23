#include <stdio.h>

int main() {
  int khoangdiem,int diemchu;
  khoangdiem = kd;
  diemchu = dc;
  if(kd < 4.0)
  {
    printf("F");
  }
  else if(kd > 4.0 && kd < 4.9)
  {
    printf("D");
  }
  else if(kd > 5.0 && kd < 5.4)
  {
    printf("D+");
  }
   else if(kd > 5.5 && kd < 6.4)
  {
    printf("C");
  }
  
  return 0;
}