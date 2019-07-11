#pragma once
#include "ComponentClass.h"
#include<vector>
class GameObject
{
public:
	GameObject();
	virtual ~GameObject();

	virtual void Draw(sf::RenderWindow& window);

	virtual void Update();
	virtual void onDelete();
	virtual void createComponent(const int& radio, const int& lados, const float& posx, const float& posy);
	virtual void setPosition(const float& posx, const float& posy);

	int x_pos = 0;
	int y_pos = 0;
	std::vector<Component*>comp;
private:

};

