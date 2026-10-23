#include <stdio.h>

int main() {
  float dtb;
  scanf("%f",&dtb);
  if(dtb >= 9.0)
  {
    printf("XUAT_SAC");
  }
  else if((dtb >= 8.0) && (dtb < 9.0))
  {
    printf("GIOI");
  }
  else if(dtb >= 7.0 && dtb < 8.0)
  {
    printf("KHA");
  }
  else if(dtb < 7.0)
  {
    printf("KHONG_DAT");
  }
  
  float drl;
  scanf("%f",&drl);
  if(drl >= 90)
  {
    printf("XUAT_SAC");
  }
  else if((drl >= 80) && (drl < 90))
  {
    printf("TOT");
  }
  else if((drl >= 70) && (drl < 80))
  {
    printf("KHA");
  }
  else if(drl < 70)
  { 
    printf("KHONG_DAT");
  }

  
  return 0;
}