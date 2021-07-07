#ifndef UNIT_H
#define UNIT_H

#include"Definition.h"

class Unit
{
public:

	//コンストラクタ
	Unit();
	//デストラクタ
	~Unit();
	//ステータス表示
	void Printstatus();

private:

	status m_status;

};
#endif
