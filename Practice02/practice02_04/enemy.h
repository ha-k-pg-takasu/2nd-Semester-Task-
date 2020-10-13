#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
public:
	Enemy();
	~Enemy();

public:
	void Exec();
	void Draw();

public:
	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosx();
	float GetPosy();
	float GetMoveSpeed();

private:
	int		m_Hp;
	float	m_Posx;
	float	m_Posy;
	float	m_MoveSpeed;


	// Enemyê—p•Ï”
	int		m_routine;
};

#endif
