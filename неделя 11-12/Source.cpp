#include<iostream>
#include<cmath>

struct Time {
	int hour, minuta, cekynda;
}time1, time2;

void showTime(Time& e1, Time& e2);

int main(){

	time1.cekynda = 55;
	time1.minuta = 15;
	time1.hour = 1;

	time2.cekynda = 36;
	time2.minuta = 20;
	time2.hour = 2;

	showTime(time1, time2);
}

void showTime(Time& e1, Time& e2) {
	
	int hour = 0, minuta = 0, cekynda = 0;

	cekynda = e1.cekynda+ e2.cekynda;
	if (cekynda >= 60)
	{
		minuta++;
		cekynda = cekynda % 60;
	}
	
	minuta += e1.minuta + e2.minuta;
	if (minuta >= 60)
	{
		hour++;
		minuta = minuta % 60;
	}
	hour += e1.hour + e2.hour;
	
	std::cout << hour << ":" << minuta << ":" << cekynda << '\n';
	
}



// 3

struct Robot {
	float gabarit, speed, weight;
}Robot1, Robot2;

void showRobot(Robot e1, Robot e2);

int main(){

	Robot1.gabarit = 54;
	Robot1.speed = 14;
	Robot1.weight = 100;
	
	Robot2.gabarit = 17;
	Robot2.speed = 9;
	Robot2.weight = 75;

	showRobot(Robot1, Robot2);	
}

void showRobot(Robot e1, Robot e2){

	if (e1.gabarit < e2.gabarit)
		std::cout << "Robot1" << " " << e1.gabarit;
	else
		std::cout << "Robot2" << " " << e2.gabarit;

}
//end zadache 3

// 8 
struct Datchik {
	float diapazon_min, diapazon_max, max_speed, pogresh;
}Datchik_1, Datchik_2;

void showDatchik(Datchik e1, Datchik e2);

int main(){

	Datchik_1.diapazon_min = 50;
	Datchik_1.diapazon_max = 54;
	Datchik_1.max_speed = 14;
	Datchik_1.pogresh = 100;

	Datchik_2.diapazon_min = 69;
	Datchik_2.diapazon_max = 79;
	Datchik_2.max_speed = 9;
	Datchik_2.pogresh = 75;

	showDatchik(Datchik_1, Datchik_2);
}

void showDatchik(Datchik e1, Datchik e2)
{
	if (e1.diapazon_max - e1.diapazon_min > e2.diapazon_max - e2.diapazon_min)
		std::cout << "Datchik_1" << " " << e1.diapazon_max - e1.diapazon_min;
	else
		std::cout << "Datchik_2" << " " << e2.diapazon_max - e2.diapazon_min;

}
//end zadache 4

// 10 говнокод, но рботает
struct Robot_air {
	float r, speed, k, Tiaga;
}Robot1, Robot2;

void showTiaga(Robot_air& e1);

int main(){

	Robot1.r = 4;
	Robot1.speed = 2;
	Robot1.k = 10;

	Robot2.r = 5;
	Robot2.speed = 3;
	Robot2.k = 10;

	showTiaga(Robot1);
}

void showTiaga(Robot_air& e1)
{
	e1.Tiaga = e1.r * e1.speed * e1.k;
	std::cout << "Tiaga" << " = " << e1.Tiaga;

}
//end zadache 10



