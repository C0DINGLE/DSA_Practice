#include<iostream>
#include<climits>
using namespace std;


void bubbleSort(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for( int j = 0; j< size-i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void printArr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[] = {45,3,22,34,1,22,11,32,17};
	int min = INT_MIN;
	int size = sizeof(arr)/sizeof(arr[0]);
	printArr(arr, size);
	bubbleSort(arr, size);
	cout<<"\n";
	printArr(arr, size);

	return 0;
}