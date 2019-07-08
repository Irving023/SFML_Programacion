#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

class Sort
{
public:

	Sort();

	virtual ~Sort();

	virtual void SortVector(std::vector<int> &vec);

	virtual void SortvectorQuickSort(std::vector<int>& vec, int izq, int der);

private:


protected:

};
