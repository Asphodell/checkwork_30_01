#include <iostream>
#include <ctime>

void fill(int* arr[], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			arr[i][j] = rand() % 100 + 1;
		}
	}
}

void print(int* arr[], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << std::endl;
	}
}

int sum_diag(int* arr[], int n, int m) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == j) {
				sum += arr[i][j];
			}
		}
	}
	return sum;
}

int main() {

	int n;
	std::cin >> n;

	int m;
	std::cin >> m;

	int** arr = new int*[n];

	for (int i = 0; i < n; i++) {
		arr[i] = new int[m];
	}

	srand(time(NULL));

	fill(arr, n, m);
	print(arr, n, m);
	std::cout << std::endl;
	std:: cout << sum_diag(arr, n, m);

	delete[] arr;

	return 0;
}