#include <stdio.h>
#define STR_LEN 2000000
// 10809
int main()
{
	char str[STR_LEN];
	int alpha[26] = {};
	int pos = 0;
	
	int maxCnt = 0;
	int maxPos = 0;
	char result = '?';
	
	scanf("%s", str);
	
	for(int i = 0; str[i] != 0; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			pos = str[i] - 'a';
		else if(str[i] >='A' && str[i] <= 'Z')
			pos = str[i] - 'A';
		alpha[pos]++;
	}
	
	for(int i = 0; i < 26; i++)
	{
		if(maxCnt <= alpha[i]){
			if(maxCnt == alpha[i]){
				result = '?';
				continue;
			}
			maxCnt = alpha[i];
			result = i + 'A';
		}
	}
	
	printf("%c", result);
	
	
	return 0;
}

