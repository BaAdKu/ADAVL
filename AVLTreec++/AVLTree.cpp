#include "AVLTree.h"



AVLTree::AVLTree()
{
	Root = nullptr;
}


AVLTree::~AVLTree()
{
	DeleteTree(Root);
	Root = nullptr;
}

void AVLTree::Insert(int i)
{
	Insert(*Root, i);
}

void AVLTree::Print()
{
}

int AVLTree::Max(int a, int b)
{
	if (a < b)
		return a;
	else
		return b;
}

int AVLTree::GetHeight(AVLElem* elem)
{
	if (elem == nullptr)
		return-1;
	else
		return elem->Height;
}

void AVLTree::UpdateHeight(AVLElem * elem)
{
	elem->Height = 1 + Max(elem->left->Height, elem->right->Height);
}

void AVLTree::Insert(AVLElem elem, int i)
{
}

void AVLTree::DeleteTree(AVLElem * root)
{
}

void AVLTree::CheckRotationRight(AVLElem * &elem)
{
	if (elem != nullptr)
	{
		if (elem->left != nullptr)
		{
			if (GetHeight(elem->left) - GetHeight(elem->right) > 1)
			{
				if (GetHeight(elem->left->right) > GetHeight(elem->left->left))
				{
					DoubleRotateRight(elem);
				}
				else
				{
					RotateRight(elem);
				}
			}
			else
			{
				UpdateHeight(elem);
			}
		}
	}
	else
	{
		UpdateHeight(elem);
	}
}

void AVLTree::CheckRotationLeft(AVLElem * &elem)
{
	if (elem != nullptr)
	{
		if (elem->right != nullptr)
		{
			if (GetHeight(elem->right) - GetHeight(elem->left) > 1)
			{
				if (GetHeight(elem->right->left) > GetHeight(elem->right->right))
				{
					DoubleRotateLeft(elem);
				}
				else
				{
					RotateLeft(elem);
				}
			}
			else
			{
				UpdateHeight(elem);
			}
		}
	}
	else
	{
		UpdateHeight(elem);
	}
}

void AVLTree::Print(AVLElem * curr)
{
}

void AVLTree::RotateLeft(AVLElem * &a)
{
	AVLElem* temp = a->parent;
	temp->right = a->right;
	temp->left = a;
}

void AVLTree::DoubleRotateLeft(AVLElem * &a)
{

}

void AVLTree::RotateRight(AVLElem * &a)
{
	AVLElem* temp = a->parent;
	temp->left = a->left;
	temp->right = a;
}

void AVLTree::DoubleRotateRight(AVLElem * &a)
{
}
