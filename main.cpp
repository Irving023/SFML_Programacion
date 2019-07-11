#include "LineaClass.h"
#include "BubbleSortClass.h"
#include "QuickSortClass.h"
#include "InsertionSortClass.h"
#include "ComponentClass.h"
#include "GameObjectClass.h"
#include <vector>
#include <iostream>

void init();
void update();
void draw();
void Delete();

sf::RenderWindow g_window(sf::VideoMode(1000, 1001), "SFML works!");
Linea linea_2;
Linea linea_1;
Component* Cuadrado = nullptr;
GameObject* g_GameObjects = nullptr;

int main()
{
	//Variables para radio y lados de Shapes
	int r = 10;
	int l = 4;

	// Vector 1 con Insertion Sort
	std::vector<int> miVector1 = {10, 24, 14, 45, 64, 75, 53};
	miVector1.push_back(99);

	Sort* insertion_sort = new InsertionSort();
	insertion_sort->SortVector(miVector1);

	std::cout << "Insertion Sort: ";
	for (int i = 0; i < miVector1.size(); i++)
	{
		std::cout << miVector1[i] << " ";
	}

	// Vector 2 con Bubble Sort
	std::vector<int> miVector2 = { 31, 25, 54, 56, 97, 78, 24, 75, 77 };

	Sort* bubble_sort = new BubbleSort();
	bubble_sort->SortVector(miVector2);

	std::cout << "Bubble Sort: ";
	for (int i = 0; i < miVector2.size(); i++)
	{
		std::cout << miVector2[i] << " ";
	}

	// Vector 3 con Quick Sort 
	std::vector<int> miVector3 = { 45, 84, 32, 1, 87, 85, 24, 89, 63, 66 };

	Sort* quick_sort = new QuickSort();
	quick_sort->SortvectorQuickSort(miVector3, 0, 9);

	std::cout << "Quick Sort: ";
	for (int i = 0; i < miVector3.size(); i++)
	{
		std::cout << miVector3[i] << " ";
	}

	init();


	
	
	while (g_window.isOpen())
	{
		sf::Event event;
		while (g_window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				g_window.close();
		}
		update();
		draw();
	}	
	Delete();
	return 0;
}

void init()
{
	//Aqui va todo lo que se necesita iniciar antes del loop
	Cuadrado = new Component;
	Cuadrado->Shapes(10, 4, 100, 100);

	srand(time(NULL));
	linea_2=Linea(rand() % 250, rand() % 250, rand() % 250, rand() % 250);
	linea_1=Linea(rand() % 250, rand() % 250, rand() % 250, rand() % 250);
	linea_1.ColorLinea();
	linea_2.ColorLinea();
	g_GameObjects = new GameObject;
	g_GameObjects->setPosition(500,500); //Posision del GameObject
	g_GameObjects->createComponent(10,5,120,-120);
	g_GameObjects->createComponent(10,6,80,80);
	g_GameObjects->createComponent(10,3,0,0);
	g_GameObjects->createComponent(10, 7, 10, -60);
}
void update()
{
	//Aquie van todos los updates
}
void draw()
{
	//Aqui se pinta 
	//Limpia la pantalla a un color
	g_window.clear();

	//Dibujar la figura de un cuadrado.
	Cuadrado->Draw(g_window);
	//pinta linea 1
	linea_1.DibujarLinea(g_window);
	//pinta linea 2
	linea_2.DibujarLinea(g_window);
	g_GameObjects->Draw(g_window);
	g_window.display();
}
void Delete()
{
	//Aquie se elimina todo referente a espacion en memoria
	Cuadrado->onDelete();
	delete Cuadrado;
	//liberamos la memoria que usa los gameObjects
	g_GameObjects->onDelete();
	delete g_GameObjects;
}