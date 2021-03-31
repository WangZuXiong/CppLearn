#include "Player.h"
#include "iostream"
using namespace std;

Player::Player()
{
	cout << "Player Ctor" << endl;
}

Player::~Player()
{
	cout << "Player Dtor" << endl;
}

void Player::Log()
{
	cout << "I am player" << endl;
}
