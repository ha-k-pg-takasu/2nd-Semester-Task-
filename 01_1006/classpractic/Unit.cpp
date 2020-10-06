#include "common.h"
#include "Unit.h"

Unit::Unit()
{
	m_status._hp = 0;
	m_status._str = 0;
	m_status._mag = 0;
	m_status._tec = 0;
	m_status._spd = 0;
	m_status._def = 0;
	m_status._luc = 0;
	m_status._mde = 0;
}

Unit::~Unit()
{

}

void Unit::Printstatus()
{
	printf("HP  %d\n", m_status._hp);
	printf("STR %d\n", m_status._str);
	printf("MAG %d\n", m_status._mag);
	printf("TEC %d\n", m_status._tec);
	printf("SPD %d\n", m_status._spd);
	printf("DEF %d\n", m_status._def);
	printf("LUC %d\n", m_status._luc);
	printf("MDE %d\n", m_status._mde);
}

