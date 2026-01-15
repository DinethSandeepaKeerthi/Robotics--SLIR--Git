
#include <stdio.h>;
int main(){
	
	
	int x;
	int y;
	int z;
	printf("enter the number =");
	scanf("%i",&x);
	
	y = x/2.0;
	
	z=2*y;
	
	if(z==x){
	printf("it is even numbet");	
	}
	
	if(z!= x){
	printf("it is odd number");	
	}	
	
	
	return 0;
}