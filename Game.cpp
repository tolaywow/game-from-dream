#include "Game.h"
#include<iostream>
#include<ctime>

Game::Game()
{

}

unsigned char Game::Random_value()
{
    return rand()%0x62+0x1;
}

double Game::input_number(int num)
{
	unsigned char value = Random_value();

	if (abs(num - value) == 0)
		return 0xa;
	else
		return 1. / (abs(num - value) + 0x1);

	
}
