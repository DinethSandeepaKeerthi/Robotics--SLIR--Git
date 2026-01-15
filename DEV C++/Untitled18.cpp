#include <stdio.h>;
int T=0;

int main(){

	int H=0;
	int x=0;
		
	while(x<=10){
		printf("enter the marks =");
		scanf("%i",&H);
		if(T<H){
			T=H;
		}else{
			T=T;
		}
	x=x+1;			
	}
	
		printf("%i\t",T);
		
	
	return 0;
}