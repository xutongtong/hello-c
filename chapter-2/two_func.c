//
// Created by tong on 2018/11/13.
//
#include <stdio.h>

void butler(void);

int main(void)
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void)
{
    printf("You rang, sir?\n");
}