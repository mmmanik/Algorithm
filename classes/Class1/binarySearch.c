#include<stdio.h>
int Binary_Search(int a[],int search, int low,int high)
{

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(search==a[mid])
        {
            return mid;
        }
        else if(search>a[mid])
        {

            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the array size: ");

    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers in array: \n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int s;
    printf("Enter the search item: ");
    scanf("%d",&s);
    int result = Binary_Search(arr, s, 0, n - 1);
    if(result==-1)
    {
        printf("The search item %d doesn't exist in array.\n",s);
    }
    else{
        printf("The search item %d is found at position %d in the array.\n",s,result+1);
    }
    return 0;
}
