
#include "Partical.h"



namespace Tparticle {

class Swarm
{
public:
    const static int NPARITCLES = 4000;
private:
    Particle *m_pParticles;
    int lastTime;
public:
    Swarm(/* args */);
    ~Swarm();
    void update(int elapsed);

    const Particle * const getParticles() { return m_pParticles;}
};






}