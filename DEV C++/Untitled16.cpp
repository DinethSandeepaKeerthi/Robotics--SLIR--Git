#include <stdio.h>;
int main(){
	
	int H;
	char T;
	int m;
	int n;
	
	
	printf("enter the working hours =");
	scanf("%i",&H);
	
	m = H/10;
	n = H%10;
	
	if(n==0){
		if(m==0){
			printf("zero");
		}
		
		else if(m==1){
			printf("ten");
		}
		
		else if(m==4){
			printf("forty");
		}
		
		else if(m==2){
			printf("twenty");
		}
		
		else if(m==3){
			printf("thirty");
		}
		
		else if(m==5){
			printf("fifty");
		}
		
		else if(m==6){
			printf("sixty");
		}
		
		else if(m==7){
			printf("seventy");
		}
		
		else if(m==8){
			printf("eighty");
		}
		
		else if(m==9){
			printf("ninty");
		}
		
	}
	
		
		
	if(n==1){
		else if(m==1){
			printf("eleven");
		}
		
		else if(m==4){
			printf("forteen");
		}
		
		else if(m==2){
			printf("twelve");
		}
		
		else if(m==3){
			printf("thirteen");
		}
		
		else if(m==5){
			printf("fifteen");
		}
		
		else if(m==6){
			printf("sixteen");
		}
		
		else if(m==7){
			printf("seventy");
		}
		
		else if(m==8){
			printf("eighteen");
		}
		
		else if(m==9){
			printf("nintteen");
		}
		
	}
	
	
	if(n==1 ){
		printf("one");	
	}
	
	else if(n==2){
		printf("two");	
	}
	else if(n==3){
		printf("three");	
	}
	else if(n==4){
		printf("fore");	
	}
	else if(n==5){
		printf("five");	
	}
	else if(n==6){
		printf("six");	
	}
	else if(n==7){
		printf("seven");	
	}
	else if(n==8){
		printf("eight");	
	}
	else if(n==9){
		printf("nine");	
	}
	
		
			

	
		
		
		
		
		//printf("%i\n",salary);
	
		
	
	
	
	
	
	
	return 0;
}