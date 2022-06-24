#include <iostream>
#include <cmath>
#include <array>

int main() {
	//1
	const int a = 5;
	const int b = 5;
	int mat1[a][b];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			mat1[i][j] = rand() % 20;
			std::cout<<mat1[i][j]<<"\t";
		}
		std::cout<< std::endl;
	}

	int min = mat1[0][0];
	int ma = 0;
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++)
			if (mat1[i][j] < min) {
				min = mat1[i][j];
				ma = i;
			}

	for (int j = 0; j < b; j++)
		mat1[ma][j] = 0;

	std::cout<<std::endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)
			std::cout<<mat1[i][j]<<"\t";
		std::cout<<std::endl;
	}

	//4
	const int ravs = 3;
	const int cols = 3;

	int mat[ravs][cols];

	for (int i = 0; i < ravs; i++)
		for (int j = 0; j < cols; j++)
			mat[i][j] = rand() % 21-10;

	for (int i = 0; i < ravs; i++)
		for (int j = 0; j < cols; j++)
			std::cout << mat[i][j]<<' ';
			std::cout<<std::endl;

	int sum = 0;
	for (int i = 0; i < ravs; i++)
		for (int j = i; j < cols; j++)
			if ((mat[i][j] > 0) && (j % 2 == 0))
				sum += mat[i][j];

				std::cout << sum ;

	//7
	const int a = 2;
	const int b = 7;
	int matday[a][b];
	for (int i = 0; i < a; i++)
		for (int j = 0; j < b; j++) {
			std::cin>>matday[i][j];
		}
	std::cout << std::endl;
	int max = matday[1][0], mjveter = 0, mjrain = 0;
	for (int j = 0; j < b; j++)
		if (matday[0][j] > max)
			mjrain = j;

	for (int j = 0; j < b; j++)
		if (matday[1][j] > max)
				mjveter = j;
		if (mjveter == mjrain)
			std::cout << "uragan bil";
		std::cout << std::endl;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++)
			std::cout << matday[i][j] << "\t";
		std::cout << std::endl;

	}

	//10
	//умножение на число
	const int ravs = 3;
	const int cols = 3;
	int number;
	std::cin >> number;

	int mat[ravs][cols];

	for (int i = 0; i < ravs; i++)
		for (int j = 0; j < cols; j++)
			mat[i][j] = rand() % 40;

	for (int i = 0; i < ravs; i++)
		for (int j = 0; j < cols; j++)
			std::cout << mat[i][j] << ' ';
	std::cout << std::endl;

	for (int i = 0; i < ravs; i++) {
		for (int j = 0; j < cols; j++) {
			mat[i][j] *= number;

			std::cout << mat[i][j] << ' ';
		}
	}

	//сложение, вычитание 
	int matA[ravs][cols];
	int matB[ravs][cols];
	int matC[ravs][cols];
	int matD[ravs][cols];

	for (int i = 0; i < ravs; i++) {
		for (int j = 0; j < cols; j++) {
			matA[i][j] = rand() % 40;
			matB[i][j] = rand() % 60;
		}
	}

	for (int i = 0; i < ravs; i++) {
		for (int j = 0; j < cols; j++)
			std::cout << matA[i][j] << ' ';
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < ravs; i++) {
		for (int j = 0; j < cols; j++)
			std::cout << matB[i][j] << ' ';
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < ravs; i++) {
		for (int j = 0; j < cols; j++) {
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}

	for (int i = 0; i < ravs; i++) {
		for (int j = 0; j < cols; j++) {
			matD[i][j] = matB[i][j] - matA[i][j];
		}
	}

	for (int i = 0; i < ravs; i++) {
		for (int j = 0; j < cols; j++)
			std::cout << matC[i][j] << ' ';
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (int i = 0; i < ravs; i++) {
		for (int j = 0; j < cols; j++)
			std::cout << matD[i][j] << ' ';
		std::cout << std::endl;
	}
}