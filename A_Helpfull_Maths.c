#pragma GCC optimize("O2")

#include <stdio.h>
#include <stdint.h>
#include <string.h>

int32_t main()
{
	char s[100];
	scanf("%s", s);

	int freq[3] = {0};

	for (int i = 0; s[i] != '\0'; i += 2)
	{
		if (s[i] >= '1' && s[i] <= '3')
		{
			freq[s[i] - '1']++;
		}
	}

	char ans[100];
	int index = 0;

	for (int i = 0; i < 3; i++)
	{
		while (freq[i]--)
		{
			ans[index++] = '1' + i;
			ans[index++] = '+';
		}
	}

	if (index > 0)
	{
		ans[index - 1] = '\0';
	}
	else
	{
		ans[0] = '\0';
	}

	printf("%s\n", ans);

	return 0;
}
