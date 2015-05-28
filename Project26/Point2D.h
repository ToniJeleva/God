#ifndef POINT2D_H
#define POINT2D_H
class Point2D
{
private:
	double x;
	double y;
public:
	Point2D();
	Point2D(double x, double y);
	double getX()const{ return x; }
	void setX(double x){ this->x = x; }
	double getY()const{ return y; }
	void setY(double y) { this->y = y; };
	double getDistance(Point2D& A, Point2D& B);
};
#endif