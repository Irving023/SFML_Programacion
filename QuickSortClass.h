#pragma once
#include "SortClass.h"

class QuickSort : public Sort
{
public:
	QuickSort();

	virtual ~QuickSort();

	virtual void SortVector(std::vector<int> vec) override;

private:

protected:

};
