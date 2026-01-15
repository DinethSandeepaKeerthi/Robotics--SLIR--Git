#include <stdio.h>;
int main(){
	
	int H;
	int salary;
	
	
	printf("enter the working hours =");
	scanf("%i",&H);
	
	if(H<100){
		salary = H*100;
			
	}else if(H<125){
		salary = (100*100)	+ ((H-100)*120);
	
	}else if(H<150){
		salary = (100*100) + (25*120) + ((H-125)*150);
		
	}else if(H<200){
		salary =(100*100) + (25*120) + (25*150) + ((H-150)*180);
		
	}else {
		salary =(100*100) + (25*120) + (25*150) + (50*180)+ ((H-200)*200);
		
	}
	
		printf("%i\n",salary);
	
		
	
	
	
	
	
	
	return 0;
}