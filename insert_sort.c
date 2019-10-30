#include<stdio.h>
#include<stdlib.h>
#define RAND_MAX 0x7fffffff
#define MAX 20000

int main(void){
	int str[MAX];
	int i,j,x,l,k;
	
	printf("-----文字列の作成-----\n");
	//ランダムな数列の作成
	for(l=0;l<MAX+1;l++){
		str[l]=rand();
		printf("%d\n",str[l]);
	}
	
	printf("----------\n\n-----ソート-----\n");
	//挿入ソート
	for(i=0;i<MAX;i++){
		for(j=i+1;j<MAX;j++){
			if(str[i]>str[j]){
				x=str[i];
				str[i]=str[j];
				str[j]=x;
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