#include "Problem1_10.h"

using namespace std;

std::vector<int> problem1::twoSum(std::vector<int>& nums, int target)
{
	for (int i = 0; i != nums.size() - 1; ++i)
	{
		for (int j = i + 1; j != nums.size(); ++j)
		{
			if (nums[i] + nums[j] == target)
				return { i,j };
		}
	}
	return {};
}

problem2::ListNode* problem2::addTwoNumbers(ListNode* l1, ListNode* l2)
{
	int b = 0;
	ListNode result(0);
	auto pr = &result;
	while (l1 != NULL || l2 != NULL)
	{
		l1 = l1 == NULL ? 0 : l1;
		int val_l1 = l1 == NULL ? 0 : l1->val;
		int val_l2 = l2 == NULL ? 0 : l2->val;
		pr->next = new ListNode(val_l1 + val_l2 + b);
		pr = pr->next;
		if (pr->val > 9)
		{
			pr->val -= 10;
			b = 1;
		}
		else
		{
			b = 0;
		}
		if (l1 != NULL)
			l1 = l1->next;
		if (l2 != NULL)
			l2 = l2->next;
	}
	if (b != 0)
	{
		pr->next = new ListNode(1);
	}
	return result.next;
}

int problem3::lengthOfLongestSubstring(std::string s)
{
	int max = 1;
	int curr = 1;
	char prev_c=0;
	for (auto c : s)
	{
		if (prev_c == 0)
			prev_c = c;
		else
		{
			if (c == prev_c)
			{
				prev_c = 0;
				if (curr > max)
					max = curr;
				curr = 1;
			}
			else
			{
				++max;
				prev_c = c;
			}
		}
	}
	return max;
}
