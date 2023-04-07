//주머니에 공이 1-45개 들어있습니다
//6개의 공을 꺼냈을 때 나오는 프로그램을 만들어보세요.
//중복되지 않게 숫자가 나오게 만들어야 합니다.

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