#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	int count = 0;
	int before = 0;
	vector<int> arr(n);
	
	for(int i = 0; i<n; i++){
		cin >> arr[i];
	}
	
	sort(arr.begin(), arr.end(), greater<int>());
	
	for(int i = 0; i<n; i++){
		if(before != arr[i]){
			count++;
			before = arr[i];
		}
		if(count == 3){
			cout << arr[i] << '\n';
			break;
		}
	}
	
	
}
				
		
	
