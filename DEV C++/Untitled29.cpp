#include <stdio.h>;
int main(){
int n=0;	
char x[5];
int count=0;

while(n<5){
	
printf("enter the the characters =");
scanf(" %c",&x[n]);// 2 or more characters to scan for put a space scanf""

if(x[n]=='a'){
	count =count+1;
}
n=n+1;

}
printf("numbers of a =%i\n",count);

	
	
	return 0;
}