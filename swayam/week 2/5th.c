#include<stdio.h>
int main(){
    int n;
    printf("how many element your array contains \n");
    scanf("%d",&n);
    int arr_1[n];
    int arr_2[n];

       for (int i = 0; i < n; i++)
    {
        printf("Add element in array_1 \n");
        scanf("%d",&arr_1[i]);
    }
        for (int i = 0; i < n; i++)
    {
        printf(" The element in array_1  %d \n",arr_1[i]);
       
    }  
    printf("***************************\n");
       for (int i = 0; i < n; i++)
    {

        arr_2[i]=arr_1[i];
    }
        for (int i = 0; i < n; i++)
    {
        printf(" The element in array_2  %d \n",arr_2[i]);
       
    } 


    return 0;
    

}