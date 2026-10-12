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
		 printf("%d",max);
		 return 0;
    	
	}