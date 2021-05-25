#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	char str[100];
	char g;
	int age = 0;
	cin >> str;
	
	//cal Gender
	if(str[7] == '1' || str[7] == '3'){
		g = 'M';
		
	}
	else if (str[7] == '2' || str[7] == '4'){
		g = 'W';
	}
	
	//String to int
	for(int i = 0; i<2; i++){
		age = age*10 + str[i] - 48;
	}
	
	//cal age
	if(str[7] == '1' || str[7] == '2'){
		age = 100 - age + 20;
	}
	else if (str[7] == '3' || str[7] == '4'){
		age = 20 - age;
	}
	
	
	cout << age << ' ' << g;
	
}
