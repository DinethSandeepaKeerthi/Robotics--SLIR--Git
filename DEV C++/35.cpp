#include <stdio.h>;
#include <String.h>


int main(){
char str1[81]= "hello";
char str2[81]= " world";
char str3[81]= "hello";


int status_1_2 = strcmp(str1,str2);
int status_1_3 = strcmp(str1,str3);





printf("status_1_2 = %i\n",status_1_2);
printf("status_1_3 = %i\n",status_1_3);
		
	return 0;
}