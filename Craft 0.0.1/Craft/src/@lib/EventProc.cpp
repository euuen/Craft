#include <EventProc/EventProc.h>

using namespace craft;

EventProc::EventProc(sf::RenderWindow & window)
{
    this->window = &window;
}

void EventProc::SetTargetWin(sf::RenderWindow & window)
{
    this->window = &window;
}

void EventProc::SetTargetWor(craft::World & world)
{
    this->world = &world;
}

void EventProc::Listen()
{
    switch (event.type)
    {
    case sf::Event::EventType::Closed:
        window->close();
        break;
    default:
        break;
    }
}

void EventProc::UpdateEvent()
{
    window->pollEvent(event);
    Listen();
}
