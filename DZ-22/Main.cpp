#include <iostream>
#include<cstdlib>
#include<ctime>

void func(int* num1, int num2) {
	int a = *num1;
	if (num2 != 1)
		for (int i = 2; i <= num2; i++)
			*num1 *= a;
}



int main() {
	setlocale(LC_ALL, "Russian");
	// jhjk---jk
	std::cout << " Задача 1 \n";
	const int size = 10;
	int arr[size]{ 15,18,35,44,87,12,85,22,36,51 };
	int* parr = arr;
	std::cout << " Изначальный массив ";
	for (int i = 0; i < size; i++)
		std::cout << *(parr+i) << ' ';
	std::cout << "\n\n";
	std::cout << " Измененный массив ";
	for (int i = 0; i < size; i+=2) {
		int tmp;
		tmp = *(parr + i);
		*(parr + i) = *(parr + (i + 1));
		*(parr + (i + 1)) = tmp;
	}
	for (int i = 0; i < size; i++)
		std::cout << *(parr + i) << ' ';
	std::cout << " \n\n";

	std::cout << " Задача 2 \n";
	int n = 4;
	std::cout << " n = " << n<<"\n";
	int* pn=&n;
	func(pn, 3);
	std::cout << " n в степени 3 = " << n;
	std::cout << " \n\n";


	return 0;
}