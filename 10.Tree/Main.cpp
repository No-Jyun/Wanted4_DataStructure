#include "Container/Tree.h"

#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Tree<int> tree(10);
	tree.AddChild(10, 9);
	tree.AddChild(10, 8);
	tree.AddChild(9, 7);
	tree.AddChild(9, 6);
	tree.AddChild(8, 5);
	
	Node<int>* outNode = nullptr;
	if (tree.Find(6, outNode))
	{
		int number2 = 20;
	}

	// 삭제 테스트
	//if (tree.Remove(9))
	//{
	//	int number2 = 20;
	//}

	// 전위 순회 테스트
	tree.PreorderTraversal();

	int num = 10;
}