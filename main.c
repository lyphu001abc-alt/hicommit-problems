#include <stdio.h>

int main() {
   int distance;
   long order_value;
    if (scanf("%d %lld", &distance , &order_value) !=2){
      return 0;    
    }
  if ( distance <= 0 || order_value <= 0){
    printf(" INVALID\n");
  }
  else( order_value >= 500000 && distance < 15){
    printf(" Mien Phi\n");
    else(distance >= 1 && distance <= 5){
       printf(" 15000\n");
    }
    else(distance >=6 && distance <=15){
      printf(" 25000\n");
    }
    else(distance > 15){
      printf("40000\n");
    }

  }
  return 0;
}