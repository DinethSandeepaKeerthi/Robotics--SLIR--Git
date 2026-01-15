#include <stdio.h>;
int main(){
	
	int x=1;
	int y;
	int z;
	
	printf("enter the  number =");
	scanf("%i",&z);
	
	while(x<=12){
			y=z*x;
			printf("%i *%i =%i\n",z,x,y);
			x=x+1;
			
	}
	

	
	
	return 0;
}