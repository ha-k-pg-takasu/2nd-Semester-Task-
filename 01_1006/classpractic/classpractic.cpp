#include <stdio.h>
#include <stdlib.h>

// Fighterクラスを作成
class Fighter
{
public:
	//コンストラクタ
	Fighter();
	//デストラクタ
	~Fighter();

	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;


};

Fighter::Fighter()
{
	m_hp = 0;
	m_str = 0;
	m_mag = 0;
	m_tec = 0;
	m_spd = 0;
	m_def = 0;
	m_luc = 0;
	m_mde = 0;
}

Fighter::~Fighter()
{

}

int main()
{
	Fighter fighter;

	printf("HP %d\n",fighter.m_hp);
	printf("HP %d\n", fighter.m_str);
	printf("HP %d\n", fighter.m_mag);
	printf("HP %d\n", fighter.m_tec);
	printf("HP %d\n", fighter.m_spd);
	printf("HP %d\n", fighter.m_def);
	printf("HP %d\n", fighter.m_luc);
	printf("HP %d\n", fighter.m_mde);

	system("pause");
	return 0;
}