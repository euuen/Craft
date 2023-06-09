#ifndef DISPLAYER_H_INCLUDED
#define DISPLAYER_H_INCLUDED

#include <Craft/World/World.h>

#include <SFML/Graphics.hpp>

namespace craft
{
    class Displayer
    {
    private:

        craft::World * world;

//        Ŀ�괰�ڵ�ָ��
        sf::RenderWindow * window;


    public:
//        ��ָ��Ŀ�괰
        Displayer(sf::RenderWindow & window, int FramerateLimit = 60);

//        ��ָ��Ŀ�괰
        void SetTargetWin(sf::RenderWindow & window, int FramerateLimit = 60);

//        ��Ŀ������
        void SetTargetWor(craft::World & world);

//        ͨ��World����л���
        void DrawFromWorld();

//        ˢ�´���
        void UpdateFrame();
    };
}



#endif // DISPLAYER_H_INCLUDED
