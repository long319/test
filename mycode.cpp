#include<stdio.h>
int main(){
	int i,j;
	for(i=100;i<=200;i++){
		for(j=2;j<i;j++){
			if(i%j==0)
			break;
			else
			continue;
		}if(j==i)
		printf("%4d",i);
	}return 0;
}
