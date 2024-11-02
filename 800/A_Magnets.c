#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	int group = 1;
	char charge;
	for (int i = 0; i < n; i++ ) {
		char mag[3];
		scanf("%s", &mag);
		if (i == 0) {
			charge = mag[1];
			continue;
		}
		if (mag[0] == charge) {
			group++;
		}

		charge = mag[1];
	}

	printf("%d", group);

	return 0;
}
