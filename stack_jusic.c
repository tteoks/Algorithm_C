#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int *solution(int prices[], size_t prices_len){
	int *answer = (int *)malloc(priced_len * sizeof(int));
	
	for(int i=0; i<prices_len; i++){
		printf("%d ", i); 
	}

	return answer;
}

int main()
{
	int prcies[] = {1, 2, 3, 2, 3};
	int *result;

	result = solution(prices);

	for(int i=0; i<5; i++){
		printf("%d ",result[i]); 
	}
	printf("\n");
}
