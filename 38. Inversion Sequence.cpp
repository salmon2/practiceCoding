#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	
	vector<int> arr(n);
	vector<int> res(n);
	
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	
	for(int i = n-1; i>=0; i--){
		int tmp = i+1;
		res.insert(res.begin()+arr[i],tmp);
	}
	
	for(int i = 0; i<n; i++){
			cout << res[i] <<' ';
	}
	
}
				
		
	
