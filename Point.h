#include <iostream>
using namespace std;

class Point
{
public:
	Point(int xCo = 0, int yCo = 0) : x{ xCo }, y{ yCo } {}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int Y)
	{
		this->y = y;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}

	friend ostream& operator<<(ostream&, Point&);
	friend istream& operator>>(istream&, Point&);
	friend Point& operator+(Point&, Point&);
	friend Point& operator*(Point&, Point&);
	friend Point& operator-=(Point&, Point&);
	friend Point& operator+=(Point&, Point&);
	friend Point& operator++(Point&, int);
	
	Point& operator++();
	friend bool operator!=(Point&, Point&);
	bool operator==(Point&);
	bool operator>(Point&);
	bool operator<(Point&);
	

private:
	int x;
	int y;
};