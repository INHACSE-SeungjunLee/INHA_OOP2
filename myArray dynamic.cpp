#include <iostream>
using namespace std;

class myArray
{
public:
	int size;
	int* data;
	myArray(int size)
	{
		this->size = size;
		data = new int[size];
	}

	myArray(const myArray& other)
	{
		this->size = other.size;
		this->data = new int[other.size];
		for (int i{ 0 }; i < size; i++)
		{
			this->data[i] = other.data[i];
		}
	}

	~myArray()
	{
		if (data != NULL)
			delete[] data;
	}
};

int main()
{
	myArray buffer(10);
	for (int i{ 0 }; i < buffer.size; i++)
	{
		buffer.data[i] = i;
	}

	for (int i{ 0 }; i < buffer.size; i++)
	{
		cout << buffer.data[i];
	}

	cout << '\n';
	myArray clone = buffer;
	buffer.data[3] = 0;
	buffer.data[4] = 0;

	for (int i{ 0 }; i < buffer.size; i++)
	{
		cout << buffer.data[i];
	}
	cout << endl;
	for (int i{ 0 }; i < buffer.size; i++)
	{
		cout << clone.data[i];
	}
}