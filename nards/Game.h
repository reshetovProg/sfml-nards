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

	
public:
	Game();
	void run();
private:
	void processEvent();
	void update();
	void render();
	void startPosition();
};

