#include<stdio.h>
main(){
	int byo, h, m, s;
	printf("�b�������:");
	scanf("%d", &byo);
	if (byo <= 5000) {
		/
			h = byo / 3600;
		byo = byo % 3600;
		m = byo / 60;
		s = byo] % 60;
		printf("%d ���� %d �� %d �b�ł�\n", h, m, s);
	}
	else {
		printf("���͂�0�ȏ�ł�");
	}
}
	else{
		printf("�G���[;���͂�5000�܂łł�");
	}
}