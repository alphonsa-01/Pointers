#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "geometric_object.h"

namespace nwacc
{
	class triangle :
		public geometric_object
	{
	public:

		static const int k_area_divisor;

		triangle(const std::string& color="White", const double side_one=1.0,
			const double side_two=1.0, const double base=1.0,
			const double height=1.0);

		double get_side_one()const;

		double get_side_two()const;

		double get_base()const;

		double get_height()const;

		double get_area()const override;

		double get_perimeter()const override;

		std::string get_description()const override;

	private:

		double side_one_{};

		double side_two_{};

		double base_{};

		double height_{};

	};

}
#endif
