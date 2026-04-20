#include <stdio.h>

int main(void) {
	int ecnt = 0, ncnt = 0;
	int maxe = 0, maxn = 0;

	int length = 0;
	int i = 0;

	char c = '\0';

	scanf("%d", &length);
	getchar();  /* 기존 강의자료대로. */
	for(i=0; i<=length; i++) {  /* 마지막에 개행을 받기 위해 한 문자 더 받음. */
		scanf("%c", &c);  /* getchar를 안 다뤘으므로... */
		if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
			ecnt++;
			if(ncnt > 0) {
				if(maxn < ncnt) maxn = ncnt;
				ncnt = 0;
			}
		} else if(c >= '0' && c <= '9') {
			ncnt++;
			if(ecnt > 0) {
				if(maxe < ecnt) maxe = ecnt;
				ecnt = 0;
			}
		} else {
			if(maxn < ncnt) maxn = ncnt;
			if(maxe < ecnt) maxe = ecnt;
		}
	}

	printf("%d\n%d", maxe, maxn);

	return 0;
}
