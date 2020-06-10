#include "Swarm.h"

namespace Tparticle {

Swarm::Swarm(): lastTime(0) {
    m_pParticles = new Particle[NPARITCLES];

}

Swarm::~Swarm(){
    delete [] m_pParticles;

}

void Swarm::update(int elapsed){

    int interval = elapsed - lastTime;

    for(int i=0; i<Swarm::NPARITCLES; i++){
            m_pParticles[i].update(interval);
        }

    lastTime = elapsed;
}


}