#include<stdio.h>

int main()
{
	//�ϐ��錾
	int atai1, atai2;
	int add, sub, mul, div;

	//�L�[�{�[�h�����̒l���󂯎��
	printf("��ڂ̒l:");
	scanf("%d", &atai1);
	printf("��ڂ̒l:");
	scanf("%d", &atai2);

	//�l�����Z
	add = atai1 + atai2;//�����Z
	sub = atai1 - atai2;//���Z
	mul = atai1 * atai2;//��Z
	div = atai1 / atai2;//���Z

	//�l�����Z�̌��ʕ\��
	printf("�����Z:%d\n", add);
	printf("���Z:%d\n", sub);
	printf("��Z:%d\n", mul);
	printf("���Z:%d\n", div);


}