#include <iostream>
#include "List.h"
//#include <list>
//#include <forward_list>

int main()
{
	//std::forward_list<int> stlList;
	//stlList.emplace_after(stlList.begin(), 10);
	//
	//for (auto item : stlList)
	//{
	//	std::cout << item << ' ';
	//}

	List<int> list;
	for (int ix = 0; ix < 10; ix++)
	{
		list.Add(ix + 1);
	}

	// Range-based loop
	std::cout << "Range-based loop" << "\n";
	for (const int item : list)
	{
		std::cout << item << "\n";
	}

	// loop - Iterator
	//std::cout << "Iterator-based loop" << "\n";
	//for (List<int>::Iterator it = list.begin(); it != list.end(); ++it)
	//{
	//	std::cout << *it << "\n";
	//}

	std::cin.get();
}