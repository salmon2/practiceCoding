#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n;
	int m;
	
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i<n; i++){
		cin >> a[i];
	}
	
	cin >> m;
	vector<int> b(m);
	for(int i = 0; i<m; i++){
		cin >> b[i];
	}
	
	vector<int> res(n);
	
	sort(a.begin(), a.end(), less<int>());
	sort(b.begin(), b.end(), less<int>());
		
	int i = 0;
	int j = 0;
	int k = 0;
	while(i<n && j<m){
		if(a[i]==b[j]){
			res[k] = a[i];
			k++;
			i++;
			j++;
		}
		else if (a[i] < b[j]){
			i++;
		}
		else if(a[i]>b[j]){
			j++;
		}
	}
	
	
	for(int w = 0; w<k; w++){
		cout << res[w] << ' ';
	}
}
				
		
	
