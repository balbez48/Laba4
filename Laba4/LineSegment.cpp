#include "LineSegment.h"

LineSegment::LineSegment() : x_(0), y_(0) {}

LineSegment::LineSegment(const LineSegment& segment) : x_(segment.x_), y_(segment.y_) {}

LineSegment::LineSegment(double x, double y) : x_(x), y_(y) {}

std::ostream& operator<<(std::ostream& out, const LineSegment& segment)
{
	out << "Coords: [" << segment.x_ << ", " << segment.y_ << "]";
	return out;
}

bool LineSegment::PointOnLine(double num) const
{
	if (x_ < y_) {
	  return (num >= x_ && num <= y_);
	} else {
	  return (num >= y_ && num <= x_);
	}
}

double LineSegment::operator!() const
{
	return std::abs(x_) + std::abs(y_);
}

LineSegment& LineSegment::operator++() 
{
	x_++;
	y_++;
	return *this;
}

LineSegment LineSegment::operator++(int)
{
	LineSegment segm = *this;
	++(*this);
	return segm;
}

//LineSegment::operator int() const
//{
//	return int(x_);
//}
//
//LineSegment::operator double() const
//{
//	return y_;
//}
//
//
//LineSegment operator+(double n, LineSegment& segment)
//{
//	return LineSegment(segment.x_ + n, segment.y_ + n);
//}
//
//bool operator>(double n, const LineSegment& segment)
//{
//	return false;
//}
