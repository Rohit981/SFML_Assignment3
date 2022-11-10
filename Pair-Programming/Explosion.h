#ifndef SNOW_PARTICLE_EFFECT_H
#define SNOW_PARTICLE_EFFECT_H

#include "ParticleEffect.h"

namespace gm
{
	class Explosion: public ParticleEffect
	{
		public:
			Explosion();
			Explosion(const sf::Vector2f& position, float size);
			~Explosion();

			virtual void CreateParticleEffect() override;
			

		private:


	};

}

#endif // !SNOW_PARTICLE_H
