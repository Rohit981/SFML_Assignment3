
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

	numberofParticles = 5 + rand() % 46;
	// Dynamically allocate an array on the heap to hold pointers to that randomly generated number
	particleEffectObjects = new ParticleEffect * [numberofParticles];

	// Go through each object pointer in the array and allocate an object that it can point to
	for (int i = 0; i < numberofParticles; i++) 
	{
		particleEffectObjects[i] = new Explosion();

		
	}
	// Go through each object pointer in the array and allocate an object that it can point to
	
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
			for (int i = 0; i < numberofParticles; i++)
			{
				particleEffectObjects[i] = new Explosion();
				// We will just make all objects the same size and start them in the center of the sreen for now
				// All game objects move randomly so we will be able to see them all somewhat at runtime :)
			}

		}
		else if (event.key.code == sf::Keyboard::Num2)
		{
			for (int i = 0; i < numberofParticles; i++)
			{
				particleEffectObjects[i] = new Smoke();
				// We will just make all objects the same size and start them in the center of the sreen for now
				// All game objects move randomly so we will be able to see them all somewhat at runtime :)
			}
		}
		else if (event.type == Event::MouseButtonPressed && event.mouseButton.button == Mouse::Left) 
		{
			for (int i = 0; i < numberofParticles; i++)
			{
				particleEffectObjects[i]->SetPosition(Vector2f(Mouse::getPosition(window).x, Mouse::getPosition(window).y));
				float randSize = ((float(rand()) / float(RAND_MAX)) * (12 - 1)) + 1;
				particleEffectObjects[i]->setSize(randSize);
				particleEffectObjects[i]->CreateParticleEffect();

			}

		}
	}
}

void Game::update(sf::RenderWindow& window) 
{
	for (int i = 0; i < numberofParticles; i++) 
	{
		particleEffectObjects[i]->Update(window);
	}
}

void Game::render(sf::RenderWindow& window) 
{
	window.clear();
	for (int i = 0; i < numberofParticles; i++) 
	{
		particleEffectObjects[i]->Render(window);
	}
	window.display();
}

Game::~Game()
{
	for (int i = 0; i < numberofParticles; i++) {
		delete particleEffectObjects[i];
	}

	// Then free the array itself from the heap!
	// NOTE: this order is critical! The other way around would cause a memory leak and potential errors/unexpected behavior
	delete[] particleEffectObjects;
}
