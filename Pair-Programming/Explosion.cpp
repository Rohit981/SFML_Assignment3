#include "Explosion.h"
#include "CircleObject.h"

using namespace gm;
using namespace std;
using namespace sf;


Explosion::Explosion(const sf::Vector2f& position):ParticleEffect(position)
{
    this->position = position;

    

    for (int i = 0; i < numberofParticles; i++)
    {
        
        particleObjects[i] = new CircleObject(position);
        
    }
  

    
}

Explosion::~Explosion()
{
    
}


void Explosion::CreateParticleEffect()
{
    for (int  i = 0; i < numberofParticles; i++)
    {
        int randX = ((float(rand()) / float(RAND_MAX)) * (15 + 15)) - 15;
        int randY = ((float(rand()) / float(RAND_MAX)) * (15 + 15)) - 15;
        sf::Vector2f randomVelocity = sf::Vector2f(randX, randY);
        float randSize = ((float(rand()) / float(RAND_MAX)) * (12 - 1)) + 1;
        particleObjects[i]->SetSize(randSize);
        particleObjects[i]->SetPosition(position);
        particleObjects[i]->SetVelocity(randomVelocity);

    }
   
}
