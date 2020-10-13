#include "Base.h"

Base::Base()
{
	m_Hp = 1;
	m_Posx = 0.0f;
	m_Posy = 0.0f;
	m_MoveSpeed = 1.0f;
}

Base::~Base()
{

}

void Base::SetHp(int hp)
{
	m_Hp = hp;
}

void Base::SetPos(float x, float y)
{
	m_Posx = x;
	m_Posy = y;
}

void Base::SetMoveSpeed(float speed)
{
	m_MoveSpeed = speed;
}

int Base::GetHp()
{
	return m_Hp;
}

float Base::GetPosx()
{
	return m_Posx;
}

float Base::GetPosy()
{
	return m_Posy;
}

float Base::GetMoveSpeed()
{
	return m_MoveSpeed;
}