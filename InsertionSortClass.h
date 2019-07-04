#pragma once
#include "SortClass.h"

class InsertionSort : public Sort
{
public:
	InsertionSort();

	virtual ~InsertionSort();

	virtual void SortVector(std::vector<int> &vec) override;

private:

protected:

};