#pragma once
class AVLElem
{
public:
	AVLElem();
	~AVLElem();

	AVLElem* left;
	AVLElem* right;
	AVLElem* parent;

	int Height;
	int Value;
};

