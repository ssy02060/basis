#include <stdio.h>
#include <string.h>
int main(){
	char str[200];
	
	
	scanf("%s", str);
	
	int N = strlen(str);
	int left = 0;
	int right = N - 1;
	int result = 0;
	for(int i = 0; i < N; i++)
	{
		if(str[left] == str[right]){
			result = 1;
		}
		else{
			result = 0;
			break;
		}
		left++;
		right--;
	}
	printf("%d", result); 
	return 0;
	
}

