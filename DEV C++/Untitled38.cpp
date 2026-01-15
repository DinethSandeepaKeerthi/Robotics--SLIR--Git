#include <stdio.h>;
void add(int x,int y);

int main(){
int x,y;

add(10,20);

		
	return 0;
}

void add(int x,int y){
	int result= x+y;
	printf("addition =%i\n",result);
}