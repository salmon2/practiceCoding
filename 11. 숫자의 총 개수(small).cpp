#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	int num;
	int count = 0;
	int temp;	
	int res;
	int dec = 1;
	
	cin >> num;
	temp = num;

	while(temp>0){
		temp = temp / 10;
		count++;
	}
	
	

	for(int i = 1; i<count; i++){
		dec = dec * 10;
	}
	
	for(int i = count-1; i>0; i--){
		res = res*10 + 9 * i;
	}
	
	

	int value = (num - dec+1) * count;
	res = res +  value;


	cout<< res<<'\n';
}
