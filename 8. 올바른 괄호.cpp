#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// '0' = 48
// 'A' = 65
// 'a' = 97
// ' ' = 32

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	
	char str[30];
	char res[30];
	int j = 0;
	
	cin >> str;
	
	
	for(int i = 0; str[i]!= '\0'; i++){
		if(str[i] == '('){
			res[j++] = '(';
		}
		else if(str[i] == ')'){
			if(i == 0)
				res[j++] = ')';
			else if(res[j-1] == '(')
				j = j-1;
			else
				res[j++] = ')'; 
		}
	}
	if(j != 0){
		cout << "NO";
	}
	else
		cout <<"YES";
}



