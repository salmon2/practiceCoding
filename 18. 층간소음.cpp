#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// 'a' 97
// 'A' 65


int main(){
	//freopen("input.txt", "rt", stdin);
	int num, max;
	int s[100];
	int count = 0;
	int res = 0;
	cin >> num >> max;
	for(int i =0; i<num; i++){
		cin >> s[i];
	}
	
	for(int i = 0; i<num; i++){
		if(s[i]> max){
			count++;
			if(res <= count){
				res = count;
			}
		}
		else
			count = 0;
	}
	
	if(res == 0){
		cout << -1;
	}
	else
		cout << res;
}


