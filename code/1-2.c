#include <stdio.h>

int sum_range(int *start, int *end){
    int sum;
    for(int i = 0; i < (end-start)+1; i++){
        sum += *(start+i);
    }
    return sum;
}

int main(){
    int data[] = {10, 20, 30, 40, 50, 60, 70};
    
    int result = sum_range(&data[1], &data[4]);

    printf("%d\n", result);
    return 0;
}