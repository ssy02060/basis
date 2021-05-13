#include <stdio.h>
// 2789
int main()
{
	char str[200];
	scanf("%s", str);
	
	for(int i = 0; str[i] != 0; i++)
	{
		if(str[i] == 'C' || str[i] == 'A' || str[i] == 'M' || str[i] == 'B'|| 
		str[i] == 'R'|| str[i] == 'I'|| str[i] == 'D'|| str[i] == 'G' || str[i] == 'E' )
			continue;
		printf("%c", str[i]);
		
	}
	
	return 0;
}

