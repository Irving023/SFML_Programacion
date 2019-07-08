#include "QuickSortClass.h"

QuickSort::QuickSort()
{

}

QuickSort::~QuickSort()
{

}

void QuickSort::SortvectorQuickSort(std::vector<int>& vec, int izq, int der)
{
	 int i = izq, j = der, tmp;
	 int p = vec[(izq + der) / 2];
	 while (i <= j)
	 {
		 while (vec[i] < p) i++;
		 while (vec[j] > p) j--;
		 if (i <= j) 
		 {
			 tmp = vec[i];
			 vec[i] = vec[j];
			 vec[j] = tmp;
			 i++; j--;
		 }
	 }
	 if (izq < j)
		 SortvectorQuickSort(vec, izq, j);
	 if (i < der)
		 SortvectorQuickSort(vec, i, der);
} 