#include<stdio.h>
#include<stdlib.h>
#define RAND_MAX 0x7fffffff
#define MAX 200
#define N 3

int main(void){
	int str[MAX];
	int i,j,x,l,z,q,w,e,k;
	
	printf("-----文字列の作成-----\n");
	//ランダムな数列の作成
	for(l=0;l<MAX+1;l++){
		str[l]=rand();
		printf("%d\n",str[l]);
	}
	
	printf("----------\n\n-----ソート-----\n");
	//N個に分割して挿入ソート
	for(z=1;z<N;z++){
		for(i=0;i<MAX;i+=z){
			for(j=i+N;j<MAX;j=N){
				if(str[i]>str[j]){
					x=str[i];
					str[i]=str[j];
					str[j]=x;
				}
			}
		}
	}
	
	//挿入ソート
		for(q=0;q<MAX;q++){
		for(w=q+1;w<MAX;w++){
			if(str[q]>str[w]){
				x=str[q];
				str[q]=str[w];
				str[q]=x;
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