
#include <iostream>
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class AddTwoNumber2 {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		//ListNode *node = new ListNode;
		int temp = 0;
		ListNode *start = NULL;
		ListNode *prev = NULL;
		while ((l1!=NULL || l2!=NULL))
		{
			int add1 = 0,add2 = 0,sum = 0;
			if (l1!=NULL){
				add1 = l1->val;
				l1 = l1->next;
			}
			if (l2!=NULL){
				add2 = l2->val;
				l2 = l2->next;
			}
			if(add1+add2+temp-10>=0) {sum = add1+add2-10+temp;temp = 1;}
			else {sum = add1+add2+temp;temp = 0;}
			int count = 0;
			if((l1==NULL) && (l2==NULL) && (temp==1)) count  =1;

			for (int i = 0;i<count+1;i++){
				ListNode *node = new ListNode(sum);
				if(prev==NULL) start = node;
				if (prev!=NULL){
					prev->next = node;
				}
				prev = node;
				sum = 1;
			}
			
			//temp = 0;
		}

		while (start!=NULL)
		{
			std::cout<<start->val<<std::endl;
			start = start->next;
		}
		return start;
	}
};