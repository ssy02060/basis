#include <stdio.h>

int main(void){
	int s = 0;
	int ans = 0;
	
	char str[200000];
	
	scanf("%s", str);
	
	for(int i = 0; str[i] != 0; i++){
		if(str[i] == '('){
			s++;
		}
		
		else if(str[i] == ')'){
			if(str[i - 1] == '('){
				s--;
				ans += s;
			}
			else if(str[i - 1] == ')'){
				s--;
				ans += 1;
			}
		}
		
	}
	printf("%d", ans);
	
	return 0;
}
