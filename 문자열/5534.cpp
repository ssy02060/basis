#include <iostream>
#include <string>

using namespace std;

int main(){
	string str;
	int N;
	int cnt = 0;
	
	cin >> N;
	cin >> str;
	int len = str.length();
	
	for(int tc = 0; tc < N; tc++){
		string sign;
		cin >> sign;
		for(int i = 0; i < len; i++){
			if(sign.find(str) != -1){
				cnt++;
				break;
			}
			else if(sign.find(str[i]) == -1){
				break;
			}
			else{
				int start = sign.find(str[i]);
				int end = sign.length();
				int 
				for(j = start; j < end; j++){
					
				}
			}
		}
	}
	
	return 0;
}
