#pragma once
#include <SFML/Graphics.hpp>

class Chip
{
	sf::CircleShape shape;
	sf::Vector2f fieldCoord[24] = {	
	sf::Vector2f(22.f,925.f), sf::Vector2f(87.f,925.f), sf::Vector2f(152.f,925.f), sf::Vector2f(217.f,925.f),
	sf::Vector2f(281.f,925.f), sf::Vector2f(346.f,925.f), sf::Vector2f(607.f,925.f), sf::Vector2f(672.f,925.f),
	sf::Vector2f(736.f,925.f), sf::Vector2f(801.f,925.f), sf::Vector2f(866.f,925.f), sf::Vector2f(931.f,925.f),
	
	sf::Vector2f(931.f,26.f), sf::Vector2f(866.f,26.f), sf::Vector2f(801.f,26.f), sf::Vector2f(736.f,26.f),
	sf::Vector2f(672.f,26.f), sf::Vector2f(607.f,26.f), sf::Vector2f(346.f,26.f), sf::Vector2f(281.f,26.f),
	sf::Vector2f(217.f,26.f), sf::Vector2f(152.f,26.f), sf::Vector2f(87.f,26.f), sf::Vector2f(22.f,26.f)
	};
public:
	Chip(sf::Color color);
	void setPosition(sf::Vector2f position);
	void render(sf::RenderWindow& window);
	void move(int position, int count);
};

