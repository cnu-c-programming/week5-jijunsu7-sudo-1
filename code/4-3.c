#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    int index;

    scanf("%d", &index);

    if(index > 4 || index < 0)
        printf("Error!\n");
    else
        printf("%d", arr[index]);

    return 0;
}