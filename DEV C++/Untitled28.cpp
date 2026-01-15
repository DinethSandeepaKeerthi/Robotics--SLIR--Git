#include <stdio.h>;
int main(){
int n;	
int x[5];
int sum=0;

while(n<5){
	
printf("enter the value =");
scanf("%i",&x[n]);

sum = sum +x[n];
n=n+1;

}

printf("sum =%i\n",sum);

	
	
	return 0;
}