int main() {
	int arr[6] = { 1, 1, 2, 2, 2, 8 };
	for (int i = 0; i < 6; i++) {
		int num;
		scanf("%d", &num);
		printf("%d ", arr[i] - num);
	}

}