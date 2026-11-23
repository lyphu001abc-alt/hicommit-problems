#include <stdio.h>

int main() {
  double d;
  int tien;
  int dongia;
    printf("");
    scanf("%lf",&d);
  if(d <= 1)
  {
    dongia = 15000;
  }
  else if(d >= 2 && d <=5)
  {
    dongia = 13000;
  }
  else if(d >= 6)
  {
    dongia = 11000;
  }

  if(d <= 1)
  {
    tien = d * 15000;
  }
  else if(1 < d && d <= 5)
  {
   tien = 1 * 15000 + (d - 1) * 13000;
  }
  else if(d > 5)
  {
    tien = 1 * 15000 + 4 * 13000 + (d - 5) * 11000;
  }
     printf("%d",tien);
  return 0;
}