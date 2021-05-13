#include <stdio.h>
#include <stack>

using namespace std;

stack<char> s1;
stack<char> s2;


void left(){
	if(s1.empty()){
		return ;
	}
	else{
		s2.push(s1.top());
		s1.pop();
	}
}
void right(){
	if(s2.empty()){
		return ;
	}
	else{
		s1.push(s2.top());
		s2.pop();
	}
}
void minus(){
	if(s1.empty()){
		return ;
	}
	s1.pop();
}

int main()
{
	int N;
	int cnt = 0;
	scanf("%d", &N);
	
	for(int tc = 0; tc < N; tc++ ){
		char str[200000];
		scanf("%s", str);
		for(int i = 0; str[i] != 0; i++){
			if(str[i] == '<'){
				
				left();
			}
			else if(str[i] == '>'){
				
				right();
			}
			else if(str[i] == '-'){
				
				minus();
			}
			else{
				s1.push(str[i]);
			}
		}
		while(s1.empty() != true){
			s2.push(s1.top());
			s1.pop();
		}
		while(s2.empty() != true){
			printf("%c",s2.top());
			s2.pop();
		}
		printf("\n");
	}
}
