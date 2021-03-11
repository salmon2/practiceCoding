#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// 'a' 97
// 'A' 65

int sum(int x){
	int res = 0;
	for(int i = 0; i<=x; i++){
		res = res + i;
	}
	
	return res;
}
int main(){
	//freopen("input.txt", "rt", stdin);
	int num;
	int card[10];
	int ans[10];
	
	cin >> num;
	
	for(int i = 0; i<num; i++){
		cin >> card[i];
		cin >> ans[i];
	}
	
	for(int i =0; i<num; i++){
		if(ans[i] == sum(card[i]))
			cout << "YES"<<'\n';
		else
			cout << "NO" << '\n';
	}

}


