//////////////////////////////Displayer.h//////////////////////////////
#include <Displayer/Displayer.h>
using namespace craft;

Displayer::Displayer(sf::RenderWindow & window, int FramerateLimit)
{
    window.setFramerateLimit(FramerateLimit);
    this->window = &window;
}

void Displayer::SetTargetWin(sf::RenderWindow & window, int FramerateLimit)
{
    window.setFramerateLimit(FramerateLimit);
    this->window = &window;
}

void Displayer::SetTargetWor(craft::World & world)
{
    this->world = &world;
}


void Displayer::DrawFromWorld()
{
    window->draw(world->player->waiting_animation);
}

void Displayer::UpdateFrame()
{
    window->clear(sf::Color::Black);
    DrawFromWorld();
    window->display();
}

