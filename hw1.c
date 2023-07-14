#include <stdio.h>
int main()
{
	int year;
	printf("Type a year: ");
	scanf("%d", &year);
	if(year%4==0)
		printf("This is a LEAP year.\n");
	else
		printf("This is NOT a leap year. \n");
	return 0;
}
