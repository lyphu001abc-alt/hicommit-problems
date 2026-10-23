#include <stdio.h>
  int main()
{
  float dtb;
  float drl;
  scanf("%f",&dtb);
  scanf("%f",&drl);
  if(dtb < 7.0 || drl <7.0)
  {
    printf("KHONG_DAT");
  }
  else if(dtb >= 9.0)
  {
    if(drl >= 90)
    {
      printf("HOC_BONG-XUAT-SAC");
    }
    else if(drl >= 80)
    {
      printf("HOC_BONG_GIOI");
    }
    else if(drl > 70)
    {
      printf("HOC_BONG_KHA");
    }
  }
  else if(dtb >= 8.0)
  {
    if(drl >= 80)
    {
      printf("HOC_BONG_GIOI");
    }
    else if(drl > 70)
    {
      printf("HOC_BONG_KHA");
    }
  }
  else if(dtb > 7.0)
  {
    printf("HOC_BONG_KHA");
  }
  else
  {
    printf("KHONG_DAT");
  }
  return 0;
}
 