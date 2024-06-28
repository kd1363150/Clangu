#include<stdio.h>
main()
{
	int k,i;

	k= 0;
	for (i = 1; i <= 10; i++) {
		k += i;
		printf("1 から %d までの和 = %d\n", i, k);
	}

}