#ifndef SQUARE_H_
#define SQUARE_H_

#include "geometric_object.h"

namespace nwacc 
{
	class square :
		public geometric_object
	{
	public:

		static const int k_perimeter_multtiplier;

		square(const std::string& color="White", const double side=1.0);

		double get_side()const;

		double get_area()const override;

		double get_perimeter()const override;

		std::string get_description()const override;

	private:

		double side_{};
	};

}
#endif

