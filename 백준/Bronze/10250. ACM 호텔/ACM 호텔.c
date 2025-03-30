#include <stdio.h>

int main() {
	// 가로 w 세로 h 순번 order
	int TC, w, h, order;

	
	
	scanf("%d", &TC);

	for (int n = 0; n < TC; n++) {
		
		int i, j, stop = 0;

		scanf("%d %d %d", &h, &w, &order);


		// 101호부터 위로 하나씩 넣어서 가장 정문과 가깝게 하기 때문에
		// 층별로 1호부터 w호까지 우선적으로 채우기(예: 101, 201, 301, 102, 202, 302, ...)
		for (i = 1; i <= w; i++) {
			for (j = 1; j <= h; j++) {
				--order;
				if (order == 0) {
					stop = 1;
					break;
				}
			}
			if (stop) break;
		}

		// 구한 층수, 호수를 출력
		printf("%d%02d\n", j, i);
	}


}