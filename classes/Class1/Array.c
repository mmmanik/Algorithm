#include<stdio.h>
int main(){
    int n;
    printf("Enter the array size: ");

    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers in array: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int max=arr[0],min=arr[0],minIndex=0,maxIndex=0;
    for(int i=0;i<n;i++){
        if(max<=arr[i])
        {
            max=arr[i];
            maxIndex=i;
        }
        if(min>=arr[i])
        {
            min=arr[i];
            minIndex=i;

        }
    }
    printf("The max number in array: %d at position %d\n",max,maxIndex+1);
    printf("The min number in array: %d at position %d\n",min,minIndex+1);
    return 0;
}
