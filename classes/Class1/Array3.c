#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size: ");

    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    printf("Enter the position to delete (1-indexed): ");
    scanf("%d", &pos);
    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }
    for(int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    printf("Array after deletion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

