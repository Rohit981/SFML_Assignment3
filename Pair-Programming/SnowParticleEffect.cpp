#include "SnowParticleEffect.h"

using namespace gm;
using namespace std;

SnowParticleEffect::SnowParticleEffect()
{

}

SnowParticleEffect::~SnowParticleEffect()
{
    
}


void SnowParticleEffect::CreateParticleEffect()
{
    for (int i = 0; i < 40; i++) 
    {
       int randX = ((float(rand()) / float(RAND_MAX)) * (15 + 15)) - 15;
       int randY = ((float(rand()) / float(RAND_MAX)) * (15 + 15)) - 15;
       float randSize = ((float(rand()) / float(RAND_MAX)) * (12 - 1)) + 1;
       particleArray[i] = new Particle(this->position, randSize, 10);
       sf::Vector2f randomVelocity = sf::Vector2f(randX, randY);
       particleArray[i]->SetVelocity(randomVelocity);
   }
}
