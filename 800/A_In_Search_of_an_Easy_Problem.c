#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int32_t main() {
	int n;
	scanf("%d", &n);
	int opinion[n];
	bool is_hard = false;
	for (int i = 0; i < n; i++) {
		scanf("%d", &opinion[i]);
		if (opinion[i] == 1) is_hard = true;
	}

	if (is_hard) printf("HARD\n");
	else printf("EASY\n");

	return 0;
}
