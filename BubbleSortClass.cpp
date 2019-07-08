#include "BubbleSortClass.h"

BubbleSort::BubbleSort()
{

}

BubbleSort::~BubbleSort()
{

}

void BubbleSort::SortVector(std::vector<int> &vec)
{
	int i;
	int j;
	int tmp;

	for (i = 0; i < vec.size(); i++)
	{
		for (j = 0; j < vec.size()-1; j++)
		{
			if (vec[j] > vec[j + 1]) 
			{
				tmp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = tmp;
			}
		}
	}
}
