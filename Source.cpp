#include <iostream>
#include<cstring>
#include<array>
#include<algorithm>
#define MAX 10
using namespace std;



int  main()
{ 
	int value = 10;
	void* ptr = &value;
	//cout << *ptr << endl;
	int* iptr = static_cast<int*>(ptr);
	cout << *static_cast<int*>(ptr) << endl;
	return 0;
}
// fix lai code ngay 29/8/2022
