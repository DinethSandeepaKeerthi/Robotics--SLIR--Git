#include <stdio.h>;
int t=0;
int main(){
	int x[5]={10,20,30,40,50};
	int ui[5];
	int z=0;
	int k=0;	
	
while(z<5){
	printf("enter the value =");
	scanf("%i",&ui[z]);
	z=z+1;
}
while(k<5){
	if(x[k]==ui[k]){
	t=t+1;	
	}
	k=k+1;
}

if(t==5){
printf("array are equale");	
}else{
printf("array are not equale");		
}
		
	
	
	return 0;
}