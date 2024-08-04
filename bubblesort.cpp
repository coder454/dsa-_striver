#include<stdio.h>
int main()
{
	int arr[9] = {5,3,4,2,1,8,14,7,6};
	int n = 9;
	for(int i = 0 ;i<n;i++)
	{
		printf("%d",arr[i]);
		
	}
	// bubble sort
	for(int i = 0 ;i<n-1;i++)// here i may be <= n-1
    {
	    for(int j =0;j<=n-2;j++)
		{
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		
   }
   printf("\n");
   for(int i=0;i<n;i++)
   {
   	printf("%d",arr[i]);
   }
   return 0;

}
