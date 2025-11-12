#include "LineSegment.h"

int main() {
	LineSegment coords1;
	LineSegment coords2 = coords1;
	LineSegment coords3(3, -15);
	std::cout << coords1 << std::endl;
	std::cout << coords2.PointOnLine(4) << std::endl;
	std::cout << std::boolalpha << coords3.PointOnLine(-10) << std::endl;
	std::cout << !coords3 << std::endl;

	std::cout << coords3 << std::endl;
	std::cout << coords3++ << std::endl;
	std::cout << ++coords3 << std::endl;
}