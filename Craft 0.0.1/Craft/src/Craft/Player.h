#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED


#include <SFML/Graphics.hpp>
namespace craft
{
    class Player
    {
    public:
        sf::Texture _waiting_animation;
        sf::Sprite waiting_animation;
    public:
        Player();
        ~Player();
        void Load();
    };
}


#endif // PLAYER_H_INCLUDED
