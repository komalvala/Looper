#include<stdio.h>
main()
{
	int num,count=0;
	printf("Enter any number: ");
	scanf("%d",&num);
	
	while (num != 0){
		count++;
		num=num / 10;
	}
	printf("Total number of digits: %d",count);
}