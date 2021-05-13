#include <stdio.h>

int main()
{
	int cnt = 0;
	int flg = 0;
	for(int i = 0; i < 8; i++)
	{
		char str[10];
		scanf("%s", str);
		for(int j= 0; j < 8; j++)
		{
			flg = i % 2;
			if(j % 2 == flg && str[j] == 'F')
			{
				cnt++;
			}
		}	
	}
	printf("%d", cnt);
	
}
