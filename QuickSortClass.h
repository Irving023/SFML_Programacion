#pragma once
#include "SortClass.h"

class QuickSort : public Sort
{
public:
	QuickSort();

	virtual ~QuickSort();

	virtual void SortvectorQuickSort(std::vector<int>& vec, int izq, int der);

private:

protected:

};