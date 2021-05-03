#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// '0' = 48
// 'A' = 65
// 'a' = 97
// ' ' = 32

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int pl[2][10];
	int res[2] = {0};
	int win = -1;
	
	for(int i = 0; i<2; i++){
		for(int j =0; j<10; j++){
			cin >> pl[i][j];
		}
	}
	
	for(int i = 0; i<10; i++){
		if(pl[0][i] > pl[1][i]){
			res[0] += 3;
			win = 0;
		}
		else if (pl[0][i] == pl[1][i]){
			res[0] += 1;
			res[1] += 1;
		}
		else if(pl[0][i] < pl[1][i]){
			res[1] += 3;
			win = 1;
		}
	}
	
	cout << res[0] <<' '<<res[1] << '\n';
	
	if(res[0] > res[1]){
		cout << 'A';
	}
	else if(res[0] < res[1]){
		cout << 'B';
	}
	else{
		if(win == 1){
			cout << 'B';
		}	
		else if (win == 0){
			cout << 'A';
		}
		else if (win == -1){
			cout << 'D';
		}
	}
	
	


}
