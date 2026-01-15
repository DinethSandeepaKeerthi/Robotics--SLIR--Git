#include <stdio.h>;

int i;
int j;
int main(){
int x[3][3];
for(i=0;i<=2;i++){
	for(j=0;j<=2;j++){
		printf("enter x[%i][%i] = ",i,j);
		scanf("%i",&x[i][j]);
	}
}
 
for(i=0;i<=2;i++){
	printf("\n");
	for(j=0;j<=2;j++){
		printf("%i\t",x[i][j]);
		

	}
}
	return 0;
}