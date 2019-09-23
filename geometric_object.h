#ifndef GEOMETRIC_OBJECT_H_
#define GEOMETRIC_OBJECT_H_

#include <string>

namespace nwacc 
{
	class geometric_object
	{
	public:

		geometric_object(const std::string& color = "White");

		std::string get_color() const;

		virtual double get_perimeter()const = 0;

		virtual double get_area()const = 0;

		virtual std::string get_description()const;

	private:

		std::string color_;
	};


}
#endif
