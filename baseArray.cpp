#include<iostream>
using namespace std;

class baseArray
{
private:
	int capacity;
	int* mem;
protected:
	baseArray(int capacity = 100)
	{
		this->capacity = capacity;
		mem = new int[capacity];
	}
	~baseArray() { delete[] mem; }
	void put(int index, int val)
	{
		mem[index] = val;
	}
	int get(int index)
	{
		return mem[index];
	}
	int getCapacity()
	{
		return capacity;
	}
};

class myQueue : public baseArray
{
private:
	int size;
public:
	myQueue() : baseArray(100) { this->size = 5; }
	myQueue(int capacity) : baseArray(capacity) { this->size = 5; }
	myQueue(int capacity, int size) : baseArray(capacity) { this->size = size; }
	
	void enqueue(int index, int val)
	{
		put(index, val);
	}
	int capacity()
	{
		getCapacity();
	}
	int length()
	{
		return size;
	}
};

int main()
{
	myQueue mQ(100);
	int n;
	cout << "Input 5 integers: ";
	for (int i{ 0 }; i < 5; i++)
	{
		cin >> n;
		mQ.enqueue(n);
	}

	cout << "capacity: " << mQ.capacity() << " size: " << mQ.length() << '\n';
	cout << "print queue: ";
	while (mQ.length() != 0)
	{
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "size: " << mQ.length() << endl;
}