#include"lab3.h"

void forA::dataInput() {
		fin.open("file.in");
		cow.clear();
		fin >> c;
		while (fin >> weight)
		cow.push_back(weight);
}

void forA::dataOutput() {
	total=0;
		
		InsertSort(&cow[0], cow.size());
			for (int i = 0; i <= 4; i++)
						total += cow[i];
				cout << total << endl;
}

void forA::InsertSort(int* array, int size) {

		for (int i = 1; i < size; i++)
			for (int j = i; j > 0; j--)
				if (array[j] > array[j - 1])
					swap(array, j, j - 1);
}

void forA::swap(int* array, int x, int y)

{
		int temp = array[x];
			array[x] = array[y];
				array[y] = temp;
}
