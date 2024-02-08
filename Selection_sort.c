#include<stdio.h>
int arr[],i,j,min,n;
void Selection_sort(int arr[], int a){
    for(i=0;i<a;i++){
        min=i;
        for ( j = 0; j < a; j++)
        { 
        if (arr[min]<arr[j])
        {
            int *temp=arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
        }
        }
    }
}

void printArr(int arr[]){
    for ( i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    printf("How many numbers are you planning on sorting\n");
    scanf("%d", &n);
    int Array[n];
     printf("Enter %d elements into the array: \n", n);
    for (i=0;i< n;i++)
    {
        scanf("%d", &Array[i]);
    }
    Selection_sort(Array,n);
    printf("Your sorted list is:\n");
    printArr(Array);

    return 0;
}
