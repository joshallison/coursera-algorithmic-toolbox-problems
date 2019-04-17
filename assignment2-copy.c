#include <stdio.h>

int main() {
	int n;
	long a = 0, b = 0, current = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%ld", &current);
		if (current > a) {
			if (a > b) {
				b = a;
			}
			a = current;
		} else if (current > b) {
			b = current;
		};
	};
	printf("%ld\n", a * b);
	return 0;
};
