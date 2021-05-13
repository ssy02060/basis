#include <stdio.h>

int main()
{
	int N;
	int okV = 0;
	int okH = 0;

	char str[200][200];
	
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%s", str[i]);
	}
	
	for(int i = 0; i < N; i++)
	{
		int dotCnt = 0;
		for(int j = 0; j < N; j++)
		{
			if(str[i][j] == '.'){
				dotCnt++;
			}
				
			else{
				dotCnt = 0;
			}
			if(dotCnt == 2)
				okV++;
		}
	}
	
	for(int j = 0; j < N; j++)
	{
		int dotCnt = 0;
		for(int i = 0; i < N; i++)
		{
			if(str[i][j] == '.'){
				dotCnt++;
			}
			else{
				dotCnt = 0;
			}
			if(dotCnt == 2)
				okH++;
		}
	}
	printf("%d %d", okV, okH);
	
	return 0;
}
