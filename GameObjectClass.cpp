#include "GameObjectClass.h"

GameObject::GameObject()
{
}

GameObject::~GameObject()
{

}

void GameObject::Draw(sf::RenderWindow & window)
{
	for (int i = 0; i < comp.size(); i++)
	{
		comp[i]->Draw(window);
	}
}

void GameObject::Update()
{
	for (int i = 0; i < comp.size(); i++)
	{
		comp[i]->Update();
	}
}

void GameObject::onDelete()
{
	for (int i = 0; i < comp.size(); i++)
	{
		comp[i]->onDelete();
		delete comp[i];
	}
}

void GameObject::createComponent(const int& radio, const int& lados, const float& posx, const float& posy)
{
	comp.push_back(new Component);
	comp[comp.size() - 1]->Shapes(radio,lados,x_pos+posx,y_pos+posy);
}

void GameObject::setPosition(const float& posx, const float& posy)
{
	x_pos = posx;
	y_pos = posy;
}
