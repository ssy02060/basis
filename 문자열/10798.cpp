#include <stdio.h>

int main()
{
	char str[5][20] = {};
	for(int i = 0; i < 5; i++)
	{
		scanf("%s", str[i]);
	}
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(str[j][i] == 0)
				continue;
			printf("%c", str[j][i]);
		}
	}
	return 0;
}
