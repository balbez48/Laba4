#include "LineSegment.h"

LineSegment::LineSegment() : x_(0), y_(0) {}

LineSegment::LineSegment(const LineSegment& segment) : x_(segment.x_), y_(segment.y_) {}

LineSegment::LineSegment(double x, double y) : x_(x), y_(y) {}

double LineSegment::get_x() const 
{
	return x_;
}

double LineSegment::get_y() const
{
	return y_;
}

std::ostream& operator<<(std::ostream& out, const LineSegment& segment)
{
	out << "Coords: [" << segment.x_ << ", " << segment.y_ << "]";
	return out;
}

bool LineSegment::PointOnLine(int num) const
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

LineSegment::operator int() const
{
	return int(x_);
}

LineSegment::operator double() const
{
	return y_;
}

LineSegment operator+(const LineSegment& segment, int n)
{
	return LineSegment(segment.get_x() + n, segment.get_y() + n);
}

LineSegment operator+(int n, const LineSegment& segment)
{
	return LineSegment(segment.get_x() + n, segment.get_y() + n);
}

bool operator> (const LineSegment& segment, int n)
{
	if (segment.PointOnLine(n)) {
	  return true;
	} else {
	  return false;
	}
}
