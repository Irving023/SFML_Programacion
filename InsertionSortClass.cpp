#include "InsertionSortClass.h"

InsertionSort::InsertionSort()
{

}

InsertionSort::~InsertionSort()
{

}

void InsertionSort::SortVector(std::vector<int> &vec)
{
	int i, j, tmp;

	for (i = 0; i < vec.size(); i++)
	{
		j = i;
		tmp = vec[i];
		while ((j > 0) && (vec[j-1]) > tmp)
		{
			vec[j] = vec[j-1];
			j--;
		}
		vec[j] = tmp;
	}
}
