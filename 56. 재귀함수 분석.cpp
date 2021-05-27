#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int Print(int a, int n){
	if(a > n){
		return 0 ;
	}
	else{
		cout << a;
	}
	return Print(a+1, n);
}



int main(){
	int n, m;
	freopen("input.txt", "rt", stdin);
	cin >> n;
	
	Print(1, n);


	
}
	
	

				
		
	
