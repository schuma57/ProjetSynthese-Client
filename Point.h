#ifndef POINT
#define POINT
#pragma once

class Point
{
private:
	int x;
	int y;

public:
	Point(int a, int b);
	virtual ~Point();

	int getX() const;
	int getY() const;

	Point translation(int l, int h) const;
	Point homothetie(int x, int y, double coeff) const;
	Point rotation(int x, int y, double angle) const;
};

#endif
