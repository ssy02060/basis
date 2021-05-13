#include <stdio.h>
// 11721
int main()
{
	char str[200];
	scanf("%s", str);
	
	for(int i = 0; str[i] != 0; i++)
	{
		printf("%c", str[i]);
		if(i % 10 == 9)
			printf("\n");
	}
	
	return 0;
}

