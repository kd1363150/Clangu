#include <stdio.h>
main()
{
	int i=0;
	printf("����?");
	scanf("%d", &i);
	do {
		printf("*****\n");
		i--;
	} while (i > 0);
}