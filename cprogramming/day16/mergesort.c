
	#include <stdio.h>
	#include<stdlib.h>
	#include<string.h>
	
	
	
	void display(char [], int);
	void mergeDivide( char [], int,  int );
	void mergeConquor( char[], int,int,int);
	
	int main()
	{
	
		char ch[] = "hello_world";
		int Cap = sizeof(ch)/sizeof(ch[0]);
	
		printf("\nBefore Sorting\n");
		display(ch,Cap);
		
		mergeDivide(ch,0,Cap -1);
		printf("\nAfter Selection Sort\n\n");
		display(ch,Cap);
	
		printf("\n\n");
		return 0;
	}
	
	void display(char ch[], int Cap)
	{
		int i;
		for(i=0;i<Cap;i++)
			printf(" %d ",ch[i]);
		printf("\n");
	}
	
	
	void mergeDivide(char ch[], int is, int ie)
	{
		int mid=0;
		if(is < ie)
		{
			mid = is+(ie-is)/2;
			mergeDivide(ch,is,mid);
			mergeDivide(ch,mid+1,ie);
			//here we are merging the sorted array
			mergeConquor(ch,is,mid,ie);
		}
	
	}
	
	void mergeConquor(char ch[], int is, int mid, int ie)
	{
		//create sub array a[p-q] and a[q+1-r] for array of a[p-r]
		int leftArr[100],rightArr[100],i,j,k;
		int n1,n2; // no of elements present in each sub array
		n1 = mid - is + 1;
		n2 = ie - mid;
	
		for(i=0;i<n1;i++)
			leftArr[i] = ch[is+i];
		for(i=0;i<n2;i++)
			rightArr[i] = ch[mid+1+i];
	
		printf("\nContents of a1\n");
		display(leftArr,n1);
		printf("\nContents of a2\n");
		display(rightArr,n2);
		printf("\n\n");
	
	
		i=0;
		j=0;
		k = is;
	
		//untill we reach to the end of a1 and a2, pick larger/greatest among arrays
	
		while(i<n1 && j<n2)
		{
			if(leftArr[i] <= rightArr[j]){
				ch[k] = leftArr[i];
				i++;
			}
			else
			{
				ch[k] = rightArr[j];
				j++;
			}
			k++;
		}
	
		while(i<n1)
		{
			ch[k] = leftArr[i];
			i++;
			k++;
		}
	
		while(j<n2)
		{
			ch[k]=rightArr[j];
			j++;
			k++;
		}
	
	
	
	
	}
