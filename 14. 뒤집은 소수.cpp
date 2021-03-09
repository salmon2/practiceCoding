#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int reverse(int x){
	int a;
	int res = 0;
	bool value = false;
	while(x>0){
		a = x % 10;
		x = x/ 10;
		
		if( a == 0 && value == false)
			continue;
		else{
			res = res * 10 + a;
			value = true;	
		}
	}
	//cout<<res;
	
	return res;
} 
bool isPrime(int x){
	if(x==1){
		return false;
	}
	for(int i = 2; i<x/2; i++){
		if(x%i == 0){
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int num;
	int nums[100] = {0};
	int res;
	
	cin >> num;
	
	for(int i = 0; i<num; i ++){
		cin >> nums[i];
	}
	
	for(int i = 0; i<num; i++){
		res = reverse(nums[i]);
		//cout << res << ' ';
		if(isPrime(res))
			cout << res << ' ';
	}
}
