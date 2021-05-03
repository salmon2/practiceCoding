#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	
	int player1[100];
	int player2[100];
	
	for(int i = 0; i<num; i++){
		cin >> player1[i];
	}

	for(int i = 0; i<num; i++){
		cin >> player2[i];
	}
	
	//1 가위, 2 바위, 3 보 
	for(int i = 0; i<num; i++){
		if(player1[i] == 1){
			if(player2[i] == 1){
				cout<< 'D' << '\n'; 
			}
			else if(player2[i] == 2){
				cout << 'B'<< '\n'; 
			}
			else if(player2[num==3]){
				cout << 'A'<< '\n'; 
			}
		}
		else if(player1[i] == 2){
			if(player2[i] == 1){
				cout<< 'A'<< '\n';  
			}
			else if(player2[i] == 2){
				cout << 'D'<< '\n'; 
			}
			else if(player2[i==3]){
				cout << 'B'<< '\n'; 
			}
		}
		else if(player1[i] == 3){
			if(player2[i] == 1){
				cout<< 'B'<< '\n';  
			}
			else if(player2[i] == 2){
				cout << 'A'<< '\n'; 
			}
			else if(player2[i]==3){
				cout << 'D'<< '\n'; 
			}
		}
	}
}
