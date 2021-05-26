#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include <stack> //include stack library
using namespace std;


int main(){
	int n, m;
	//freopen("input.txt", "rt", stdin);
	stack<int> st; 
	
	cin >> n >> m;
	
	while(n>=m){
		int k = n % m;	//³ª¸ÓÁö
		st.push(k);
		n = n/m;		 
		
	}
	st.push(n);
	
	while(st.empty() == false){
		int v = st.top();
		if(m == 16 && v == 10){
			cout << 'A';
		}
		else if(m == 16 && v == 11){
			cout << 'B';
		}else if(m == 16 && v == 12){
			cout << 'C';
		}else if(m == 16 && v == 13){
			cout << 'D';
		}else if(m == 16 && v == 14){
			cout << 'E';
		}else if(m == 16 && v == 15){
			cout << 'F';
		}
		else
			cout << v;
		st.pop();
	}

}
	
	

				
		
	
