#pragma once
#include <SFML/Graphics.hpp>

class Game
{
	sf::RenderWindow window;
	sf::CircleShape circle;
	sf::Event event;

public:
	Game();
	void run();
private:
	void processEvent();
	void update();
	void render();
};

