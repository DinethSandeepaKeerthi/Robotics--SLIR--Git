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
	
	if(x>y ){
		if(y>z){
			printf("2st number is middle");
		}else{
			if(z<x){
			printf("3rd number is middle");
			}
		}
	}else{ 
		if(z<x){
			printf("1st number is middle");	
		}else{
			if(y<z){
			printf("3nd number is middle");
			}	
		}
		
	}
	
	
	
	
	return 0;
}