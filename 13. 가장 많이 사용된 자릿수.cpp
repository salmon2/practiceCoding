#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt", "rt", stdin);
	char num[100];
	
	
	int nums[10] = {0};
	int index;
	int max = 0;
	cin >> num;
	
	//cout << num;
	for(int i = 0; num[i] != '\0'; i++){
		index = num[i] - '0';
		nums[index]++;
	}
	
	for(int i = 0; i<10; i++){
		if(nums[max] <nums[i]){
			max = i;
		}
		else if (nums[max] == nums[i]){
			max = i;
		}
	}
	cout << max;
}
