#include "square.h"

namespace nwacc
{
	const int square::k_perimeter_multtiplier = 4;

	square::square(const std::string& color, const double side):
		geometric_object(color), side_{side} {}

	double square::get_side()const
	{
		return this->side_;
	}

	double square::get_area()const
	{
		return this->side_ * this->side_;
	}

	double square::get_perimeter()const
	{
		return k_perimeter_multtiplier * this->side_;
	}

	std::string square::get_description()const
	{
		std::string temp;
		temp.append("Area of square is ").append(std::to_string(this->get_area())).append(" ");
		temp.append("Perimeter of square is ").append(std::to_string(this->get_perimeter()));

		return temp;
	}
}