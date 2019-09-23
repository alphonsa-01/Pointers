#include "circle.h"

namespace nwacc
{
	const double circle::k_pi = 3.1415926;

	const int circle::k_perimeter_multiplier = 2;

	circle::circle(const std::string& color, double radius):
		geometric_object(color), radius_{ radius }{}

	double circle::get_radius()const
	{
		return this->radius_;
	}

	double circle::get_area()const
	{
		return k_pi * radius_ * radius_;
	}

	double circle::get_perimeter() const
	{
		return static_cast<double>(k_perimeter_multiplier) * k_pi * radius_;
	}

	std::string circle::get_description()const
	{
		std::string temp;
		temp.append("Area of circle is ").append(std::to_string(this->get_area())).append(" ");
		temp.append("Perimeter of circle is ").append(std::to_string(this->get_perimeter()));

		return temp;
	}
}
