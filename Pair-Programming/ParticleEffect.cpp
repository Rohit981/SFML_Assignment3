
#include "ParticleEffect.h"


using namespace sf;
using namespace gm;


ParticleEffect::ParticleEffect() 
{
   
}



ParticleEffect::ParticleEffect(const sf::Vector2f& position):position(position)
{
    numberofParticles = 5 + rand() % 46;
    particleObjects = new Particle * [numberofParticles];
}



ParticleEffect::~ParticleEffect() 
{
    for (int i = 0; i < numberofParticles; i++) {
        delete particleObjects[i];
    }

    // Then free the array itself from the heap!
    // NOTE: this order is critical! The other way around would cause a memory leak and potential errors/unexpected behavior
    delete[] particleObjects;
    
}

void ParticleEffect::Update(sf::RenderWindow& window) 
{
    for (int i = 0; i < numberofParticles; i++)
    {
        particleObjects[i]->Update(window);
    }
 
}

void ParticleEffect::Render(RenderWindow& window) 
{
    for (int i = 0; i < numberofParticles; i++)
    {
        window.draw(*dynamic_cast<CircleShape*>(particleObjects[i]->shape));

    }
}


