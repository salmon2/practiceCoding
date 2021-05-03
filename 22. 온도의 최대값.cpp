#include <iostream>
#include<vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// '0' = 48
// 'A' = 65
// 'a' = 97
// ' ' = 32

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int n;
	int k;
	cin >> n >> k;
	vector<int> t(n);
	vector<int> res(n);
	int sum;
	int result;
	
	for(int i= 0; i<n; i++){
		cin >> t[i];
	}
	
	for(int i = 0; i< k; i++){
		sum += t[i];
	}
	result = sum;
	
	
	for(int i = k; i<n; i++){
		sum = sum + t[i] - t[i-k];	
		if(sum >result)
			result = sum;
	}
	
	
	
	cout << result;

}
