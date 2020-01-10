// LeetCode.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
#include "Problem1_10.h"

using namespace std;
int main()
{
	vector<int> vi{ 1,2,3,4,5,6,7 };
	auto result = twoSum(vi, 22);
	for_each(result.cbegin(), result.cend(), [](int n) {cout << n << " "; });
	cout << endl;
	cout << "--------------END------------" << endl;
}

