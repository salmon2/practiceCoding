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
	
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i<n-1; i++){
		for(int j = i+1; j<n; j++){
			if(arr[i]>= arr[j]){
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	
	for(int i = 0; i<n; i++){
		cout << arr[i] << ' ';	
	}
	
	
	
	
}
				
		
	
