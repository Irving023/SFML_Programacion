#pragma once
#include <SFML/Graphics.hpp>

class Linea 
{
public:

	Linea();

	Linea(float x1, float y1, float x2, float y2);

	~Linea();

	//Esto son funciones.

	void DibujarLinea(sf::RenderWindow&);

	void ColorLinea();

private:

protected:
	
	float m_x;
	float m_y;

	sf::Vertex m_line[2];
};