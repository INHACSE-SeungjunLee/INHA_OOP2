#include<iostream>
#include"Point.h"
using namespace std;

ostream& operator<<(ostream& os, Point& pt)
{
	os << "(" << pt.x << " ," << pt.y << ")";
	return os;
}
istream& operator>>(istream& is, Point& pt)
{
	is.ignore(10, '(');
	is >> pt.x;
	is.ignore(10, ',');
	is >> pt.y;
	is.ignore(10, ')');
	return is;
}
Point& operator+(Point& left, Point& right)
{
	Point sum;
	sum.x = left.x + right.x ;
	sum.y = left.y + right.y ;

	return sum;
}
Point& operator*(Point& left, Point& right)
{
	Point product;
	product.x = left.x * right.x;
	product.y = left.y * right.y;

	return product;
}
Point& operator-=(Point& left, Point& right)
{
	left.x -= right.x;
	left.y -= right.y;

	return left;
}
Point& operator+=(Point& left, Point& right)
{
	Point leftCopy (left.x, left.y);
	leftCopy.x += right.x;
	leftCopy.y += right.y;

	return leftCopy;
}
Point& Point::operator++()
{
	(* this).x++;
	(* this).y++;

	return *this;
}
Point& operator++(Point& pt, int n)
{
	Point ptCopy = pt;
	pt.x++;
	pt.y++;

	return ptCopy;
}
bool operator!=(Point& left, Point& right)
{
	if (left.x != right.x || left.y != right.y)
		return true;
	else
		return false;
}

bool Point::operator==(Point& pt)
{
	return !((*this) != pt);
}

bool Point::operator>(Point& pt)
{
	if ((*this).x + (*this).y >= pt.x + pt.y)
		return true;
	else
		return false;
}

bool Point::operator<(Point& pt)
{
	return !((*this) > pt);
}