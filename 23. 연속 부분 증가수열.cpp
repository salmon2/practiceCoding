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
	int count = 1;
	int best = 0;
	cin >> n;
	
	vector<int> t(n);
	
	
	for(int i = 0; i<n; i++){
		cin >> t[i];
	}
	

	for(int i = 1; i<n; i++){
		if(t[i-1]<=t[i]){
			count++;
			if(count>best){
				best = count;
			}
		}
		else{
			count = 1;
		}
	}

	cout << best;
}
