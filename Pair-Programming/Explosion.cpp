#include "Explosion.h"

using namespace gm;
using namespace std;
using namespace sf;

Explosion::Explosion()
{
    shape = new CircleShape();
    shape->setFillColor(Color::White);

    
}

Explosion::Explosion(const sf::Vector2f& position, float size):ParticleEffect(position)
{
    shape = new CircleShape(size);
    shape->setFillColor(Color::White);
    shape->setPosition(position);
    GetLifeSpan();
}

Explosion::~Explosion()
{
    
}


void Explosion::CreateParticleEffect()
{
    int randX = ((float(rand()) / float(RAND_MAX)) * (15 + 15)) - 15;
    int randY = ((float(rand()) / float(RAND_MAX)) * (15 + 15)) - 15;
    sf::Vector2f randomVelocity = sf::Vector2f(randX, randY);
    SetVelocity(randomVelocity);
   
}
