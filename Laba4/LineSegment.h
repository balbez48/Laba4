#pragma once
#include <iostream>

class LineSegment {
private:
	double x_;
	double y_;
public:
	LineSegment();
	LineSegment(const LineSegment& segment);
	LineSegment(double x, double y);

	bool PointOnLine(double num) const;
	friend std::ostream& operator<< (std::ostream& out, const LineSegment& segment);

	double operator!() const;
	LineSegment& operator++(); //префиксный
	LineSegment operator++(int); //постфиксный
	explicit operator int() const;
	operator double() const;

};

LineSegment operator+ (double n, LineSegment& segment);
bool operator> (double n, const LineSegment& segment);