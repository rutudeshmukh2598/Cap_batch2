 
 #include<stdio.h>
 int main()
 {  
   int arr[] = { 6,7,4,3,5,2};
        int n = arr.length;
		
        
        leaderprint(arr, n);
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    break;
                }
	
                if (j == n - 1)
                   printf("%d" ,arr[i]+is a leader);
              }
     }
                   
   }
