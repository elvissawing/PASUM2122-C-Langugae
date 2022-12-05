// Check either the age is eligible for voting or not

#include<stdio.h>

int main()
{
	int age ;

	//input age
	printf("Enter the age of the person: ");
	scanf("%d",&age);

	//check voting eligibility
	/*if (age>=18)
	{
		printf("Eligible for voting\n");
	}
	else
	{
		printf("Not eligible for voting\n");
	}
	*/

(age>=18)?
(printf("Eligible for voting")):(printf("Not eligible for voting"));
	return 0;


}



