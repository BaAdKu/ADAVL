#include "AVLElem.h"
#pragma once
class AVLTree
{
public:
	AVLTree();
	~AVLTree();
	void Insert(int i);
	void Print();

private:
	AVLElem* Root;
	int Max(int a, int b);
	int GetHeight(AVLElem* elem);
	void UpdateHeight(AVLElem* elem);
	void Insert(AVLElem elem, int i);
	void DeleteTree(AVLElem* root);
	void CheckRotationRight(AVLElem*& elem);
	void CheckRotationLeft(AVLElem*& elem);
	void Print(AVLElem* curr);
	void RotateLeft(AVLElem*& a);
	void DoubleRotateLeft(AVLElem*& a);
	void RotateRight(AVLElem*& a);
	void DoubleRotateRight(AVLElem*& a);

};

