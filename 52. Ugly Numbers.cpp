#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	int n, m;
	//freopen("input.txt", "rt", stdin);
	cin >> n;
	
	vector<int> arr(n+1,0);
	arr[1] = 1;

	int p2 = 1;
	int p3 = 1;
	int p5 = 1;
	
	
	int i = 2;
	while(arr[n] == 0){
		vector<int> tmp(3,0);
		
		tmp[0] = arr[p2]*2;
		tmp[1] = arr[p3]*3;
		tmp[2] = arr[p5]*5;
		
		int min = *min_element(tmp.begin(), tmp.end());
		if(min == tmp[0]){
			p2++;
		}
		if(min == tmp[1]){
			p3++;
		}
		if(min == tmp[2]){
			p5++;
		}
		
		arr[i] = min;
		//cout << arr[i] << ' ';
		i++;
	}

	cout << arr[n];
}
	
	

				
		
	
