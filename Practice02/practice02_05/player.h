#ifndef PLAYER_H
#define PLAYER_H

//�p�����̂P
#include "Base.h"	// ��b�N���X�̃w�b�_�[�i�N���X�̐݌v�����C���N���[�h�j

// �p�����̂Q �N���X�̐錾�����Ɍp�����Ă��邱�Ƃ�\���R�[�h������
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
