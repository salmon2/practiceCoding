#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int Add(vector< vector<int> > t, int z, int x, int a, int b){
	int result = 0;
	for(int i = z; i<a+z; i++){
		for(int j = x; j<b+x; j++){
			result += t[i][j];
		}
	}
	return result;
}




int main(){
	int n, m;
	//freopen("input.txt", "rt", stdin);
	cin >> n;
	cin >> m;
	
	vector< vector<int> > t(n, vector<int>(m,0));
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin >> t[i][j];
		}
	}
	int a, b;
	cin >> a >> b;
	int add = 0;
	int max;
	
	for(int i = 0; i< n-a+1; i++){
		for(int j = 0; j< m-b+1; j++){
			add = Add(t, i, j, a, b);
			if(max < add){
				max = add;
			}
		}
	}
	
	cout << max;
	
	
	
	
}
	
	

				
		
	
