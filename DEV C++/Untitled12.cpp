#include <stdio.h>;
int main(){
	
	int x;
	int y;
	int z;
	
	printf("enter the first  number =");
	scanf("%i",&x);
	printf("enter the second number =");
	scanf("%i",&y);
	printf("enter the second number =");
	scanf("%i",&z);
	
	if((x>y && x>z)||(z>y && y>x)){
		printf("2nd number is max");
		
	}else{ 
		if((y>z && x>z)||(z>x && x>y)){
			printf("1st number is max");	
		}else{
			printf("3rd number is max");	
		}
		
	}
	
	
	
	
	return 0;
}