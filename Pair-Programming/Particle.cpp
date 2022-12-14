
#include "Particle.h"

using namespace std;
using namespace sf;
using namespace gm;


Particle::Particle()
{
    
}

Particle::Particle(const sf::Vector2f& position) {}



Particle::~Particle()
{
}

void Particle::Update(sf::RenderWindow& window)
{
    position += GetVelocity();
    shape->setPosition(position);
    
}


const sf::Vector2f& gm::Particle::GetVelocity() const
{
    // TODO: insert return statement here

    return velocity;
}

void Particle::SetVelocity(const sf::Vector2f& velocity)
{
   this->velocity = velocity;
}

const sf::Vector2f& gm::Particle::GetPosition() const
{
    return position;
}

void gm::Particle::SetPosition(const sf::Vector2f& position)
{
    this->position = position;
}

const float gm::Particle::GetLifeSpan() const
{
    return lifespan;
}

void gm::Particle::SetLifeSpan(const float lifeSpan)
{
    this->lifespan = lifeSpan;
}

const float gm::Particle::GetLifeSpanRemaining() const
{
    return LifeSpanRemaining;
}

void gm::Particle::SetLifeSpanRemaining(const float lifeSpanRemainig)
{
   this->LifeSpanRemaining = lifeSpanRemainig;
}

const bool gm::Particle::ISAlive()
{
    return alive;
}

void gm::Particle::SetAlive(const bool alive)
{
   this->alive = alive;
}

const float Particle::GetSize()const
{
    return size;
}

void Particle::SetSize(const float radius)
{
    dynamic_cast<CircleShape*>(shape)->setRadius(radius);
}




