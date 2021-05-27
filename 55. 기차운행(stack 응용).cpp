#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
vector<char> p;
int Push(stack<int>* tmp, int v){
	p.push_back('P');
	tmp->push(v);
//	int a = tmp->top();
//	cout << a;
}
int Out(stack<int>* tmp, vector<int>* arr){
	p.push_back('O');
	arr->push_back(tmp->top());
	tmp->pop();
}



int main(){
	int n, m;
	freopen("input.txt", "rt", stdin);
	cin >> n;
	
	vector<int> arr;
	stack<int> tmp;
	

	for(int i = 0; i<n; i++){
		int input;
		cin >> input;
		if(!tmp.empty()){
			while(!tmp.empty()){
				if(tmp.top() < input){
					Out(&tmp, &arr);
				}
				else
					break;
			}
		}
		Push(&tmp, input);
	}
	
	while(tmp.empty() == false){
		if(arr.back()>tmp.top()){
			cout << "impossible";
			return 0;
		}
		
		Out(&tmp, &arr);
	}
	
	for(int i = 0; i<p.size(); i++){
		
		cout << p[i];
		//cout << arr[i];
	}

	



	
}
	
	

				
		
	
