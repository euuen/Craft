#include <Windows.h>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#include <EventProc/EventProc.h>
#include <Displayer/Displayer.h>
#include <World/World.h>


sf::RenderWindow window(sf::VideoMode(1280,896),"Craft", sf::Style::Close);
craft::Displayer displayer(window);

int main()
{

    using namespace craft;
//    ��ʼ��������Դ
    craft::World world;
    world.Load();
    displayer.SetTargetWor(world);

//    �и�ʱ������pollevent�᷵��false�������ʱʹ��event�ᱨ����Ϊevent����û�б����£���Щ������������ǷǷ���ַ
    sf::Event * _event = new sf::Event;
    while(!window.pollEvent(*_event)){Sleep(10);}
    delete _event;

//    Ϊ��������ͼ��
    sf::Image icon;
    icon.loadFromFile(R"(./Data/Assets/icon.png)");
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    EventProc evepr(window);
    while (window.isOpen())
    {
        evepr.UpdateEvent();
        displayer.UpdateFrame();
    }
}
