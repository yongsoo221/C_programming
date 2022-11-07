#include <stdio.h>

int main()
{
    int arr[5], odd[5], even[5];
    
    printf("5개의 정수를 입력하세요: \n");
    
    for(int i = 0; i < 5; i++) scanf("%d", &arr[i]);
    printf("odd numbers: ");
    for (int i = 0; i < 5; i++){
        if (arr[i] % 2 != 0) printf("%d ", arr[i]);
    }
    printf("\n");
    printf("even numbers: ");
    for (int i = 0; i < 5; i++){
        if (arr[i] % 2== 0) printf("%d ", arr[i]);
    }
    return 0;
}