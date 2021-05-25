#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int N;
	int input;
	int min, max;	
	
	cin >> N;
	
	for (int i = 0; i<N; i++){
		cin >> input;
		if( i == 0){
			min = input;
			max = input;
		}
		if (input < min){
			min = input;
		}
		if( input > max){
			max = input;
		}
	}
	cout << max-min;
}
