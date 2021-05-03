#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// '0' = 48
// 'A' = 65
// 'a' = 97
// ' ' = 32

int main(int argc, char** argv) {
	freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	vector<int> t(n);
	vector<int> k(n);
	
	int num;
	for(int i = 0; i<n; i++){
		cin >> t[i];
	}
	
	
	for(int i = 0; i<n-1; i++){
		num = t[i] - t[i+1];
		if(num < 0){
			num = -num;
		}
		if(k[num] == 0){
			k[num] = 1;
		}
	}
	
	
	for(int i = 1; i<n; i++){
		if(k[i] == 0){
			cout << "NO" << "\n";
			return 0;
		}
	}
	
	cout << "YES" << "\n";
	
}




