#include <iostream>

double find(int arr[], int n, int k) {
	double arifm = 0;
	double min_arifm = 9999;
	for (int i = 0; i < n - 2; i++) {
		arifm = arr[i] + arr[i + 1] + arr[i + 2]; //для k = 3, чему равно k, столько и будет слагаемых, не успеваю дописать цикл, но основная идея такова.
		if (arifm < min_arifm) {
			min_arifm = arifm;
		}
		arifm = 0;
	}
	return min_arifm / k;
}

int main() {

	int n;
	std::cin >> n;

	int k = 3;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
	std:: cout << find(arr, n, k);

	delete[] arr;

	return 0;
}