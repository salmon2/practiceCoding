#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int print(vector<int> res, int n){
	for(int i = res.size()-1; i>=0; i--){
		cout << res[i] <<' ';
		if( i == 0){
			cout << '=' <<' ';
		}
		else{
			cout << '+' << ' ';
		}
	}
	cout<< n << '\n';
}




int main(){
	//freopen("input.txt", "rt", stdin);
	int n;
	int count = 0;
	vector<int> res;
	vector<int> res2;
	cin >> n;
	
	for(int i = n-1; i>0; i--){
		int tmp = n;
		res.clear();
		res2.clear();
		for(int j = i; j>0; j--){
			res.push_back(j);
			tmp = tmp - j;
			if(tmp == 0){
				count++;
				for(int k = res.size()-1; k>=0; k--){
					res2.push_back(res[k]);
				}
				print(res, n);
			}
			if(tmp < 0){
				break;
			}
		}
	}
	
	cout << count;

}
				
		
	
