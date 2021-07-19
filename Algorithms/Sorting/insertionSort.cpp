#include<iostream>
using namespace std;



void insertSort(int arr[], int size)
{
	for(int i = 1; i < size; i++)
	{
		int temp = arr[i];
		int j = i-1;
		while(j>=0 && temp<arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
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
	int size = sizeof(arr)/sizeof(arr[0]);
	printArr(arr, size);
	insertSort(arr, size);
	cout<<"\n";
	insertSort(arr, size);
	printArr(arr, size);
	return 0;
}