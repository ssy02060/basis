#include <stdio.h>
// 2675
int main()
{ 
	
	int tc;
	scanf("%d", &tc);
	
	for(int c = 0; c < tc; c++)
	{
		char str[30];
		int length;
		scanf("%d %s", &length, str);
		for(int i = 0; str[i] != 0; i++)
		{
			for(int j = 0; j < length; j++)
				printf("%c", str[i]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}

