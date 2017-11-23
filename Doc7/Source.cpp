#include<iostream>

using namespace std;

template <typename T>
T getAverageOfArrayElements(T a[], int size) {
	if (size < 1) {
		cout << "array is empty!" << endl;
	}
	T sum = 0;
	for (int i = 0; i < size; ++i) {
		sum += a[i];
	}
	return sum / size;
}

template <typename T>
T getMinimumOfArrayElements(T a[], int size) {
	if (size < 1) {
		cout << "array is empty!" << endl;
	}
	T min = a[0];
	for (int i = 1; i < size; ++i) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

template <typename T>
T getMaximumOfArrayElements(T a[], int size) {
	if (size < 1) {
		cout << "array is empty!" << endl;
	}
	T max = a[0];
	for (int i = 0; i < size; ++i) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

template <typename T>
void quickSort(T* arr, int left, int right) {
	int i = left, j = right;
	T pivot = arr[(left + right) / 2];

	/* partition */
	while (i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if (i <= j) {
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
	/* recursion */
	if (left < j)
		quickSort(arr, left, j);
	if (i < right)
		quickSort(arr, i, right);
}

template <typename T>
T getSearchInArrayElements(T a[], int size , int x) {
	if (size < 1) {
		cout << "array is empty!" << endl;
	}
	T isin = x;
	for (int i = 0; i < size; ++i) {
		if (a[i] == isin) {
			return i;
		}
	}
}

void main() {

	int a[5] = { 2, 3, 4, 1, 5 };
	double d[5] = { 6., 7., 8., 9., 10. };
	float f[5] = { 11., 12., 13., 14., 15. };
	char c[5] = { 'a', 'b', 'c', 'd', 'e' };
	cout << getAverageOfArrayElements(a, 5) << endl;
	cout << getAverageOfArrayElements(d, 5) << endl;
	cout << getAverageOfArrayElements(f, 5) << endl;
	cout << getAverageOfArrayElements(c, 5) << endl;
	cout << getMinimumOfArrayElements(a, 5) << endl;
	cout << getMaximumOfArrayElements(a, 5) << endl;
	int size = 5;
	quickSort(a, 0, size - 1);
	for (int i = 0; i < 5; ++i) {
		cout << a[i] << endl;
	};
	cout << getSearchInArrayElements(a, 5, 5) << endl;









	system("pause");
}