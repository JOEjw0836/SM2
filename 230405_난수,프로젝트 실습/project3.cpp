
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
			}
		}
		if (!a)
		{
			com[count] = num;
			count++;
		}
	}

	count = 0;

	while (count < 6)
	{
		bool a = false;
		cout << count + 1 << "��° ��ȣ�� �Է��ϼ���. : ";
		cin >> user_num;
		if (user_num > 25 || user_num < 1)
		{
			cout << "�߸��� �����Դϴ�. �ٽ� �Է����ּ���. \n";
		}
		else
		{
			for (int i = 0; i < 6; i++)
			{
				if (user[i] == user_num)
				{
					a = true;
					cout << "�̹� �Էµ� �����Դϴ�.\n";
					break;
				}
			}
			if (!a)
			{
				user[count] = user_num;
				count++;
			}
		}
	}
	cout << "-----------------------------------\n";

	cout << endl << "�ζ� ��ȣ : ";
	for (int i = 0; i < 6; i++)
	{
		cout << com[i] << " ";
	}

	cout << endl << "���� ��ȣ : ";
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

	cout << endl << "���� ������ ���� 1 ~ 7������� ����� ���ɴϴ�. " << endl;
	cout << endl << "���� ����: " << count << endl;
	cout << 7 - count << "���Դϴ�! " << endl;

	return 0;
}
