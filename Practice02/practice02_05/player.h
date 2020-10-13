#ifndef PLAYER_H
#define PLAYER_H

//継承その１
#include "Base.h"	// 基礎クラスのヘッダー（クラスの設計情報をインクルード）

// 継承その２ クラスの宣言部分に継承していることを表すコードを書く
class Player : public Base
{
public:
	Player();
	~Player();

public:
	void Exec();
	void Draw();

};

#endif	// #ifndef PLAYER_H
