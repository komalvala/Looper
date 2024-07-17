#include<stdio.h>
main()
{
	char i='a';
	do{
		printf(" %c ",i);
		i++;i++;i++;i++;
	}while(i <= 'z');
}