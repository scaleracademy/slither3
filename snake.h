#ifndef DEF_SNAKE

#define DEF_SNAKE

#include <curses.h>
#include "settings_constants.h"

void init_snake();
void paint_snake();
void move_snake(int direction);

#endif