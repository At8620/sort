#include<stdio.h>
#include<stdlib.h>
#define RAND_MAX 0x7fffffff
#define MAX 2000

int main(void){
	int str[2000];
	int i,j,x,l,k;
	
	printf("-----文字列の作成-----\n");
	//ランダムな数列の作成
	for(l=0;l<MAX+1;l++){
		str[l]=rand();
		printf("%d\n",str[l]);
	}
	
	printf("----------\n\n-----ソート-----\n");
	//バブルソート
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX-i;j++){
			if(str[j]>str[j+1]){
				x=str[j];
				str[j]=str[j+1];
				str[j+1]=x;
			}
		}
	}
	
	//結果表示
	for(k=0;k<MAX;k++){
		printf("%d\n",str[k]);
	}
	printf("----------\n");
	
	return 0;
}