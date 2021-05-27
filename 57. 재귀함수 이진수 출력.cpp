#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int Cal(int n){
	if(n == 1){
		cout << n;
		return 0;
	}
	int k = n/2;
	Cal(k);
	int m = n%2;
	cout << m;
}



int main(){
	int n, m;
	//freopen("input.txt", "rt", stdin);
	cin >> n;
	
	Cal(n);


	
}
	
	

				
		
	
