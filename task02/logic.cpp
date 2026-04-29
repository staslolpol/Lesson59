#include "logic.h"

int count_local_minimums(int* array, int size) {
	int count = 0;

	for (int i = 0; i < size - 1; i++)
	{
		if (*(array + i) < *(array + i + 1)
			&& *(array + i) < *(array + i - 1)) {
			count++;
		}
	}

	count += *array < *(array + 1) ? 1 : 0;
	count += (*array + size - 1) < *(array + size - 2) ? 1 : 0;


	return count;
}

int* get_all_lacal_minimums(int* array, int size) {

}
int sum_local_minimums(int* array, int size);