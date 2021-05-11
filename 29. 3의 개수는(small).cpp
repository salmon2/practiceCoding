//#include <iostream>
//#include <vector>
//#include <stdlib.h>
//using namespace std;

#include<stdio.h> 
#include<stdlib.h>
#include<time.h>


int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return -1;      // -1 반환
    
    if (num1 > num2)    // a가 b보다 클 때는
        return 1;       // 1 반환
    
    return 0;    // a와 b가 같을 때는 0 반환
}

void makeRandomScore(int std[]){
	srand((unsigned int)time(NULL));
	
	for(int i = 0 ; i<100; i++){
		std[i] = rand()%101;
	}
}

void calRankingToScore(char record[], int std[]){
	int check;
	
	for(int i = 0; i<100; i++){
		if(i<10){
			record[i] = 'A';
		}
		else if(i<25){
			record[i] = 'B';
			if(std[i] == std[9]){
				record[i] = 'A';
			}
		}
		else if(i<50){
			record[i] = 'C';
			if(std[i] == std[24]){
				record[i] = 'B';
			}
		}
		else if (i<80){
			record[i] = 'D';
			if(std[i] == std[49]){
				record[i] = 'C';
			}
		}
		else{
			record[i] = 'F';
			if(std[i] == std[79]){
				record[i] = 'D';
			}
		}
	}
	
}

void printScore(int std[], char record[]){
		for(int i = 0; i<100; i++){
		printf("[%3d, %3d, %c]\n",i+1,std[99-i],record[i]);
	}
}


int main(){
	//freopen("input.txt", "rt", stdin);
	int std[100];
	char record[100];
	
	makeRandomScore(std);
	qsort(std, sizeof(std) / sizeof(int), sizeof(int), compare);
	calRankingToScore(record,std);
	
	printScore(std,record);
	
}








