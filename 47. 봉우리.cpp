#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
void Print(int v[][52] ,int n){
	for(int i = 0; i<n+2; i++){
		for(int j = 0; j<n+2; j++){
			cout << v[i][j];
		}
		cout << '\n';
	}
}


int main(){
	//freopen("input.txt", "rt", stdin);
	int n;
	cin >> n;
	int v[52][52] = {0};
	
	for(int i = 1; i<n+1; i++){
		for(int j = 1; j<n+1; j++){
			cin >> v[i][j];
		}
	}
	
	//Print(v, n);
	
	int count = 0;
	bool check[4] = {false};
	
	
	
	for(int i = 1; i<n+1; i++){
		for(int j = 1; j<n+1; j++){
			for(int k = 0; k<4; k++){
				check[k] = false;
			}
			if(v[i-1][j] < v[i][j]){
				check[0] = true;
			}
			if(v[i][j-1] < v[i][j]){
				check[1] = true;
			}
			if(v[i+1][j] < v[i][j]){
				check[2] = true;
			}
			if(v[i][j+1] < v[i][j]){
				check[3] = true;
			}
			if(check[0] && check[1] && check[2] && check[3]){
				count++;
				//cout << v[i][j] << '\n';
			} 
		}
	}
	
	cout << count;
	
}
				
		
	
