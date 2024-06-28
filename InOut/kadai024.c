#include<stdio.h>

int main()
{
	//•Ï”éŒ¾
	int atai1, atai2;
	int add, sub, mul, div;

	//ƒL[ƒ{[ƒh‚©‚ç“ñ‚Â‚Ì’l‚ğó‚¯æ‚é
	printf("ˆê‚Â–Ú‚Ì’l:");
	scanf("%d", &atai1);
	printf("“ñ‚Â–Ú‚Ì’l:");
	scanf("%d", &atai2);

	//l‘¥‰‰Z
	add = atai1 + atai2;//‘«‚µZ
	sub = atai1 - atai2;//Œ¸Z
	mul = atai1 * atai2;//æZ
	div = atai1 / atai2;//œZ

	//l‘¥‰‰Z‚ÌŒ‹‰Ê•\¦
	printf("‘«‚µZ:%d\n", add);
	printf("Œ¸Z:%d\n", sub);
	printf("æZ:%d\n", mul);
	printf("œZ:%d\n", div);


}