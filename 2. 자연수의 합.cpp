#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int a, b;
	int res = 0;
	
	scanf("%d %d",&a, &b);
	res = a;
	printf("%d ",a);
	
	for (int i = a + 1; i<=b; i++){
		res = res +i;
		printf("+%d ", i);  
	}
	
	printf("= %d", res);
	
}
