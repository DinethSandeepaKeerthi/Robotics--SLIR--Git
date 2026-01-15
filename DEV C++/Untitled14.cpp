#include <stdio.h>;
int main(){
	
	int chem;
	int phy;
	int math;
	int avg;
	
	
	printf("enter the chemistry markas =");
	scanf("%i",&chem);
	printf("enter the physics marks =");
	scanf("%i",&phy);
	printf("enter the maths marks =");
	scanf("%i",&math);

	avg = ((chem+phy+math)/3.0);
	
	printf("%i\n",avg);
	
	if(avg<40){
		printf("grade = F");
	}else if(40<=avg){
		if(avg<60){
			printf("grade = C");	
		}else if(60<=avg){
			if(avg<70){
				printf("grade = B-");	
			}else if(70<=avg){
				if(avg<80){
					printf("grade = B+");	
				}else if(80<=avg){
					if(90<avg){
						printf("grade = A-");	
					}else{
						printf("grade = A+");
					}
				}
			}
		}
	}
	
	
	return 0;
}