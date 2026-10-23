#include <stdio.h>

int main() {
  float dtb;
  float drl;
  scanf("%f",&dtb);
  scanf("5f",&drl);
  if(dtb >= 9.0 && drl >= 90)
  {
    printf("HOC_BONG_XUAT_SAC");
  }
  
  else if(dtb >= 8.0 && dtb < 9.0 && drl >= 8.0 && drl < 9.0)
  {
    printf("HOC_BONG_GIOI");
  }
  else if(dtb >= 7.0 && dtb < 8.0 && drl >= 7.0 && drl < 8.0)
  {
    printf("HOC_BONG_KHA");
  }
  else(dtb < 7.0 && drl < 7.0)
  {
    printf("KHONG_DAT");
  }
  
  return 0;
}