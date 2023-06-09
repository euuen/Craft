//////////////////////////////Player.h//////////////////////////////
#include <Player.h>
using namespace craft;

Player::Player()
{

}

Player::~Player()
{

}

void Player::Load()
{
    _waiting_animation.loadFromFile(R"(./Data/Assets/player.png)");
    waiting_animation.setTexture(_waiting_animation);
}



//////////////////////////////World.h//////////////////////////////
#include <World/World.h>
using namespace craft;

Chunk::Chunk()
{

}

void Chunk::Load()
{

}

World::World()
{
    player = new Player;
    chunks = new Chunk[9];
}

World::~World()
{
    delete player;
    delete [] chunks;
}

void World::Load()
{
    player->Load();
}

























