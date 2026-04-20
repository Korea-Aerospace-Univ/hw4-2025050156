#include <stdio.h>

int main(void)
{
	int answer = 0;
	int input = 0;
	int cnt = 0;
	/* char disp = '\0'; */

	scanf("%d", &answer);
	do {
		scanf("%d", &input);
		if(input < answer)
			/* disp = '<'; */
			printf("%d<?\n", input);
		else if(input > answer)
			/* disp = '>'; */
			printf("%d>?\n", input);
		cnt++;
	} while(input != answer);
	printf("%d==?\n", input);
	printf("%d", cnt);  /* 또는 한 번에 */

	return 0;
}
