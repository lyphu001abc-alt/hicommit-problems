#include <stdio.h>
    
    int main(){
    	 int a,b,c;
    	 int max = a;
    	 scanf("%d",&a);
    	 scanf("%d",&b);
    	 scanf("%d",&c);
    	 if(b > max){
    	 	max = b;
		 }
		 else if(c > max){
		 	max = c;
		 }
		 else {
		 	max = a;
		 }
		 printf("%d",max);
    	
	}