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

//        �¼�����Ŀ��
        craft::World * world;

//        �����洢�����¼�����
        sf::Event event;

//        Ŀ�괰�ڵ�ָ��
        sf::RenderWindow * window;

    private:
//        ��event���������жϣ�Ȼ�������Ӧ����
        void Listen();

    public:

//        ��ָ��Ŀ�괰��
        EventProc(sf::RenderWindow & window);

//        ��ָ��Ŀ�괰�ڣ���ȡ����������event
        void SetTargetWin(sf::RenderWindow & window);

//        ��Ŀ������
        void SetTargetWor(craft::World & world);

//        ����event�࣬interval�Ǹ��¼��������޼���Ļ�������С��cpu��˵����
        void UpdateEvent();

    };

}

#endif // EVENTPROC_H_INCLUDED
