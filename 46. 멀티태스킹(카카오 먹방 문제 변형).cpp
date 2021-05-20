#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n;
	int t[2000];
	int k;
	
	cin >> n;
	
	for(int i = 1; i<n+1; i++){
		cin >> t[i];
	}
	
	cin >> k;
	int index = 1;
	for(int i = 0; i<k; i++){
		int cnt = 1;
		t[index]--;
		index++;
		if(index > n) index = 1;
		while(1){
			if(t[index] == 0){
				index++;
				cnt++;
				if(index > n) index = 1;
				if(cnt > n){
					cout << -1;
					return 0;
				}	
			}
			else{
				if(index > n) index = 1;
				break;
			}
		}
		
	
	}
	

	cout << index;
	
	
	
	
}
				
		
	
