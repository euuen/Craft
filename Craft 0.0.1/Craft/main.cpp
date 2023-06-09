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
//    初始化加载资源
    craft::World world;
    world.Load();
    displayer.SetTargetWor(world);

//    有个时候它会pollevent会返回false，如果此时使用event会报错，因为event根本没有被更新，有些变量如果访问是非法地址
    sf::Event * _event = new sf::Event;
    while(!window.pollEvent(*_event)){Sleep(10);}
    delete _event;

//    为窗口设置图标
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
