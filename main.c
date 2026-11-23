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
       if(abs > 3)
  {
    printf("FAIL_ATTENDANCE"); 
  }
  else if(min < 4.0)
  {
    printf("FAIL_SUBJECT"); 
  }
    }
    printf("EXCELLENT");
  }
  else if(gpa >= 6.5 && min >= 5.0)
  {
    {
       if(abs > 3)
  {
    printf("FAIL_ATTENDANCE"); 
  }
  else if(min < 4.0)
  {
    printf("FAIL_SUBJECT");
    }
    printf("GOOD");
  }
  else if(gpa >= 5.0 && min >= 4.0)
  {
    {
      if(abs > 3)
  {
    printf("FAIL_ATTENDANCE"); 
  }
  else if(min < 4.0)
  {
    printf("FAIL_SUBJECT");
    }
    }
    printf("PASS");
  }
  else
  {
    {
       if(abs > 3)
  {
    printf("FAIL_ATTENDANCE"); 
  }
  else if(min < 4.0)
  {
    printf("FAIL_SUBJECT"); 
  }
    }
    printf("FAIL");
  }
    
  return 0;
}