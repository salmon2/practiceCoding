#include <iostream>
#include <vector>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	vector<int> t(n);
	vector<int> res(n);
	
	for(int i =0; i<n; i++){
		cin >> t[i];
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(t[i]> t[j]  && i!=j) {
				res[j]++;			
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		cout << res[i]+1;
	}
	
}
