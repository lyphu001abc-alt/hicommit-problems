#include <stdio.h>

int main() {
  float w;
  float h;
  float BMI;
  scanf("%f",&w);
  scanf("%f",&h);
  BMI = w/((h/100) * (h/100));
  if(BMI < 18.5)
  {
    printf("UNDERWEIGHT");
  }
  else if(BMI >= 18.5 && BMI <= 25)
  {
    printf("NORMAL");
  }
 else if(BMI > 25 && BMI <= 30)
  {
    printf("OVERWEIGHT");
  }
 else if(BMI > 30)
  {
    printf("OBESE");
  }
 
  return 0;
}