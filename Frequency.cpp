#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <array>
using namespace std;

int main()
{
	srand(time(NULL));
	cout << "Rating" << setw(20) << "Frequency" << '\n';
	array <int, 100> rating;
	array <int, 11> frequency{ 0 };
	for(size_t i{ 0 }; i < 100; i++)
	{
		rating[i] = rand() % 11 + 5;
	}
	for (int n : rating)
	{
		frequency[n - 5]++;
	}

	int n{ 5 };

	for (int i{ 0 }; i < 11; i++)
	{
		cout << setw(6) << i + 5 << setw(20) << frequency[i] << '\n';
	}

	int maxFreq{ frequency[0] }, minFreq{ frequency[0] };
	int maxRat{ 5 }, minRat{ 5 };

	for (size_t i{0}; i < 11; i++)
	{
		if (frequency[i] > maxFreq)
		{
			maxFreq = frequency[i];
			maxRat = i + 5;
		}
	}

	for (size_t i{ 0 }; i < 11; i++)
	{
		if (frequency[i] < minFreq)
		{
			minFreq = frequency[i];
			minRat = i + 5;
		}
	}

	cout << "Rating with most frequency: " << maxRat << '\n';
	cout << "Rating with least frequency: " << minRat;
}