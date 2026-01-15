#include <stdio.h>;
int main(){
int n;	
int x[5];

while(n<5){
	
printf("enter the value =");
scanf("%i",&x[n]);

n=n+1;

}
n=0;
while(n<5){

printf("x[%i] =%i\n",n,x[n]);
n=n+1;	
}
	
	
	return 0;
}