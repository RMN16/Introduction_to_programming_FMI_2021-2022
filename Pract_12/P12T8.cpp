#include <iostream>
using namespace std;

void swap(int& elementA, int& elementB) {
	int temp = elementB;
	elementB = elementA;
	elementA = temp;
}

void bubbleSort(int* array, int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
			}
		}
	}
}

int isNin(int* arr, int n)
{
	if (*arr == 0)
	{
		cout << "False";
		return 0;
	}

	if (n == *arr)
	{
		cout << "True";
		return 1;
	}
	else
		isNin(arr + 1, n);
}

int main(){

    const int maxSize = 100;
	int arr[maxSize] = { 25,4,3,4,5,2 };

	int n;
	cin >> n;
	bubbleSort(arr, 6);
	isNin(arr, n);

return 0;
}
