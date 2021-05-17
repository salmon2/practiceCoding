//#include <iostream>
//#include <vector>
//#include <stdlib.h>
//using namespace std;

#include<stdio.h> 
#include<stdlib.h>
#include<time.h>


int compare(const void *a, const void *b)    // �������� �� �Լ� ����
{
    int num1 = *(int *)a;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������
    int num2 = *(int *)b;    // void �����͸� int �����ͷ� ��ȯ�� �� �������Ͽ� ���� ������

    if (num1 < num2)    // a�� b���� ���� ����
        return -1;      // -1 ��ȯ
    
    if (num1 > num2)    // a�� b���� Ŭ ����
        return 1;       // 1 ��ȯ
    
    return 0;    // a�� b�� ���� ���� 0 ��ȯ
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








