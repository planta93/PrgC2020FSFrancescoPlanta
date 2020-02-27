#include <stdio.h>






int main(void)
{

	int testValue = 0;
	printf("Enter testValue:");
	scanf("%d" ,&testValue);


	int limitValue = 0;
	printf("Enter limitValue:");
	scanf("%d" ,&limitValue);

	//int testValue = 1;
	//int limitValue = 2;
	if(testValue >= limitValue ){
		printf("%d is bigger or equal to %d", testValue, limitValue);
	}
	else{
		printf("%d is less than %d", testValue, limitValue);
	}
	return 0;
}

