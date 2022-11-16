#ifndef EXPLOSION_H
#define  EXPLOSION_H

#include "ParticleEffect.h"

namespace gm
{
	class Explosion: public ParticleEffect
	{
		public:
			Explosion(const sf::Vector2f& position);
			~Explosion();

			virtual void CreateParticleEffect() override;
			

		private:


	};

}

#endif 
