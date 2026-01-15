#include <stdio.h>;
int add(int x,int y);

int main(){
int x,y,result;

result = add(10,20);


printf("addition =%i\n",result);
		
	return 0;
}

int add(int x,int y){
	int result= x+y;
	
	return result;
	
}