#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    printf("\nEnter how many elements you want to insert:");
    scanf("%d",&size);
    int *arr;//creating an array of size dynamically at the run time
    if(arr==NULL)
    {
        printf("\nArray could not be initialized!!");
    }
    arr=(int *)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++)
    {
        printf("\nPlease enter element at location %d:",i);
        scanf("%d",(arr+i));
    }
    int p=(sizeof(arr)/sizeof(arr[0]))+1;
    printf("%d\n",p);
    
    printf("%d",printf("%d",sizeof(int)));
    printf("%d\n",sizeof(arr));
    
    int q=sizeof(arr);
    printf("%d\n",q);
    int max=*(arr);
    
    for(int i=0;i<size;i++)
    {
        if(*(arr+i)>max)
        {
            max=*(arr+i);
        }
    }
    printf("the max element in the list is %d",max);
    free(arr);
    return 0;
}
