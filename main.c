#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, random_n[10];
	for(i=0; i<10; i++)
		random_n[i]=rand();
	for(i=0; i<10; i++)
		printf("random[%d] is %d\n", i, random_n[i]);
	return 0;
}
