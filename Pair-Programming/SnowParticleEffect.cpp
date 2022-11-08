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
    int randX = ((float(rand()) / float(RAND_MAX)) * (15 + 15)) - 15;
    int randY = ((float(rand()) / float(RAND_MAX)) * (15 + 15)) - 15;
    sf::Vector2f randomVelocity = sf::Vector2f(randX, randY);
    particle->SetVelocity(randomVelocity);
   
}
