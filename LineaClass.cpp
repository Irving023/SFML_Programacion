#include "LineaClass.h"
#include <stdlib.h>
#include <random>
#include <time.h>



Linea::Linea()
{
	this->m_x = 0;
	this->m_y = 0;
}

Linea::Linea(float x1, float y1, float x2, float y2)
	: m_x(0), m_y(0)
{
	m_line[0] = sf::Vertex(sf::Vector2f(x1, y1));
	m_line[1] = sf::Vertex(sf::Vector2f(x2, y2));
}

Linea::~Linea()
{

}

void Linea::DibujarLinea(sf::RenderWindow& ventana)
{
	ventana.draw(m_line, 2, sf::Lines);
}

void Linea::ColorLinea()
{
	srand(time(NULL));
	int color_r = rand() % 250;
	int color_g = rand() % 250;
	int color_b = rand() % 250;

	sf::Color mycolor(color_r, color_g, color_b);

	m_line[0].color = mycolor;
	m_line[1].color = mycolor;
}
