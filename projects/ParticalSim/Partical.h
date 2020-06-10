
namespace Tparticle{

struct Particle
{
    double m_x;
    double m_y;

    double m_speed;
    double m_direction;

    void init();
public:
    Particle(/* args */);
    ~Particle();
    void update(int interval);
};

}