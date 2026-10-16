#include <stdio.h>

int main() {
   int distance;
   long order_value;
    if (scanf("%d %lld", &distance , &order_value))
	{
      return 0;    
    }
    if ( distance < 0 || order_value < 0){
       printf("INVALID");
  }
    else if( order_value >= 500000 && distance < 15){
       printf("0");
   }
    else if(distance >= 1 && distance <= 5){
       printf("15000");
    }
    else if(distance >= 6 && distance <= 15){
      printf("25000");
    }
    else if(distance >= 15){
      printf("40000");
    }

  }
