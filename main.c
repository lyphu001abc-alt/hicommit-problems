#include <stdio.h>

int main() {
  int m;
  int d;
  int y;
  scanf("%d %d %d",&d, &m ,&y);
    if(1 <= m && m <= 12)
    {
      if(1, 3, 5, 7, 8, 10, 12)
      {
        31;
      }
      else if(4, 6, 9, 11)
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
}