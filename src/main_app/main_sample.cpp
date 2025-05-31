#include "eloop.h"
#include <iostream>

void timer_func(void *eloop_data, void *user_data)
{
    static int called = 0;
    std::cout << "called timer " << called++ << std::endl;
    eloop_register_timeout(1, 0, timer_func, 0, 0);

}

void on_timeout(void *eloop_data, void *user_data)
{
    std::cout << "Timeout event triggered!" << std::endl;
}

int main(int argc, char **argv)
{
    eloop_init();

    eloop_register_timeout(2, 0, on_timeout, nullptr, nullptr);
    eloop_register_timeout(0, 0, timer_func, nullptr, nullptr);

    eloop_run();
    eloop_destroy();

    return 0;

}
