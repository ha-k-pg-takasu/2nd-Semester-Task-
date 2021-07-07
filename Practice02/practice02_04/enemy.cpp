#include "enemy.h"

Enemy::Enemy()
{
	m_Hp = 1;
	m_Posx = 0.0f;
	m_Posy = 0.0f;
	m_MoveSpeed = 1.0f;

	//エネミー専用変数
	m_routine = 0;
}

Enemy::~Enemy()
{

}

void Enemy::Exec()
{

}

void Enemy::Draw()
{

}

void Enemy::SetHp(int hp)
{
	m_Hp = hp;
}

void Enemy::SetPos(float x, float y)
{
	m_Posx = x;
	m_Posy = y;
}

void Enemy::SetMoveSpeed(float speed)
{
	m_MoveSpeed = speed;
}

int Enemy::GetHp()
{
	return m_Hp;
}

float Enemy::GetPosx()
{
	return m_Posx;
}

float Enemy::GetPosy()
{
	return m_Posy;
}

float Enemy::GetMoveSpeed()
{
	return m_MoveSpeed;
}