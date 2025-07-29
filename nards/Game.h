#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

#include "Chip.h"

class Game
{
	sf::RenderWindow window;
	sf::Event event;
	sf::Texture bgTexture;
	sf::Sprite bgSprite;
	std::vector<Chip> field[24];
	sf::Vector2f fieldCoord[24] = {
		sf::Vector2f(10.f,10.f), sf::Vector2f(60.f,10.f), sf::Vector2f(110.f,10.f), sf::Vector2f(160.f,10.f),
		sf::Vector2f(210.f,10.f), sf::Vector2f(260.f,10.f), sf::Vector2f(310.f,10.f), sf::Vector2f(360.f,10.f),
		sf::Vector2f(410.f,10.f), sf::Vector2f(460.f,10.f), sf::Vector2f(510.f,10.f), sf::Vector2f(560.f,10.f),
		sf::Vector2f(10.f,800.f), sf::Vector2f(60.f,800.f), sf::Vector2f(110.f,800.f), sf::Vector2f(160.f,800.f),
		sf::Vector2f(210.f,800.f), sf::Vector2f(260.f,800.f), sf::Vector2f(310.f,800.f), sf::Vector2f(360.f,800.f),
		sf::Vector2f(410.f,800.f), sf::Vector2f(460.f,800.f), sf::Vector2f(510.f,800.f), sf::Vector2f(560.f,800.f),
	};
	
public:
	Game();
	void run();
private:
	void processEvent();
	void update();
	void render();
};

