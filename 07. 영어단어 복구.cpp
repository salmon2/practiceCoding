#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// '0' = 48
// 'A' = 65
// 'a' = 97
// ' ' = 32


int main(int argc, char** argv) {
	char str[100];
	char res[100];
	int j = 0;
	
	cin.getline(str, 100);
	
	for(int i = 0 ; str[i] != '\0'; i++){
		// 'A'~~ 'Z'
		if(str[i]>=65 && str[i]<= 90 ){
			res[j] = str[i]+32;
			j++;
		}
		// 'a' ~~ 'z'
		else if(str[i] >= 97 && str[i] <= 122){
			res[j] = str[i];
			j++;	
		}
	}
	
	res[j++] = '\n';
	res[j] = '\0';
	
	cout << res;
}
