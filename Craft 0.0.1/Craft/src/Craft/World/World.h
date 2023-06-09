#ifndef WORLD_H_INCLUDED
#define WORLD_H_INCLUDED

#include <Craft/Player.h>

namespace craft
{
    class Chunk
    {
    public:
        Chunk();
        void Load();
    };
    class World
    {
    public:
        craft::Player * player;
        Chunk * chunks;
    public:
        World();
        ~World();
        void Load();
    };

}


#endif // WORLD_H_INCLUDED
