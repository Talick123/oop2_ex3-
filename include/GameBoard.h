#pragma once
#include <SFML/Graphics.hpp>

#include "Board.h"
#include "Cat.h"

class GameBoard {
public:
	GameBoard();
	void draw(sf::RenderWindow& window);
	void handleClick(const sf::Event& event);
private:
	Board m_board;
	Cat m_cat;
};