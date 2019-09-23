#include "geometric_object.h"

namespace nwacc
{
	geometric_object::geometric_object(const std::string& color):color_(color){}

	std::string geometric_object::get_color()const
	{
		return this->color_;
	}

	std::string geometric_object::get_description()const
	{
		return std::to_string(this->get_area());
	}
}
