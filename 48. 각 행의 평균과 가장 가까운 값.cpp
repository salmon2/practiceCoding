#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	//freopen("input.txt", "rt", stdin);
	vector <vector <int> > v (9, vector<int> (9,0));
	
	for(int i = 0; i< 9; i++){
		for(int j = 0; j<9; j++){
			cin >> v[i][j];
		}
	}
	
	for(int i = 0; i<9; i++){
		int sum = 0;
		int avg;
		int min_d = 9999;
		int min_v = 0;
		for(int j = 0; j<9; j++){
			sum += v[i][j];
		}
		avg = (int)(((float)sum/9)+0.5);
		
		for(int j = 0; j<9; j++){
			int minus;
			if(avg > v[i][j])
				minus = avg - v[i][j];
			else
				minus = v[i][j] - avg;
			
			if(min_d > minus){
				min_d = minus;
				min_v = v[i][j];
			}
			else if( min_d == minus){
				if(v[i][j] > min_v){
					min_d = minus;
					min_v = v[i][j];
				}
			}	 
		}
	
		cout << avg <<' '<<min_v << '\n';
		
	}
	
	
}
				
		
	
