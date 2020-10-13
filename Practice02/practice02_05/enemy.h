#ifndef ENEMY_H
#define ENEMY_H

#include "Base.h"

class Enemy :public Base
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

	// Enemyê—p•Ï”
	int		m_routine;
};

#endif
