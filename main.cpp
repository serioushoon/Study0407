//�ָӴϿ� ���� 1-45�� ����ֽ��ϴ�
//6���� ���� ������ �� ������ ���α׷��� ��������.
//�ߺ����� �ʰ� ���ڰ� ������ ������ �մϴ�.

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int Ball[6];
	int num = 0;

	srand(time(NULL));

	for (int i = 0; i < 6; i++) 
	{
		int num = rand() % (46);
		Ball[i] = num;
		cout << Ball[i] << endl;
	}

	return 0;
}