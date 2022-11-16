#ifndef CIRCLE_OBJECT_H
#define CIRCLE_OBJECT_H

#include "Particle.h"

namespace gm {
class CircleObject : public Particle
{
public:
	CircleObject(const sf::Vector2f& position);
	~CircleObject();

	virtual void Render(sf::RenderWindow& window) override;
	
};
}

#endif // !CIRCLE_SHAPE_H

