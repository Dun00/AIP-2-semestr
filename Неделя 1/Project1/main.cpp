#include <iostream>
#include <cmath>

int main()
{
	std::cout << "   *********  " << std::endl	//1 задание
			  << "   *********  " << std::endl
			  << "   ***   ***  " << std::endl
			  << "   ***   ***  " << std::endl
			  << " *************" << std::endl
			  << " *************" << std::endl
			  << " ***       ***" << std::endl;

	float a, P, S;	//2 задание
	std::cin >> a;
	P = a * 8;
	S = 2 * a* a * (1 + sqrt(2));
	std::cout << P << std::endl
			  << S << std::endl;

	
	float a, b, c, arithmet, diff;	//3 задание
	std::cin >> a >> b >> c;
	arithmet = (a + b + c) / 3;
	diff = 2 * (a + c) - ( 3 * b);
	std::cout << std::endl << arithmet << std::endl
			  << std::endl << diff << std::endl;
	
/*

	float n, sum = 0, chislo, arithmet; //найдем среднее арифметическое
	for (n = 1; n <= 3; n++) {			//трех чисел
		std::cin >> chislo;
		sum = sum + chislo;
	}
	arithmet = sum / 3;
	std::cout << std::endl << arithmet << std::endl;
*/		  
	return 0;

}

