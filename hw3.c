#include <stdio.h>
int main()
{
	int a;
	printf("Type the number: ");
	scanf("%d", &a);
	if(!((a>>4) & 1))
		a+=16;
	printf("%d\n", a);
	return 0;
}
