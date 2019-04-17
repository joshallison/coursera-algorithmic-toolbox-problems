#include <stdio.h>

long MaxPairwiseProduct(long n[], int length);

int main() {
	int n;
	scanf("%d", &n);
	long numbers[n];
	for(int i = 0; i < n; ++i) {
		scanf("%ld", &numbers[i]);
	};
	printf("%ld\n", MaxPairwiseProduct(numbers, sizeof(numbers) / sizeof(numbers[0])));
	return 0;
};


long MaxPairwiseProduct(long n[], int length) {
	long maxProduct = 0;
	for(int first = 0; first < length; ++first) {
		for (int second = first + 1; second < length; ++second) {
			long currentSum = n[first] * n[second];
			if (currentSum > maxProduct) {
				maxProduct = currentSum;
			};
		};
	};
	return maxProduct;
};
