#include <stdio.h>

int main()
{
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[6] = {7,8,9,10,11,12};
    int temp;
    int * ar1 = &arr1[0];
    int * ar2 = &arr2[0];
    for(int i = 0; i < 6; i++){
        temp = *ar1;
        *ar1 = *ar2;
        *ar2 = temp;
        ar1++;
        ar2++;
    }
    printf("arr1: ");
    for(int i = 0; i < 6; i++) printf("%d ",arr1[i]);
    printf("\n");
    printf("arr2: ");
    for(int i = 0; i < 6; i++) printf("%d ",arr2[i]);
    return 0;
}