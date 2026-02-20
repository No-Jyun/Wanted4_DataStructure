#include "Container/HashTable.h"
#include <iostream>

int main()
{
	// 해시 테이블 객체 생성
	HashTable table;

	// 데이터 추가
	table.Add("TeMMie", "010-6667-8461");
	table.Add("TeMMie", "010-1237-8462");
	table.Add("KeVin", "010-7687-8461");
	table.Add("Ronaldo", "siuuuuuuuuu");
	table.Add("Messi", "MessiKimochi");
	table.Add("Kimchi", "010-1588-1588");

	// 출력
	table.Print();

	// 검색
	Pair<std::string, std::string> outValue;
	if (table.Find("Ronaldo", outValue))
	{
		std::cout << "검색 성공. Key: " << outValue.key << " | Value: " << outValue.value << "\n";
	}

	// 삭제
	table.Delete("TeMMie");
	table.Delete("KeVin");

	table.Print();

	std::cin.get();
}