#include <stdio.h>

int min(int n1, int n2)
{
	if(n1<n2)
		return n1;
	return n2;
}
int main()
{
	int a,b,c;
	printf("Type first number: ");
	scanf("%d", &a);
	printf("Type second number: ");
	scanf("%d", &b);
	printf("Type third number: ");
	scanf("%d", &c);
	int min_number = min(min(a,b), c);
	if(a==b==c)
		printf("The numbers are equal:\n");
	else if(a%min_number ==0 && b%min_number==0 && c%min_number==0)
		printf("%d\n", min_number);
	else
	{
		for(int i=min_number/2;i>=1;--i)
		{
			if(a%i==0 && b%i==0 && c%i==0)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}
