#pragma once
#include "Particle.h"
namespace shining {
	class Swarm
	{
	private:
		Particle* m_pParticles;
		int lastTime;

	public:
		const static int NPARTICLES = 1000;
		Swarm();
		~Swarm();
		void update(int elapsed);
		const Particle * const getParticles(){ return m_pParticles; };
	};

}