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
  else if((BMI >= 18.5) && (BMI < 25.0f))
  {
    printf("NORMAL");
  }
 else if((BMI >= 25.0f) && (BMI < 30.0f))
  {
    printf("OVERWEIGHT");
  }
 else if(BMI >= 30.0f)
  {
    printf("OBESE");
  }
 
  return 0;
}