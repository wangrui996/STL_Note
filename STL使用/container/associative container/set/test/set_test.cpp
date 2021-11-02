/*


	使用类的成员函数作为线程入口

*/

#include <iostream>

#include <vector>


#include <set>

using namespace std;


//主线程从main函数入口开始执行
int main()
{

	set<int> myset; 

	myset.insert(3);
	myset.insert(1);
	myset.insert(2);
	myset.insert(2);

	cout << *myset.begin() << endl;
	return 0;
}
