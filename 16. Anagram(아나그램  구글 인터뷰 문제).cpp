#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// 'a' 97
// 'A' 65
int main(){
	char str[100];
	char str2[100];
	int index;
	int count1[60] = {0};
	int count2[60] = {0};
	
	cin >>str;
	cin >>str2;
	
	for(int i = 0; str[i] != '\0'; i++){
		index = str[i] - 'A';
		count1[index]++;	
	}

	for(int i = 0; str2[i] != '\0'; i++){
		index = str2[i] - 'A';
		count2[index]++;
	}
//	
//	
//	for(int i =0; i<60; i++)
//		cout <<count1[i];
//	cout<<'\n';
//	for(int i =0; i<60; i++)
//		cout <<count2[i];
//	cout<<'\n';
//	
	for(int i = 0; i<60; i++){
		if(count1[i] != count2[i]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	
}


