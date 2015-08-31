#include <stdio.h>

#define MAX 100
void main()
{
	int arr[]= {12,31,23,213};
	
	printf("%d",sizeof(arr)/sizeof(arr[0]));
}
