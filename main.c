#include <stdio.h>

int main() {
  int abs;
  float gpa;
  float min;
  scanf("%f",&gpa);
  scanf("%f",&min);
  scanf("%d",&abs);
  if(gpa >= 8.0 && min >= 7.0)
  {
    {
       if(abs > 3)
  {
    printf("FAIL_ATTENDANCE"); break ;
  }
  else if(min < 4.0)
  {
    printf("FAIL_SUBJECT"); break ;
  }
    }
    printf("EXCELLENT");
  }
  else if(gpa >= 6.5 && min >= 5.0)
  {
    {
       if(abs > 3)
  {
    printf("FAIL_ATTENDANCE"); break ;
  }
  else if(min < 4.0)
  {
    printf("FAIL_SUBJECT"); break ;
  }
    }
    printf("GOOD");
  }
  else if(gpa >= 5.0 && min >= 4.0)
  {
    printf("PASS");
  }
  else
  {
    {
       if(abs > 3)
  {
    printf("FAIL_ATTENDANCE"); break ;
  }
  else if(min < 4.0)
  {
    printf("FAIL_SUBJECT"); break ;
  }
    }
    printf("FAIL");
  }
    
  return 0;
}