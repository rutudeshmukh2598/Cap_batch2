#include<stdio.h>
#include<stdlib.h>

int bSearch(int [],int,int,int);

int main()
{
   int arr[]={1,4,7,9,17,43,78};
   int a;
   int size=sizeof(arr)/sizeof(a[0]);
   int ele=78;
   
   int ifound =0;
   ifound=bSearch (arr[0],size-1,ele);
   if(ifound==-1)
   printf("\nElement is not found");
   else
   printf("\nElement is found at index :%d",ifound);
   printf("\n\n");
   
   printf("\n\n");
   }
   int bSearch(int a[],int sindex,int eindex, int ele)
   {
       int mid=0;
       
      if(eindex>=sindex)
      {
          mid=sindex +(eindex - sindex)/2;
          
          if(a[mid]==ele)
            return mid;
            else if(ele < a[mid])
            return (bSearch(a,sindex,mid-1,ele));
            else
            return (bSearch(a,mid +1,eindex,ele));
            
            
      }
      return -1;
      }
