#include "player.h"

Player::Player()
{
	m_Hp		= 1;
	m_Posx		= 0.0f;
	m_Posy		= 0.0f;
	m_MoveSpeed = 1.0f;
}

Player::~Player()
{

}

void Player::Exec()
{

}

void Player::Draw()
{

}

void Player::SetHp(int hp)
{
	m_Hp = hp;
}

void Player::SetPos(float x, float y)
{
	m_Posx = x;
	m_Posy = y;
}

void Player::SetMoveSpeed(float speed)
{
	m_MoveSpeed = speed;
}

int Player::GetHp()
{
	return m_Hp;
}

float Player::GetPosx()
{
	return m_Posx;
}

float Player::GetPosy()
{
	return m_Posy;
}

float Player::GetMoveSpeed()
{
	return m_MoveSpeed;
}