#include "ComponentClass.h"

Component::Component()
{

}

void Component::Shapes(const int &radio, const int &lados,const float & posx, const float& posy)
{
	shape = new sf::CircleShape(radio, lados);
	x_pos = posx;
	y_pos = posy;
}

void Component::Draw(sf::RenderWindow& window)
{
	shape->setPosition(x_pos, y_pos);
	window.draw(*shape);
}

void Component::Update()
{

}

void Component::onDelete()
{
	delete shape;
}
