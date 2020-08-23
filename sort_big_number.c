#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *n1, const void *n2){
	char *temp1 = (char *)malloc(5 *  sizeof(char));
	char *temp2 = (char *)malloc(5 *  sizeof(char));
	int temp_int1, temp_int2;

	sprintf(temp1, "%d%d", *(int*)n1, *(int*)n2);
	sprintf(temp2, "%d%d", *(int*)n2, *(int*)n1);
/*
	temp_int1 = atoi(temp1);
	temp_int2 = atoi(temp2);
*/
	if(strcmp(temp2, temp1) > 0){
		return 1;
	} else if(strcmp(temp2, temp1) == 0){
		return 0;
	} else{
		return -1;
	}
}

// numbers_len은 배열 numbers의 길이입니다.
char* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char temp_buf[1000];
	char *temp;
    int len = 0;
    
    // Compute answer size
    for(int i=0; i<numbers_len; i++){
        sprintf(temp_buf, "%d", numbers[i]);
        len += strlen(temp_buf);
    }
    char *answer = (char*)malloc(len * sizeof(char));
	qsort(numbers, numbers_len, sizeof(int), compare);

	memset(temp_buf, 0, 1000);
	memset(answer, 0, len+1);
	if(numbers[0] == 0){
		sprintf(answer, "%d", 0);
	} else{
		for(int i=0; i<numbers_len; i++){
			sprintf(temp_buf, "%d", numbers[i]);
			strncat(answer, temp_buf, strlen(temp_buf));
		}
	}
	return answer;
}

int main()
{
	char *result;
	int numbers[] = {3, 30, 34, 5, 9};

	result = solution(numbers, sizeof(numbers)/sizeof(int));
	printf("%s\n", result);

}
