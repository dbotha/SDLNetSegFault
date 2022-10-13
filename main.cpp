#include <iostream>
#include <functional>
#include <future>

#include <SDL_net.h>

int main() {
    auto resolveFuture = std::async(std::launch::async, []() -> std::string{
        IPaddress ip;
        if (SDLNet_ResolveHost(&ip, "www.google.com",
                               443) == -1) {
            return SDLNet_GetError();
        }
        return "Success";
    });

    std::cout << resolveFuture.get() << std::endl;
    return 0;
}
