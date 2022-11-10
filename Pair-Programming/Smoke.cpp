#include "Smoke.h"

using namespace std;
using namespace gm;
using namespace sf;

Smoke::Smoke()
{
	shape = new CircleShape();
	shape->setFillColor(Color::Yellow);
}
Smoke::Smoke(const sf::Vector2f& position, float size)
{
	shape = new CircleShape(size);
	shape->setFillColor(Color::Yellow);
	shape->setPosition(position);
	GetLifeSpan();
}
Smoke::~Smoke()
{

}

void Smoke::CreateParticleEffect()
{
	int randX = 0;
	int randY = ((float(rand()) / float(RAND_MAX)) * (15 + 15)) - 15;
	sf::Vector2f randomVelocity = sf::Vector2f(randX, randY);
	SetVelocity(randomVelocity);
}
