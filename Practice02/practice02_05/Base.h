#ifndef BASE_H
#define BASE_H
class Base
{
public:
	Base();
	virtual~Base();


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

#endif