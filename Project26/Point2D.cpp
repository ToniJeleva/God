#include "Point2D.h"
#include <iostream>
Point2D::Point2D(){ x = 0; y = 0; }

Point2D::Point2D(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Point2D::getDistance(Point2D& A, Point2D& B)
{
	return sqrt(pow((A.getX() - B.getX()), 2) + pow((A.getX() - B.getX()), 2));
}