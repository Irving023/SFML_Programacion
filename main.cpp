#include "LineaClass.h"
#include "BubbleSortClass.h"
#include "QuickSortClass.h"
#include "InsertionSortClass.h"
#include <vector>
#include <iostream>


int main()
{

	// Vector 1 con Insertion Sort
	std::vector<int> miVector1 = {};
	miVector1.push_back(10);
	miVector1.push_back(24);
	miVector1.push_back(14);
	miVector1.push_back(45);
	miVector1.push_back(64);
	miVector1.push_back(75);
	miVector1.push_back(53);

	Sort* insertion_sort = new InsertionSort();
	insertion_sort->SortVector(miVector1);

	for (int i = 0; i < miVector1.size(); i++)
	{
		std::cout << miVector1[i] << " ";
	}
	return 0;

	// Vector 2 con Bubble Sort
	std::vector<int> miVector2 = {31, 25, 54, 56, 97, 78, 24, 75, 77};

	Sort* bubble_sort = new BubbleSort();
	bubble_sort->SortVector(miVector2);

	for (int i = 0; i < miVector2.size(); i++)
	{
		std::cout << miVector2[i] << " ";
	}
	return 0;


	// Vector 3 con Quick Sort 
	std::vector<int> miVector3 = {45, 84, 32, 1, 87, 85, 24, 87, 63, 66};

	Sort* quick_sort = new QuickSort();
	quick_sort->SortVector(miVector3);

	for (int i = 0; i < miVector3.size(); i++)
	{
		std::cout << miVector3[i] << " ";
	}
	return 0;


	sf::RenderWindow window(sf::VideoMode(250, 250), "SFML works!");

	srand(time(NULL));
	Linea linea_2(rand() % 250, rand() % 250, rand() % 250, rand() % 250);
	Linea linea_1(rand() % 250, rand() % 250, rand() % 250, rand() % 250);
	linea_1.ColorLinea();
	linea_2.ColorLinea();
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		linea_1.DibujarLinea(window);
		linea_2.DibujarLinea(window);
		window.display();
	}	
}