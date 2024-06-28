#include<stdio.h>
main()
{
	FILE* fp;
	char str[256];
	fp = fopen("file02.txt", "w");
	fprintf(fp, "%S",str);
	fprintf("‘•”õ:%S\n",str);
	fclose(fp);
}