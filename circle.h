#ifndef CIRCLE_H_
#define CIRCLE_H_
#include "geometric_object.h"

namespace nwacc
{
	class circle :
		public geometric_object
	{
	public:

		static const double k_pi;

		static const int k_perimeter_multiplier;

		circle(const std::string& color = "White", double radius = 1.0);

		double get_radius()const;

		double get_area()const override;

		double get_perimeter()const override;

		std::string get_description()const override;

	private:

		double radius_{};

	};

}
#endif


