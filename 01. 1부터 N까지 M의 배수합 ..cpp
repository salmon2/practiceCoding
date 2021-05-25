#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int a;
	int b;
	int res = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	for(int i = 0; i<=a; i += b){
		res = res +i;
	}
	
	printf("%d", res);
	
}
