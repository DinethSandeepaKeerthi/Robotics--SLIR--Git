#include <stdio.h>;
int main(){
int n=0;	
char pw[5];



while(n<5){
	
printf("enter the psw =");
scanf(" %c",&pw[n]);       // 2 or more characters to scan for put a space scanf""

n=n+1;

}
if(pw[0]=='1'&& pw[1]=='2'&& pw[2]=='3'&& pw[3]=='4'&& pw[4]=='5'){
	printf("accses grande");
}else{
	printf("accses denied");
}


	
	
	return 0;
}