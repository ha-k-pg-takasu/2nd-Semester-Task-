#ifndef PLAYER_H
#define PLAYER_H

class Player
{
public:
	Player();
	~Player();

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
};

#endif	// #ifndef PLAYER_H
