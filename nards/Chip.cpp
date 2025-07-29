#include "Chip.h"

Chip::Chip() :
	shape(44.f)
{
	
}

void Chip::setPosition(sf::Vector2f position)
{
	shape.setPosition(position);
}
