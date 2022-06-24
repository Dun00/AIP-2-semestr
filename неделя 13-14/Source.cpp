#include <iostream>
#include <cmath>
#include <array>

int main() {
	const int n = 3;
	
	
	//1
	int numbs[20];
	//std::array <int, 20> nums;

	for (int i = 0; i < 20; i++) {
		numbs[i] = rand() % 21 - 10;
		std::cout << numbs[i] << std::endl;
	}


	//2
	int nums[7];
	//std::array <int, 7> nums;

	int sum = 0;
	for (int i = 0; i < 7; i++) {
		std::cin >> nums[i];

		if (nums[i] < 5) {
			sum = sum + nums[i];
		}
	}
	std::cout << sum << std::endl;
	

	//3
	int arrA[6];

	for (int i = 0; i < 6; i ++)
		std::cin >> arrA[i];
	
	for (int i = 0; i < 6 ; i+=2)
		std::cout << arrA[i]<<' ';

	for (int i = 1; i < 6; i +=2)
		std::cout << arrA[i] << ' ';
	

	//4
	int arrB[5];
	int multi_minus=1, multi_plus=1;

	for (int i = 0; i < 5; i++) {
		std::cin >> arrB[i];

		if (arrB[i] > 0) {
			multi_plus *= arrB[i];
		}
		else {
			multi_minus *= arrB[i];
		}
	}
	std::cout << multi_plus << ' ' << multi_minus;
	

	//12
	int arrB[5];
	int multi_minus = 1, multi_plus = 1;

	for (int i = 0; i < 5; i++) {
		std::cin >> arrB[i];

		if (i%2) {
			arrB[i] *= 2;
		}
		else {
			arrB[i] += 2;
		}
		std::cout << arrB[i] << ' ';
	}
	
	//14 (c)
	int arrC[3];
	int arrD[3];
	int arrF[3];

	for (int i = 0; i < 3; i++) 
		std::cin >> arrC[i];
		
	for (int i = 0; i < 3; i++) 
		std::cin >> arrD[i];
		
	for (int i = 0; i < 3; i++) {
		arrF[i] = arrC[i] + arrD[i];

		std::cout << arrF[i];
	}
	
	/*
	//17 
	struct Student {
		int mark[3];
		std::string name[5];
	};
	void showStudent(Student& e1, Student& e2);

	void showStudent(Student& e1, Student& e2){
		int count = 0;

		for (int j = 0; j < 5; i++) {
			std::cin >> e1.name[j];

			for (int i = 0; i < 3; i++) {
				std::cin >> mark[i];

				if (mark[i]>4) {
					count++
				}
			}
		}
	std::cout << name[j] << ' ';
	}
	*/
}

