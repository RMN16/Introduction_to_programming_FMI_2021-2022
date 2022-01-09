#include <iostream>
using namespace std;

int minElementOfArray(int* arr, int min)
{
	if (*arr == 0)
	{
		cout << min;
		return 0;
	}

	if (*arr < min)
		min = *arr;

	minElementOfArray(arr + 1, min);
}

int main(){

    const int maxSize = 100;
	int arr[maxSize] = { 25,4,3,4,5,2 };

    int min = 2147483646;
    minElementOfArray(arr, min);


return 0;
}
