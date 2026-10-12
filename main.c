#include <stdio.h>
    
    int main(){
    	 int a,b,c;
    	 int max;
    	 scanf("%d",&a);
    	 scanf("%d",&b);
    	 scanf("%d",&c);
    	 if(a < b && b > c){
    	 	max = b;
		 }
		 else if(b < c && c > a){
		 	max = c;
		 }
		 else {
		 	max = a;
		 }
		 printf("%d",max);
    	
	}