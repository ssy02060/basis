#include <stdio.h>
// 8958
int main()
{ 
	
	int tc;
	scanf("%d", &tc);
	
	for(int c = 0; c < tc; c++)
	{
		char str[100];
		int oCnt = 0;
		int result = 0;
		scanf("%s", str);
		
		for(int i = 0; str[i] != 0; i++)
		{
			if(str[i] == 'O')
			{
				result += ++oCnt;
			}
			else{
				oCnt = 0;
			}
		}
		printf("%d\n", result);
	}
	
	
	
	
	return 0;
}

