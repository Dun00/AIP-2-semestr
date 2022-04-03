#include <iostream>
#include <cmath>

int main()
{
	float a = 2, b = 3, j;								//задание 4
	j = (a + 4 * b) * (a - 3 * b) + (a * a);
	std::cout << j << std::endl;

	int one, two, three, max;							//задание 6
	std::cin >> one >> two >> three;
	max = one;
	if (max < two) max = two;
	if (max < three) max = three;
	std::cout << max << std::endl;

	// G - градус; R - радиан;  m - минута;     h - час; _ - перевод;
	const float  Gm_Gh = 60;
	const float Gh_Gm = 0.0166666667;					//задание 5
	const float Gm_Rm = 0.0174532925;
	const float Rm_Gm = 57.2957795;
	const float Gh_Rm = 0.000290888209;
	const float Rm_Gh = 3437.74677;

	int Input_Conversion, Output_Conversion;
	float Meaning, Onsver{};
	std::cout << "Degrees per hour(1); degrees per minute (2); Radians per minute (3):First enter the original Vedic value (its number) after the value of the card and after its transfer number. if an error is displayed, it means that you have entered the wrong number of values" << std::endl;
	std::cin >> Input_Conversion >> Meaning >> Output_Conversion;

	if (Input_Conversion == Output_Conversion)
		Onsver = Meaning;


	if ((Input_Conversion == 1) && (Output_Conversion == 2))
		Onsver = Meaning * Gh_Gm;

	if ((Input_Conversion == 1) && (Output_Conversion == 3))
		Onsver = Meaning * Gh_Rm;

	if ((Input_Conversion == 2) && (Output_Conversion == 1))
		Onsver = Meaning * Gm_Gh;

	if ((Input_Conversion == 2) && (Output_Conversion == 3))
		Onsver = Meaning * Gm_Rm;

	if ((Input_Conversion == 3) && (Output_Conversion == 1))
		Onsver = Meaning * Rm_Gh;

	if ((Input_Conversion == 3) && (Output_Conversion == 2))
		Onsver = Meaning * Rm_Gm;

	if ((Input_Conversion > 3) || (Output_Conversion > 3) || (Input_Conversion < 1) || (Output_Conversion < 1))
		std::cout << "Error" << std::endl;

	std::cout << Onsver << std::endl;
}