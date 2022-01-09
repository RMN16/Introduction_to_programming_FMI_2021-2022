#include <iostream>
using namespace std;

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
	isNin(arr, n);

return 0;
}
