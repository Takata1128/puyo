#pragma once
#include <vector>
#include "Puyo.h"

using namespace std;

class PuyoManager
{
public:
	PuyoManager(vector<Puyo> Tsumo);
	// ぷよ配列
	vector<Puyo> Tsumo;
	// 現在の参照位置
	int cur;

	Puyo popPuyo();
	Puyo showNextPuyo();
	Puyo showDNextPuyo();
};
