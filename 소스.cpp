#include<iostream>
using namespace std;

void swap(int*a, int*b)//�����͸� ������ ���� �����ڰ� �ƴ� �����Ͱ� ���� �Ѵ�. �������� �����ڴ� *&�� �տ� �ٿ��� �ϴµ� �� ����������.
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
	cout << "n1 = " << n1 << endl;//�������� ����� �ּҰ��̴�.
	cout << "n2 = " << n2 << endl;
	return 0;
}