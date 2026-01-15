#include <stdio.h>;
int main(){
	int x;
	int y;
	
	printf("enter the first  number =");
	scanf("%i",&x);
	printf("enter the second number =");
	scanf("%i",&y);
	
	
	if(x>y){
		printf("first number is max");	
	}else{
		printf("second number is max");	
	}
	
	return 0;
}