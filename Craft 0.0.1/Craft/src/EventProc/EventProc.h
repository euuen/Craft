#ifndef EVENTPROC_H_INCLUDED
#define EVENTPROC_H_INCLUDED

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <Craft/World/World.h>

namespace craft
{

    class EventProc
    {
    private:

//        事件处理目标
        craft::World * world;

//        用来存储窗口事件的类
        sf::Event event;

//        目标窗口的指针
        sf::RenderWindow * window;

    private:
//        对event进行类型判断，然后调用相应函数
        void Listen();

    public:

//        绑定指定目标窗口
        EventProc(sf::RenderWindow & window);

//        绑定指定目标窗口，获取并处理它的event
        void SetTargetWin(sf::RenderWindow & window);

//        绑定目标世界
        void SetTargetWor(craft::World & world);

//        更新event类，interval是更新间隔（如果无间隔的话。。。小心cpu会说话）
        void UpdateEvent();

    };

}

#endif // EVENTPROC_H_INCLUDED
