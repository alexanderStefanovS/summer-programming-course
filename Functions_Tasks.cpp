#include <iostream>

using namespace std;

int biggerNumber(int a, int b) {					// Task 1
	if (a > b) {
		return a;
	}
	return b;
}

bool isRightTriangle(int a, int b, int c) {			// Task 2
	if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
		return true;
	}
	return false;
}

int squared(int n) {								// Task 3
	return n * n;
}

void inputArray(int arr[1000], int n) {				// Task 4
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
}

void printArray(int arr[1000], int n) {				// Task 5
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
}

bool isPrime(int n) {								// Task 6
	if (n == 0 || n == 1) return false;
	for (int i = 2; i <= n / 2; ++i) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	int N, arr[1000];

	cout << "Input N: ";
	cin >> N;

	cout << "Input array: ";
	inputArray(arr, N);

	for (int i = 0; i < N; ++i) {
		if (isPrime(arr[i]) == true) {
			cout << arr[i] << " is Prime\n";
		}
		else {
			cout << arr[i] << " is NOT Prime\n";
		}
	}

    return 0;
}

