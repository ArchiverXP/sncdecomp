#include <new>
#include "TApplication.hpp"

int main(void)
{
    void *a;
    TApplication t_app;

    std::size_t twenty;
    void* operator new(std::size_t twenty);
    twenty = 20;
    t_app.Run();
    return 0;

}