#pragma once

#include "Node.h"

// 단일 연결 리스트 클래스
// Node를 내부에서 관리
template<typename T>
class LinkedList
{
	// 타입 알리아싱 지정
	using NodeType = Node<T>*;

public:
	LinkedList()
		: head(nullptr), count(0)
	{
	}

private:
	// 헤드(머리)
	//Node<T>* head = nullptr;
	NodeType head = nullptr;

	// 연결 리스트에 저장된 항목의 수
	int count = 0;
};