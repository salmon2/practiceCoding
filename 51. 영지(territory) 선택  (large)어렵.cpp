#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	int n, m;
	//freopen("input.txt", "rt", stdin);
	cin >> n;
	cin >> m;
	vector < vector <int> > input(n+1, vector<int>(m+1, 0));
	vector < vector <int> > arr(n+1, vector<int>(m+1, 0));
	
	
	
	for(int i = 1; i<n+1; i++){
		for(int j = 1; j<m+1; j++){
			cin >> input[i][j];
			arr[i][j] = input[i][j] + arr[i][j-1] + arr[i-1][j] - arr[i-1][j-1];
		}
	}
	
	int max;
	int a;
	int b;
	cin >> a >> b;
	
	
	for(int i = a; i<n+1; i = i+1){
		for(int j = b; j<m+1; j = j+1){
			int result = arr[i][j] - arr[i-a][j] - arr[i][j-b] + arr[i-a][j-b];
			if(result > max)
				max = result;
		}
	}
	

	
	
//	for(int i = 0; i<n+1; i++){
//		for(int j = 0; j<m+1; j++){
//			cout << arr[i][j] <<' ';
//		}
//		cout << '\n';
//	}
	
	cout << max;
}
	
	

				
		
	
