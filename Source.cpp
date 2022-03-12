#include"Game.h"
#include<iostream>

int main()
{
	Game x;

	double z = 0;

	for (int k = 0; k < 0x64; ++k)
	{
		double p = x.input_number(k);

		z += p;

		std::cout << p << "\n";
	}

	std::cout << z << "\n";

	return 0;
}