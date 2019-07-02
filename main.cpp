#include "LineaClass.h"


int main()
{

	sf::RenderWindow window(sf::VideoMode(250, 250), "SFML works!");

	srand(time(NULL));
	Linea trazo(rand() % 250, rand() % 250, rand() % 250, rand() % 250);
	Linea raya(rand() % 250, rand() % 250, rand() % 250, rand() % 250);
	trazo.ColorLinea();
	raya.ColorLinea();
	
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		raya.DibujarLinea(window);
		trazo.DibujarLinea(window);
		window.display();
	}

	return 0;
}