#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size: ");

    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int insert,pos;
    printf("Enter insert item: ");
    scanf("%d",&insert);
    printf("Enter the position: ");
    scanf("%d",&pos);
    for(int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos-1]=insert;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
