#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

class colorPoint : public Point
{
private:
	string color;
public:
	colorPoint(): Point(0, 0) { this->color = "BLACK"; }
	colorPoint(int x, int y) : Point(x, y) { this->color = "BLACK"; }
	colorPoint(int x, int y, string color) : Point(x, y)
	{
		this->color = color;
	}
	~colorPoint() {}
	void setPoint(int x, int y)
	{
		move(x, y);
	}
	void setColor(string color)
	{
		this->color = color;
	}
	string getColor()
	{
		return color;
	}
	void show()
	{
		cout << "(" << (*this).getX() << ", " << (*this).getY() << ")" << " " << (*this).getColor() << '\n';
	}
};

int main()
{
	colorPoint zeroPoint;
	zeroPoint.show();

	colorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.show();
	cp.setColor("BLUE");
	cp.show();
}