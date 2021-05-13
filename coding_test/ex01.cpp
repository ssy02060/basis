#include <stdio.h>

char stack[1000];
char str[1000];
int top = -1;
int isEmpty(){
	return top == -1;
}

void push(char data){
	stack[++top] = data;
}
char pop(){
	return stack[top--];
}

char peek(){
	return stack[top];
}
int main()
{
	int flg = 1;
	scanf("%s", str);
	
	for(int i = 0; str[i] != 0; i++){
		if(str[i] == '(' || str[i] == '{' || str[i] == '['){
			push(str[i]);
		}
		else if(str[i] == ')'){
			if(pop() == '(')
				continue;
			else{
				flg = 0;
				break;
			}
		}
		else if(str[i] == '}' ){
			if(pop() == '{')
				continue;
			else{
				flg = 0;
				break;
			}
		}
		else if(str[i] == ']'){
			if(pop() == '[')
				continue;
			else{
				flg = 0;
				break;
			}
		}
	}
	
	printf("%d", flg);

	
}
