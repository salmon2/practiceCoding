#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool isPrime(int x){
	for(int i = 2; i*i<=x; i++){
		if(x%i == 0){
			return false;
		} 
				
	}
	return true;
}

int main(){
	int num;
	int count = 0;
	cin >> num;
	
	for(int i = 2; i<=num; i++){
		if(isPrime(i)){
			//cout << i << ' ';
			count++;	
		}
	}
	
	cout << count;
}
