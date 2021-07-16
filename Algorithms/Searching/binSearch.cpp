#include<iostream>
using namespace std;

// Binary Seach function
int binSearch(int ar[], int s, int e, int k)
{
	//Execute until start pointer becomes greater than end pointer
	while(s<=e)
	{
		//find mid of current start and end
		int mid = (s+e)/2;
		if(ar[mid]==k)
		{
			return mid;
		}
		else if(ar[mid] > k)
		{
			e = mid-1;
		}
		else
		{
			s = mid+1;
		}
	}
	return -1;
}
 int main()
 {
 	//Array declared and initialised
 	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
 	int key, s, m;
 	s = 0;
 	m = 9;
 	cin >> key;
 	//Call biary search function
 	int result = binSearch(arr, s, m, key);
 	cout << "Element is present at index " << result << endl;
return 0;

 }