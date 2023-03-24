#include<stdio.h>
int main(){
    int n;
        printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    int frequency=0;
    int p;

    printf("The value of n is %d \n",n);
    for (int i = 0; i < n; i++)
    {
        printf("Add element in array \n");
        scanf("%d",&arr[i]);
    }
        for (int i = 0; i < n; i++)
    {
        printf(" The element in array  %d \n",arr[i]);
       
    }

    printf("Enter the number in array whose frequency you want to find\n");
    scanf("%d",&p);
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==p){
    
            frequency=frequency+1;
        }
    }
    printf("The frequency of number %d is given as %d \n",p,frequency);
    return 0;
  
}