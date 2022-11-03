#ifndef SNOW_PARTICLE_EFFECT_H
#define SNOW_PARTICLE_EFFECT_H

#include "ParticleEffect.h"

namespace gm
{
	class SnowParticleEffect: public ParticleEffect
	{
		public:
			SnowParticleEffect();
			~SnowParticleEffect();

			virtual void Update(sf::RenderWindow& window)override;

		private:


	};

}

#endif // !SNOW_PARTICLE_H
