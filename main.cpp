#include <cstdlib>
#include <iostream>
#include <string>

#include "circle.h"
#include "geometric_object.h"
#include "square.h"
#include "triangle.h"

int main()
{
	
	std::cout << "Enter the size of array: ";
	auto size = 0;
	std::cin >> size;
	auto* list =  new nwacc::geometric_object*[size];

	for (auto count = 0; count < size; count++)
	{
		std::cout << "Enter the shape you wish to create(triangle,square or circle) : ";
		std::string shape;
		std::cin >> shape;

		if (shape == "triangle")
		{
			auto* triangle_one = new nwacc::triangle("White", rand()%100,rand()%100,rand()%100,rand()%100);
			list[count] = triangle_one;
		}
		else if (shape == "square")
		{
			auto* square_one = new nwacc::square("White", rand()%100);
			list[count] = square_one;
		}
		else
		{
			auto* circle_one = new nwacc::circle("White", rand()%100);
			list[count] = circle_one;
		}
		
	}

	for (auto index = 0; index < size; index++)
	{
		std::cout << list[index]->get_description() << std::endl;
	}
	
	delete[] list;

	return 0;
}