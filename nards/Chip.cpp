#include "Chip.h"

Chip::Chip(sf::Color color) :
	shape(22.f)
{
	shape.setFillColor(color);
}

void Chip::setPosition(sf::Vector2f position)
{
	shape.setPosition(position);
}

void Chip::render(sf::RenderWindow& window)
{
	window.draw(shape);
}

void Chip::move(int position, int count)
{
	if (position >= 0 && position <= 11) {
		shape.setPosition(sf::Vector2f(fieldCoord[position].x, fieldCoord[position].y - count*44.f));
	}
	else {
		shape.setPosition(sf::Vector2f(fieldCoord[position].x, fieldCoord[position].y + count * 44.f));
	}
	
}


