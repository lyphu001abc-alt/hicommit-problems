#include <stdio.h>

int main() {
  int m;
  int d;
  int y;
  if(1 <= m && m <= 12)
  {
    scanf("%d",&m);
  }
  else if(1 <= d && d <= m && d <= m)
  {
    scanf("%d",&d);
  }
  else if(y / 400 == 0 && y > 0)
  {
    scanf("%d",&y);
  }
    printf("VALID");

  if(1 <= m && m >= 12)
  {
    scanf("%d",&m);
  }
  else if(1 <= d && d >= m && d <= y)
  {
    scanf("%d",&d);
  }
  else if(y / 400 == 0 && y > 0)
  {
    scanf("%d",&y);
  }
  printf("INVALID");
  return 0;
}