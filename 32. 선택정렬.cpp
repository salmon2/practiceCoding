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
	
	for(int i = 0; i<10; i++){
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end(), less<int>());
	
	for(int i = 0; i<n; i++){
		cout << arr[i] << ' ';
	}
	
	
	
}
				
		
	
