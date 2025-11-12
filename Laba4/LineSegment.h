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
	double get_x() const;
	double get_y() const;

	bool PointOnLine(int num) const;
	friend std::ostream& operator<< (std::ostream& out, const LineSegment& segment);

	double operator!() const;
	LineSegment& operator++(); //префиксный
	LineSegment operator++(int); //постфиксный
	explicit operator int() const;
	operator double() const;

};

LineSegment operator+ (const LineSegment& segment, int n);
LineSegment operator+ (int n, const LineSegment& segment);
bool operator> (const LineSegment& segment, int n);
