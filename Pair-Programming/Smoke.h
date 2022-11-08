#ifndef SMOKE_H
#define SMOKE_H


#include "ParticleEffect.h"

namespace gm {
	class Smoke : public ParticleEffect
	{
	public:
		Smoke();
		~Smoke();

		virtual void CreateParticleEffect() override;

	private:


	};

}

#endif // !SMOKE_H

