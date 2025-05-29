#include<stdio.h>
int main()
{
	int i;
	int arr[50]={10,20,30,40,50};
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Travesing the array element: ");
	for(i=0;i<length;i++)
	{
		printf("element at index %d is %d \n",i,arr[i]);
	}
	return 0;
}
