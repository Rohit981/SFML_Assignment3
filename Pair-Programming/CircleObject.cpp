#include "CircleObject.h"

using namespace gm;
using namespace std;
using namespace sf;

CircleObject::CircleObject(const sf::Vector2f& position): Particle(position)
{
    shape = new CircleShape(GetSize());
    shape->setFillColor(Color::White);
    shape->setPosition(position);
}




void CircleObject::Render(sf::RenderWindow& window)
{
    window.draw(*dynamic_cast<CircleShape*>(shape));
}




