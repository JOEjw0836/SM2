
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	std::srand(time(NULL));

	int com[6];
	int user[6];
	int count = 0, user_num = 0;

	while (count < 6)
	{
		bool a = false;
		int num = rand() % 25 + 1;
		for (int i = 0; i < 6; i++)
		{
			if (com[i] == num)
			{
				a = true;
				break;
			} // 중복된 숫자 방지
		}
		if (!a)
		{
			com[count] = num;
			count++;
		} // 중복 아닌경우 com에 저장
	}

	count = 0;

	while (count < 6)
	{
		bool a = false;
		cout << count + 1 << "번째 번호를 입력하세요. : ";
		cin >> user_num;
		if (user_num > 25 || user_num < 1)
		{
			cout << "잘못된 숫자입니다. 다시 입력해주세요. \n";
		}
		else
		{
			for (int i = 0; i < 6; i++)
			{
				if (user[i] == user_num)
				{
					a = true;
					cout << "이미 입력된 숫자입니다.\n";
					break;
				}
			}
			if (!a)
			{
				user[count] = user_num;
				count++;
			}// 중복 아닌경우 입력한 숫자가 user에 저장
		}
	}
	cout << "-----------------------------------\n";

	cout << endl << "로또 번호 : ";
	for (int i = 0; i < 6; i++)
	{
		cout << com[i] << " ";
	}

	cout << endl << "나의 번호 : ";
	for (int i = 0; i < 6; i++)
	{
		cout << user[i] << " ";
	}

	count = 0;

	for (int j = 0; j < 6; j++)
	{
		com[j];
		for (int i = 0; i < 6; i++)
		{
			if (com[j] == user[i])
			{
				count++;
			}
		}
	}

	cout << endl << "맞춘 개수에 따라 1 ~ 7등까지의 결과가 나옵니다. " << endl;
	cout << endl << "맞춘 개수: " << count << endl;
	cout << 7 - count << "등입니다! " << endl;

	return 0;
}
