#include<iostream>
using namespace std;

void swap(int*a, int*b)//포인터를 스왑할 때엔 참조자가 아닌 포인터가 들어가야 한다. 포인터의 참조자는 *&를 앞에 붙여야 하는데 더 복잡해진다.
{
	int x = *a;
	*a = *b;
	*b = x;
}

int main()
{
	int n1 = 1;
	int* p1 = &n1;
	int n2 = 2;
	int* p2 = &n2;
	swap(p1, p2);
	cout << "n1 = " << n1 << endl;//포인터의 출력은 주소값이다.
	cout << "n2 = " << n2 << endl;
	return 0;
}