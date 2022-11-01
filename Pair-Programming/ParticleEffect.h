//TEAM: Daniel M., Rohit P., Gabriel O.
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




namespace gm {
	class ParticleEffect
	{
		public:

			sf::Vector2f position;

			int particlesAlive;

			ParticleEffect();

			ParticleEffect(sf::Vector2f position);
			~ParticleEffect();
			virtual void Update();
			virtual void Render(sf::RenderWindow& window);

			

			//creates a new particle for every element of the particles array
			virtual void Emit();

			// adds a new particle at the specified index in the particles 
			// array (it should also randomize the particle velocity in some way)
			void AddParticle(int index);

		private:
	
			//const int ARRAY_LENGTH = 40;
		//Particle* particleArray[40];
	};

}

#endif // !PARTICLE_EFFECT_H

