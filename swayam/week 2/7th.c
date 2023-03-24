#include<stdio.h>
int main(){
    int n,temp;
    int p=0;
    printf("Enter the size of arrey \n");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Add element in array \n");
        scanf("%d",&arr[i]);
    }
        for (int i = 0; i < n; i++)
    {
        printf(" The element in array  %d \n",arr[i]);
       
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<0){
            if(i != p){
                temp=arr[i];
                arr[i]=arr[p];
                arr[p]=temp;
            }
            p++;

        }
    }
    printf("*****************************\n");
    for (int i = 0; i < n; i++)
    {
        printf(" The element in new array  %d \n",arr[i]);
       
    }
    

   return 0;
}
