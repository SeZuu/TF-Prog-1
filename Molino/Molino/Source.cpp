#include <iostream>
#include <conio.h>

void dibujar(int n) {
	int aux = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j >= n - i - 1) {
				aux++;
				std::cout << aux << " ";
			}
			else std::cout << "  ";
		}
		for (int j = 1; j < n; j++) {
			if (j <= i) {
				aux--;
				std::cout << aux << " ";
			}
			else std::cout << "  ";
		}
		std::cout << std::endl;
		aux = 0;
	}
}

void main() {

	int n = 6;

	dibujar(n);

	_getch();
}