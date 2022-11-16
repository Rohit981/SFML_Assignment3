
#include "Game.h"

#include "Explosion.h"
#include "Smoke.h"

#include <cstdlib>


using namespace std;
using namespace gm;
using namespace sf;


Game::Game() 
{
	srand(time(NULL));

	ParticleEnum = EXPLOSION;

}

void Game::handleInput(sf::RenderWindow& window) {
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed) {
			window.close();
		}
		if (event.key.code == sf::Keyboard::Num1)
		{
			
			
			ParticleEnum = EXPLOSION;


		}
		else if (event.key.code == sf::Keyboard::Num2)
		{
			
			ParticleEnum = SMOKE;
			
		}
		else if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left) 
		{
			if (ParticleEnum == EXPLOSION)
			{
				particleEffectObjects = new Explosion(Vector2f(Mouse::getPosition(window).x, Mouse::getPosition(window).y));
			}
			else if (ParticleEnum == SMOKE)
			{
				particleEffectObjects = new Smoke(Vector2f(Mouse::getPosition(window).x, Mouse::getPosition(window).y));

			}
				
			particleEffectObjects->CreateParticleEffect();
		}
	}
}

void Game::update(sf::RenderWindow& window) 
{
	if(particleEffectObjects != nullptr)
	particleEffectObjects->Update(window);

}

void Game::render(sf::RenderWindow& window) 
{
	window.clear();

	if (particleEffectObjects != nullptr)
	particleEffectObjects->Render(window);

	window.display();
}

Game::~Game()
{
	
}
