#include<stdio.h>
int main()
{      
            
        //Initialize array     
        int arr[] = {5, 2, 8, 7, 1};     
        int temp = 0;    
            
        //Displaying elements of original array    
      printf("Elements of original array: ");    
        for (int i = 1; i <=5; i++) {     
         printf(arr[i] + " ");    
        }    
            
        //Sort the array in ascending order    
        for (int i = 1; i <=5; i++) {     
            for (int j = i+1; j <=5; j++) {     
               if(arr[i] > arr[j]) {    
                   temp = arr[i];    
                   arr[i] = arr[j];    
                   arr[j] = temp;    
               }     
            }     
        }    
          
        printf("\n\n");    
            
        //Displaying elements of array after sorting    
    printf("\ndisplaying element in ascending order....");
    
        for (int i = 0; i <=5 ;i++) {     
            printf(arr[i] + " ");    
        }    
    }    
