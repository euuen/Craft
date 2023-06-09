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

//        目标窗口的指针
        sf::RenderWindow * window;


    public:
//        绑定指定目标窗
        Displayer(sf::RenderWindow & window, int FramerateLimit = 60);

//        绑定指定目标窗
        void SetTargetWin(sf::RenderWindow & window, int FramerateLimit = 60);

//        绑定目标世界
        void SetTargetWor(craft::World & world);

//        通过World类进行绘制
        void DrawFromWorld();

//        刷新窗口
        void UpdateFrame();
    };
}



#endif // DISPLAYER_H_INCLUDED
