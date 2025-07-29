#include "Game.h"

Game::Game():
	window(sf::VideoMode(1000, 1000), "NARDS")
{

    if (!bgTexture.loadFromFile("src/bg.jpg")) {
        std::cout << "bg not loaded";
    }
    bgSprite.setTexture(bgTexture);

    for (int i = 0; i < 24; i++) {
        Chip chip;
        chip.setPosition(fieldCoord[i]);
        field[i].push_back(chip);
    }
}

void Game::run()
{
    while (window.isOpen())
    {
        processEvent();
        update();
        render();
    }
}

void Game::processEvent()
{
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void Game::update()
{
}

void Game::render()
{
    window.clear();
    window.draw(bgSprite);
    window.display();
}
