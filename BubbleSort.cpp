#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void bubbleSort(array<int, 5>, int);

int main()
{
	cout << "Input array: ";
	array <int, 5> arr;
	for (int i{ 0 }; i < 5; i++)
	{
		cin >> arr[i];
	}
	int s = 5;
	bubbleSort(arr, 5);

	return 0;
}

void bubbleSort(array<int, 5> arr, int s)
{
	int n{ 1 };
	
	int origin[5];
	for (size_t i{ 0 }; i < 5; i++)
	{
		origin[i] = arr[i];
	}
		
	sort(arr.begin(), arr.end());

	while (1)
	{
		for (size_t i{ 0 }; i < s - 1; i++)
		{

			if (origin[i] > origin[i + 1])
			{
				int a = origin[i];
				int b = origin[i + 1];
				origin[i] = b;
				origin[i + 1] = a;
				cout << "Pass " << n << ": ";
				for (size_t i{ 0 }; i < s; i++)
				{
					cout << origin[i] << " ";
				}
				cout << '\n';
				n++;
				break;
			}
		}

		int isSame{ 0 };
		for (size_t i{ 0 }; i < 5; i++)
		{
			if (origin[i] == arr[i])
			{
				isSame++;
			}
		}

		if (isSame == 5)
			break;
	}
}