#include<stdio.h>
main(){
	int byo, h, m, s;
	printf("秒数を入力:");
	scanf("%d", &byo);
	if (byo <= 5000) {
		/
			h = byo / 3600;
		byo = byo % 3600;
		m = byo / 60;
		s = byo] % 60;
		printf("%d 時間 %d 分 %d 秒です\n", h, m, s);
	}
	else {
		printf("入力は0以上です");
	}
}
	else{
		printf("エラー;入力は5000までです");
	}
}