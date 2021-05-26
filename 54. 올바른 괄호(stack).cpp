#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include <stack> //include stack library
#include <string>
using namespace std;


int main(){
	
	//freopen("input.txt", "rt", stdin);
	char str[50];
	stack<char> st;
	cin >> str;
	
	st.push(str[0]);
	
	for(int i = 1; str[i] != '\0'; i++){
		if(str[i] == '('){
			st.push(str[i]);
		}
		else if (str[i] == ')'){
			if(st.top() == '('){
				st.pop();
			}
			else
				st.push(str[i]);
		}
		else if (st.empty() == true){
			cout << "NO";
			return 0;
		}
	}
	
	if(st.empty() == false){
		cout << "NO";
	}
	else{
		cout << "YES";
	}
	

}
	
	

				
		
	
