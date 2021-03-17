#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// 'a' 97
// 'A' 65


int main(){
	//freopen("input.txt", "rt", stdin);
	int num;
	int st[100];
	int count = 0;
	
	cin >> num;
	for (int i = 0 ; i<num; i++){
		cin >> st[i];
	}
	
	for(int i = 0; i<num; i++){
		for(int j = i+1; j<num;j++){
			if(st[i]<=st[j])
				break;
			if(j == num-1){
				count++;
			}
		}
	}
	cout << count;
	
}


