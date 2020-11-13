#pragma once
#ifndef POINT_H
#define POINT_H

class Point
{
public:
	double x, y;
	double distance(const Point& P);
	Point milieu(const Point& P);
};
#endif 

