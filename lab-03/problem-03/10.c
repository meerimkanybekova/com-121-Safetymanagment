#include <stdlib.h>
#include <stdio.h>

void fill_with_random(int *arr, long long n) {
	for (long long i = 0; i < n; i++) {
		arr[i] = rand();
	}
}

long long sum(int *arr, long long n) {
	long long ans = 0;
	for (long long i = 0; i < n; i++) {
		ans += arr[i];
	}
	return ans;
}

int main() {
	long long n;
	scanf("%lld", &n);

	srand(2);

	int *arr = malloc(n * sizeof(int));
	fill_with_random(arr, n);
	printf("%lld\n", sum(arr, n));

	free(arr);
	arr = NULL;
	return 0;
}

