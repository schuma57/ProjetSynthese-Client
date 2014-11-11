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
};

#endif
