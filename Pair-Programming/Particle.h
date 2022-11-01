//TEAM: Daniel M., Rohit P., Gabriel O.
#ifndef PARTICLE_H
#define PARTICLE_H

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/Main.hpp>
#include <iostream>



enum ParticleShape
{
    Circle,
    Triangle,

    Square


};
namespace gm
{
    class Particle
    {

        private:
            ParticleShape shape;
            sf::CircleShape body;

            float size;
            sf::Vector2f position;
            sf::Vector2f velocity;
            bool alive = false;

        public:
            int ageOfParticle = 0;
            float lifespan = 0;
            float LifeSpanRemaining = 0;

            Particle();
            Particle(sf::Vector2f position, float size, float lifespan = 60.f);
            ~Particle();

            virtual void Update(sf::RenderWindow& window) = 0;

            virtual void Render(sf::RenderWindow& window) = 0;


            virtual const sf::Vector2f& GetVelocity() const;
            virtual void SetVelocity(const sf::Vector2f& position);

            virtual const sf::Vector2f& GetPosition() const;
            virtual void SetPosition(const sf::Vector2f& velocity);

            virtual const float GetLifeSpan();
            virtual void SetLifeSpan(const float lifeSpan);

            virtual const float GetLifeSpanRemaining();
            virtual void SetLifeSpanRemaining(const float lifeSpanRemainig);

            virtual const bool ISAlive();
            virtual void SetAlive(const bool alive);
    
    };

}

#endif

