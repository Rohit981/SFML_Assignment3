
#ifndef GAME_H
#define GAME_H


#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>
#include <iostream>
#include "ParticleEffect.h"


enum ParticleObjects
{
	EXPLOSION,
	SMOKE
};


namespace gm {
	class Game {
	public:
		Game();
		~Game();
		void handleInput(sf::RenderWindow& window);
		void update(sf::RenderWindow& window);
		void render(sf::RenderWindow& window);

	private:

		ParticleEffect* particleEffectObjects;

		ParticleObjects ParticleEnum;

	};
}

#endif