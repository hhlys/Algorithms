// LeetCodeTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include "AddTwoNumber2.h"





int _tmain(int argc, _TCHAR* argv[])
{
	AddTwoNumber2 add;
	ListNode *node1 = new ListNode(1);
	//ListNode *node2 = new ListNode(4);
	//ListNode *node3 = new ListNode(3);
	//node1->next = node2;
	//node2->next = node3;

	ListNode *node11 = new ListNode(9);
	ListNode *node22 = new ListNode(9);
	//ListNode *node33 = new ListNode(4);
	node11->next = node22;
	//node22->next = node33;
	ListNode *node = add.addTwoNumbers(node1,node11);

	system("pause");
	return 0;
}
