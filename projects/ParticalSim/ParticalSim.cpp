#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include <math.h>
#include <iostream>
#include <cstring>
#include "Screen.h"
#include "Swarm.h"
#include <time.h>
#include <stdlib.h>

using namespace std;
using namespace Tparticle;


int main()
{

    Screen screen;

    if(screen.init() == false){
        cout << "Error initializing SDL" << endl;
    }

    

    Mix_OpenAudio(44100, AUDIO_S32SYS, 2, 4096);

    
    Mix_Music *music;
    music = Mix_LoadMUS("C://Users/Travis/Documents/cpp/projects/ParticalSim/Nightcall.mp3");
    if(music == NULL){
        cout << "music load failed" << endl;
        cout << Mix_GetError() << endl;
        return 1;
    }
    if(Mix_PlayMusic(music, 1) == -1){
        cout << "cant play ogg" << endl;
        return 1;
    }

    srand(time(NULL));
    
    

    

    Swarm swarm;    

    while (true)
    {
        
        int elapsed = SDL_GetTicks();

        //screen.clear();
        swarm.update(elapsed);

        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0009)) * 128);
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0005)) * 128);

        const Particle * const pParticles = swarm.getParticles();

        for(int i=0; i<Swarm::NPARITCLES; i++){
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
            int y = particle.m_y * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2;

            screen.setPixel(x, y, red, green, blue);
        }

        screen.boxBlur();
        screen.update();

        if(screen.processEvents() == false){
            break;
        }

        
    }

    Mix_FreeMusic(music);
    screen.close();

    

    return 0;
}