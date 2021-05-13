#include <stdio.h>

int stack[200000];

int top = -1;
int isEmpty(){
	return top == -1;
}

void push(char data){
	stack[++top] = data;
}
int pop(){
	return stack[top--];
}

int peek(){
	return stack[top];
}

int main(){
	int K;
	int result = 0;
	
	scanf("%d", &K);
	
	for(int tc = 0; tc < K; tc++){
		int n;
		scanf("%d", &n);
		
		if(n == 0){
			pop();
		}
		else{
			push(n);
		}
	}
	for(int i = 0; i <= top; i++){
		result += stack[i];
	}
	
	printf("%d", result);
	
	
	return 0;
}
