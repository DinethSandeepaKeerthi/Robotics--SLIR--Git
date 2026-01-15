#include <stdio.h>;
int main(){
	
	int x=1;
	int y;
	

	printf("enter the  number =");
	scanf("%i",&y);
	printf("%i =\t",y);
	
	while(y>0){
		
		printf("*%i\t",y);
		x=x*y;
		y=y-1;
			
	}
	
	printf("=%i \n",x);
	
	
	

	
	
	return 0;
}