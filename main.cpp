#include <iostream>

#include <SDL_net.h>

int main() {
    IPaddress ip;
    if (SDLNet_ResolveHost(&ip, "www.google.com",
                           443) == -1) {
        std::cout << "Error: " << SDLNet_GetError() << std::endl;
        return -1;
    }

    std::cout << "Success" << std::endl;
    return 0;
}
