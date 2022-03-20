/*

  desmo of 2d array int /float/double
  
  int op[row][col]
  int op[2][3]; =>2*3=>different elements are present=6 ints are presents
  6 ints ->6*4=24bytes re consumed/allocated in consigative
  */
  
  
  #include<stdio.h>
  int main()
  
  
  {
      int arr[2][3]={{10,20,30},{40.50,60}};
      printf("sizeof(arr)=%d , sizeof(arr[0]) = %d ",sizeof(arr),sizeof(arr[0]));
      printf("\n Address of arr[0][0]=%u, value=%d",&arr[0][0],arr[0][0]);
      printf("\n Address of arr[0][1]=%u, value=%d",&arr[0][1],arr[0][1]);
      printf("\n Address of arr[0][2]=%u, value=%d",&arr[0][2],arr[0][2]);
  printf("\n Address of arr[1][0]=%u, value=%d",&arr[1][0],arr[1][0]);
  printf("\n Address of arr[1][1]=%u, value=%d",&arr[1][1],arr[1][1]);
  printf("\n Address of arr[1][2]=%u, value=%d",&arr[1][2],arr[1][2]);
  
  
  return 0;
  }
