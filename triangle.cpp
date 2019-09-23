#include "triangle.h"

namespace nwacc
{
	const int triangle::k_area_divisor = 2;

	triangle::triangle(const std::string& color, const double side_one,
		const double side_two, const double base,
		const double height) :
		geometric_object(color),side_one_{side_one},side_two_{side_two},
		base_{ base }, height_{ height } {}

	double	triangle::get_side_one()const
	{
		return this->side_one_;
	}

	double	triangle::get_side_two()const
	{
		return this->side_two_;
	}

	double	triangle::get_base()const
	{
		return this->base_;
	}

	double	triangle::get_height()const
	{
		return this->height_;
	}

	double triangle::get_area()const
	{
		return (this->height_ * this->base_) / static_cast<double>(k_area_divisor);
	}

	double triangle::get_perimeter()const
	{
		return this->side_one_ + this->side_two_ + this->base_;
	}

	std::string triangle::get_description()const
	{
		std::string temp;
		temp.append("Area of triangle is ").append(std::to_string(this->get_area())).append(" ");
		temp.append("Perimeter of triangle is ").append(std::to_string(this->get_perimeter()));

		return temp;
	}
}