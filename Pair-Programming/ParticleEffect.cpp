
#include "ParticleEffect.h"


using namespace sf;
using namespace gm;


ParticleEffect::ParticleEffect():shape(nullptr) {}



ParticleEffect::ParticleEffect(const sf::Vector2f& position):Particle(position), shape(nullptr){}



ParticleEffect::~ParticleEffect() 
{
   
    
}

void ParticleEffect::Update(sf::RenderWindow& window) 
{
    position += velocity;
    shape->setPosition(position); 
 
}

void ParticleEffect::Render(RenderWindow& window) 
{
  
    window.draw(*dynamic_cast<CircleShape*>(shape));
}

void ParticleEffect::setSize(float radius)
{
    dynamic_cast<CircleShape*>(shape)->setRadius(radius);
}


//particlesAlive = 0;
//Update(window);