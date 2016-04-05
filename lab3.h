#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class forA{

	public:
			void dataInput();
			void dataOutput();
			void InsertSort(int* array, int size);
			void swap(int* array, int x, int y);

	private:
	int n, c, weight,total;
	fstream fin;
	vector<int>cow;

};
