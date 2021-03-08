#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int digit_sum(int x){
	int res = 0;
	while(x>=10){
		res = res + x % 10;
		x = x/10;	
	}
	
	res = res + x;
	
	return res;
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int res = 0;
	int num;
	int arr[100];
	
	int value = 0;
	int index = 0;
	
	cin >> num;
	for (int i = 0; i<num; i++){
		cin>>arr[i];
	}
	
	for( int i = 0; i<num; i++){
		res = digit_sum(arr[i]);
		if(value < res){
			value = res;
			index = i;
		}
		else if (value == res){
			if(arr[i] > arr[index]){
				value = res;
				index = i;
			}			
		}
	}
	
	cout <<arr[index];
	
}
