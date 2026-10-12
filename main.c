#include <stdio.h>
    
    int main(){
    	 int a,b,c;
    	 int max;
    	 scanf("%d",&a);
    	 scanf("%d",&b);
    	 scanf("%d",&c);
    	 if(a < b){
    	 	max = b;
		 }
		 else if(b < c){
		 	max = c;
		 }
		 else {
		 	max = a;
		 }
		 printf("%d",max);
    	
	}