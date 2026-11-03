void printHollowRect(int n, int m) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			// Print '*' for boundary cells, otherwise print a space
			if (i == 1 || i == n || j == 1 || j == m) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
