#include<iostream>
#include<climits>
using namespace std;

void selectionSort(int arr[], int s)
{
	for(int i = 0; i<s-1; i++)
	{
		int min_index = i;
		for(int j = i; j<=s-1; j++)
		{
			if(arr[j] < arr[min_index])
				min_index = j;
		}
		swap(arr[i], arr[min_index]); 
	}
}
int main()
{
	int arr[5] = {14,4,2,22,11};
	int size = sizeof(arr)/sizeof((arr[1]));
	cout <<"Unsorted: \n";
	for (int i = 0; i <size; i++)
	{
		cout<<arr[i]<< " ";
	}
	selectionSort(arr, size);
	cout<<"\nSorted: \n";
	for (int i = 0; i <size; i++)
	{
		cout <<arr[i]<< " ";
	}

	return 0;

}