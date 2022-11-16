#ifndef SMOKE_H
#define SMOKE_H


#include "ParticleEffect.h"

namespace gm {
	class Smoke : public ParticleEffect
	{
	public:
		Smoke(const sf::Vector2f& position);
		~Smoke();

		virtual void CreateParticleEffect() override;

	private:


	};

}

#endif // !SMOKE_H

