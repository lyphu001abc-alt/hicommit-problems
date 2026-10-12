#include <stdio.h>
    
    int main(){
    	 int a,b,c;
    	 scanf("%d",&a);
    	 scanf("%d",&b);
    	 scanf("%d",&c);
    	 int max = a;
    	 if(max < b){
    	 	max = b;
		 }
		 else if(max < c){
		 	max = c;
		 }
		 else {
		 	max = a;
		 }
		 printf("%d",max);
		 return 0;
    	
	}