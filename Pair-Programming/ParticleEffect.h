
#ifndef PARTICLE_EFFECT_H
#define PARTICLE_EFFECT_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>
#include <iostream>
#include "Particle.h"



namespace gm 
{
	class ParticleEffect: public Particle
	{
		
	protected:
		sf::Shape* shape;

		public:

			ParticleEffect();

			ParticleEffect(const sf::Vector2f& position);
			~ParticleEffect();
			virtual void Update(sf::RenderWindow& window);
			virtual void Render(sf::RenderWindow& window);

			virtual void setSize(float radius);
			//creates a new particle for every element of the particles array
			virtual void CreateParticleEffect() = 0;
	
	};

}

#endif 

