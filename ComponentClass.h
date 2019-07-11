#pragma once
#include <SFML/Graphics.hpp>

class Component
{
public:

	Component();
	virtual ~Component() {};
	virtual void Shapes(const int &radio, const int &lados, const float& posx, const float& posy);

	virtual void Draw(sf::RenderWindow & window);

	virtual void Update();
	virtual void onDelete();
	float x_pos;
	float y_pos;
private:
	sf::CircleShape* shape;

protected:



};