#include <iostream>
#include "functions.h"
#include "structures.h"
#include "data.h"


int main() {
	setlocale(LC_ALL, "Ru");
	int n, m;
	// библиотека с фу-циями
	/*std::cout << " Введите 2 числа -> ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;
	HW();
	const int size = 5;
	int arr[size]{ 10, 20, 30, 40, 50};
	print_arr(arr, size);*/
	// Библиотека со структурой и функциями для работы с ней!
	/*person p1{
		"Tom Smith",
		26,
		"programer",
		80000
	};
	print_person(p1);
	person p2 = input_person();
	print_person(p2);*/

	_A = 15;
	std::cout << "A = " << _A << std::endl;
	std::cout << "PI = " << _PI << std::endl;
	std::cout << "E = " << _E << std::endl;
	print_arr(_ARR, _ARR_SIZE);
	show_pi();

	return 0;
}