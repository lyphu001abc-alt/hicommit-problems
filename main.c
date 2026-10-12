#include <stdio.h>
    
    int main(){
    	 int a,b,c;
    	 scanf("%d",&a);
    	 scanf("%d",&b);
    	 scanf("%d",&c);
    	 int max = a;
    	 if(a > max){
    	 	max = a;
		 }
		 else if(b > max){
		 	max = b;
		 }
		 else if (c > max){
		 	max = c;
		 }
		 printf("%d",max);
    	
	}