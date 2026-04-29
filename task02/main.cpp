#include "util.h"

int main() {
	int size;

	cout << "Input size of array: ";
	cin >> size;

	int* array = create(size);

	if (array == NULL) {
		return -1;
	}

	init_rnd(array, size, -20, 50);

	print("array " + convert(array, size) + "\n");

	remove(array);

	return 0;
}