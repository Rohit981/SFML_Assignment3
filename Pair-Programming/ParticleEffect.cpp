//TEAM: Daniel M., Rohit P., Gabriel O.
#include "ParticleEffect.h"


using namespace sf;
using namespace gm;


ParticleEffect::ParticleEffect()
{

}

ParticleEffect::ParticleEffect(Vector2f position)
{
    this->position = position;

    
}

ParticleEffect::~ParticleEffect() {
   /* for (int i = 0; i < 40; i++) {
        delete particleArray[i];
        particleArray[i] = nullptr;
    }*/
    
}

void ParticleEffect::Update(sf::RenderWindow& window) 
{
   /* particlesAlive = 0;
    for (int i = 0; i < 40; i++)
    {
        if (particleArray[i]) {
            particleArray[i]->Update(window);
            particlesAlive++;
            if (particleArray[i]->ageOfParticle > particleArray[i]->lifespan) {
                particleArray[i]->~Particle();
                particleArray[i] = nullptr;
                particlesAlive--;
            }
        }
    }*/
}

void ParticleEffect::Render(RenderWindow& window) {
   /* for (int i = 0; i < 40; i++) 
    {
        if (particleArray[i]) {
            particleArray[i]->Render(window);
        }
    }*/
}



// adds a new particle at the specified index in the particles 
// array (it should also randomize the particle velocity in some way)
//void ParticleEffect::AddParticle(int index) {
//    if (particleArray[index] != nullptr) {
//        delete particleArray[index];
//    }
//    particleArray[index] = new Particle(this->position);
//    int randX = rand() % 200 + 1;
//    int randY = rand() % 200 + 1;
//    sf::Vector2f randomVelocity = sf::Vector2f(randX, randY);
//    particleArray[index]->SetVelocity(randomVelocity);
//}