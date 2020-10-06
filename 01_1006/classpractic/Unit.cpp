#include "common.h"
#include "Unit.h"

Unit::Unit()
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

Unit::~Unit()
{

}

void Unit::Printstatus()
{


	printf("HP  %d\n", m_hp);
	printf("STR %d\n", m_str);
	printf("MAG %d\n", m_mag);
	printf("TEC %d\n", m_tec);
	printf("SPD %d\n", m_spd);
	printf("DEF %d\n", m_def);
	printf("LUC %d\n", m_luc);
	printf("MDE %d\n", m_mde);
}

