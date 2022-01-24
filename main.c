#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static void dev_func()
{
}

static void system_initialize()
{
}

int main()
{
    system_initialize();

    while (true)
    {
        dev_func();
    }
    return 0;
}