#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	//freopen("input.txt", "rt", stdin);
	int n, k;
	cin >> n;
	cin >> k;
	vector<int> t(n);
	vector<int> d;
	for(int i = 0; i<n; i++){
		t[i] = i+1;
	}
	int i = 0;
	int count = 1;
	
	while(t.size() != 1){
		if(i > t.size()-1)
			i = 0;		
		int index = i;
		if(count == k){
			d.push_back(t[index]);
//			for(int j = 0; j<d.size(); j++){
//				cout << d[j];
//			}
//			cout <<'\n';
			t.erase(t.begin()+index);
			count = 1;
			continue;
		}
		
		i++;
		count++;	
	}
	
	
	
	cout << t[0];
}
				
		
	
