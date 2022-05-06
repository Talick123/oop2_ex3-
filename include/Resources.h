#pragma once

#include <iostream>
#include <vector>

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>


class Resources
{
public:
	~Resources();
	static Resources& instance();

	////Access Functions
	sf::Font* getFont();
	sf::Texture* getUndoTexture();
	sf::Texture* getNewGameTexture();
	sf::Texture* getCatSpriteSheet();
	sf::SoundBuffer* getAudioClick();
	

private:
	Resources();
	Resources(const Resources&) = default;
	Resources& operator=(const Resources&) = default;

	//Load Functions
	void loadFont();
	void loadUndoTexture();
	void loadNewGameTexture();
	void loadCatSpriteSheet();
	void loadAudioClick();

	//======Members==========

	//Fonts
	sf::Font m_font;

	//Textures
	sf::Texture m_undoTexture;
	sf::Texture m_newGameTexture;
	sf::Texture m_catSpriteSheet;

	//Audio
	sf::SoundBuffer m_audioClick;
};