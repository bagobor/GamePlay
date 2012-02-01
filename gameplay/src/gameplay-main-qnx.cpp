#ifdef __QNX__

#include "gameplay.h"

using namespace gameplay;

extern const int WINDOW_WIDTH  = 1024;
extern const int WINDOW_HEIGHT = 600;

/**
 * Main entry point.
 */
int main(int argc, char** argv)
{
    Game* game = Game::getInstance();
    assert(game != NULL);
    Platform* platform = Platform::create(game);
    int result = platform->enterMessagePump();
    delete platform;
    return result;
}

#endif
