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
	int plus[100] = {0};
	int p = 0;
	int minus[100] = {0};
	int m = 0;
	
	for(int i = 0; i<n; i++){
		cin >> arr[i];
		if(arr[i]<0){
			minus[m] = arr[i];
			m++;
		}
		else{
			plus[p] = arr[i];
			p++;
		}
	}
	
	
	for(int i = 0; i < m; i++){
		cout << minus[i] << ' ';
	}
	for(int i = 0; i < p; i++){
		cout << plus[i] << ' ';
	}
	
	
	
	
	
	
	
}
				
		
	
