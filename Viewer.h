#pragma once

#include"Board.h"
#include"GameManager.h"
#include"Chess.h"

//遊戲介面
//GUI API
class Viewer
{
public:
	Board b;
	Viewer(Board bInput) { b = bInput; };
	void printBoard(Board& b);
};
