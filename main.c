#include <stdio.h>

int main() {
  int m;
  int d;
  int y;
  scanf("%d %d %d",&d, &m ,&y);
    if(1 <= m && m <= 12)
    {
      if(m=1|| m=3|| m=5||m=7||m=8||m=10||m=12)
      {
        31;
      }
      else if(m=4||m=6||m=9||m=11)
      {
        30;
      }
      else if(2)
      {
        if(y %400 == 0 && y > 0 || y %400 != 0 && y > 0)
        {
          29;
        }
        else
        {
          28;
        }
      }
       printf("VALID");
    }
    else
    {
     printf("INVALID"); 
    }
   
 
  return 0;
