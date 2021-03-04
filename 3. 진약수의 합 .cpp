#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int a;
	int res = 0; 
	cin >>a;
	
	
	cout<<"1";
	res = res  + 1;
	for(int i = 2; i<a; i++){
		if( a%i == 0){
			res = res + i;
			cout <<" + "<<i;
		}
	}
	cout <<" = " << res;
	
	
}
