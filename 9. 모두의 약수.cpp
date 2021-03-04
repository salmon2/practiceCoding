#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int num;
	int res[50001] = {0};
	int j = 0;

	cin >> num;
	
	for(int i = 1 ; i<= num; i++){
		for(j = j + i; j<= num; j= j+i){
			res[j]++;
		}
		j = 0;
	}
	
	for(int i = 1; i<=num; i++){
		if(i != 1)
			cout<< " ";
		cout << res[i];
	}
	
}
