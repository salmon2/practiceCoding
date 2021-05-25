#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	int n;
	//freopen("input.txt", "rt", stdin);
	cin >>n;
	vector<int> row(n,0);
	vector<int> col(n,0);
	vector< vector <int> > t(n, vector<int>(n,0));
	
	for(int i = 0; i<n; i++){
		cin >> col[i];
	}	
	for(int i = 0; i<n; i++){
		cin >> row[i];
	}
	

	for(int i = 0; i<n; i++){
		for (int j = 0; j<n; j++){
			t[j][i] = row[i];
		}
	}
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(t[i][j] > col[i]){
				t[i][j] = col[i];
			}
		}
	}
	
	int result = 0;
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			result += t[i][j];
		}
	}
	
	cout << result;
	
	
	
	
}
	
	

				
		
	
