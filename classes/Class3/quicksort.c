#include<stdio.h>

void quicksort(int arr[],int low,int high){
    if(low>=high)
    {
        return;
    }
    int pivot=arr[low];
    int i=low;
    int j=high;
    int temp;
    while(i<=j){
        while(i<=high&&arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    quicksort(arr,low,j-1);
    quicksort(arr,j+1,high);
}
int main()
{
    int n;
    printf("Enter Numbers of elemets: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
