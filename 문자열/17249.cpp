#include <stdio.h>
// 17249
int main()
{
	char str[1500];
	scanf("%s", str);
	int left = 0;
	int right = 0;
	bool face = false;
	
	for(int i = 0; str[i] != 0; i++)
	{
		if(str[i] == '0')
			face = true;
		if(str[i] == '@' && face == false)
			left++;
		else if(str[i] == '@' &&face == true)
			right++;
		
	}
	printf("%d %d", left, right);
	
	return 0;
}

