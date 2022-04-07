#include<stdio.h>
#define ROW 2
#define COL 3
  int main()
  
  
  {
      int arr[2][3]={{10,20,30},{40.50,60}};
      int i,j;
      
      printf("sizeof(arr)=%d , sizeof(arr[0]) = %d ",sizeof(arr),sizeof(arr[0]));
      
      printf("\n Base address of arr=%u",arr);
      /*
      printf("\n Address of arr[0][0]=%u, value=%d",&arr[0][0],arr[0][0]);
      printf("\n Address of arr[0][1]=%u, value=%d",&arr[0][1],arr[0][1]);
      printf("\n Address of arr[0][2]=%u, value=%d",&arr[0][2],arr[0][2]);
  printf("\n Address of arr[1][0]=%u, value=%d",&arr[1][0],arr[1][0]);
  printf("\n Address of arr[1][1]=%u, value=%d",&arr[1][1],arr[1][1]);
  printf("\n Address of arr[1][2]=%u, value=%d",&arr[1][2],arr[1][2]);
  */
  for(i=0;i<ROW;i++)
  {
    for(j=0;j<COL;j++)
    {
      printf("\n Address of arr[%d][%d]=%u, value=%d",&arr[i][j],arr[i][j]);
    
 }
 }
  return 0;
  }
