#include<stdio.h>
main(){
	int byo, h, m, s;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &byo);
	if (byo <= 5000) {
		/
			h = byo / 3600;
		byo = byo % 3600;
		m = byo / 60;
		s = byo] % 60;
		printf("%d ŠÔ %d •ª %d •b‚Å‚·\n", h, m, s);
	}
	else {
		printf("“ü—Í‚Í0ˆÈã‚Å‚·");
	}
}
	else{
		printf("ƒGƒ‰[;“ü—Í‚Í5000‚Ü‚Å‚Å‚·");
	}
}