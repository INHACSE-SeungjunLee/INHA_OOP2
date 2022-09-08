#include <iostream>
#include <array>
using namespace std;

int main()
{
	int arr[5];
	
	for (int i{ 0 }; i < 5; i++)
	{
		cin >> arr[i];
	}

	for (int i{ 0 }; i < 5; i++)
	{
		for (int j{ 0 }; j < 5; j++)
		{
			for (int k{ 0 }; k < 5; k++)
			{
				cout << *(arr + i) << *(arr + j) << *(arr + k) << '\n';
			}
		}
	}
}