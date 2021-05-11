#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n,k;
	cin >> n;
	cin >> k;
	bool check = false;
	vector<int> arr(k);
	vector<int> cash(n+1);
	
	for(int i = 0; i<k; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i<k; i++){
		check = false;
		for(int j = 0; j<n; j++){
			if(cash[j] == arr[i]){
				cash.insert(cash.begin() + 0, arr[i]);
				cash.erase(cash.begin()+j+1);
				check = true;
//				for(int i = 0; i<n; i++){
//					cout << cash[i] <<' ';
//				}
//				cout << '\n';

			}
		}
		if(check != true){
			cash.insert(cash.begin() + 0 ,arr[i]);
//			for(int i = 0; i<n; i++){
//				cout << cash[i]<<' ';
//			}
//			cout << '\n';
		}
		
	}
	
	
	
	for(int i =0; i<n; i++){
		cout << cash[i] << ' ';
	}
	
	
	
	
	
	
}
				
		
	
