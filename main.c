#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static void func1()
{

}

static void system_initialize()
{
}

int main()
{
    system_initialize();

    func1();
    while(true)
    {
        dev_func();
    }
    return 0;
}