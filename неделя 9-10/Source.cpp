#include<iostream>
#include<cmath>

void Minmax(float& X, float& Y);
bool Even(int K);
void IncTime(int T, int& H, int& M, int& S);
void Funk(int x, int& y);

int main() {
	
	//16
	for (int x = -9; x < -4; x++) {
		int y = 0;
		Funk(x, y);
		std::cout << x << "\t" << y << "\n";
	}

	//5
	float A, B, C, D;
	std::cin >> A >> B >> C >> D;

	Minmax(A, B);
	Minmax(C, D);
	Minmax(A, C);
	Minmax(B, D);

	std::cout << "\nMin = " << A << "\nMax = " << D << std::endl;
	
	//11
	
	int K, count = 0;

	for (int i = 0; i <= 10; i++) {
		K = rand();
		std::cout << K << std::endl;
	}

	if (Even(K) == true) {
		count++;
	}
	std::cout << count << std::endl;
	
	//14
	int T, H, M, S;

	std::cin >> T >> H >> M >> S;

	IncTime(T, H, M, S);
	
}

//задача 16
void Funk (int x, int& y){
	if (x > -8)
		y = (2 + x) ^ 2 + 7;

	if (x == -8)
		y = 5;

	if (x < -8)
		y = abs(2 * x - 1) - 1;
}

//14
void IncTime(int T, int& H, int& M, int& S) {

	S = S + T;
	if (S >= 60){
		M++;
		S = S % 60;
	
		if (M >= 60)
		{
			H++;
			M = M % 60;
		}
	}
	std::cout << H << ":" << M << ":" << S << '\n';

}

//5
void Minmax(float& X, float& Y){
	if (X > Y)
		std::swap(X, Y);
		std::cout << '\n' << X <<' '<< Y << std::endl;
}

//11
bool Even(int K) {
	if (K % 2 == 0)
		return true; 

	else 
		return false; 
}