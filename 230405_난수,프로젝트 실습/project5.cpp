/*
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int count = 0, user_num = 0;
	int strike_count = 0, ball_count = 0;
	int com[3];
	int user[3];

	bool duplication = false;

	cout << "�߱�����" << endl;
	while (count < 3) {
		int num = rand() % 9 + 1;
		for (int i = 0; i < 3; i++) {
			if (com[i] == num) {
				duplication = true; // ������ �ִ� ���ڿ� �ߺ� ����
				break;
			}
		}
		if (!duplication) {
			com[count] = num;  //3���� ���� ����
			count++;
		}
	}

	//cout << "��ǻ�� ��ȣ : ";
	//for (int i = 0; i < 3; i++) {
	//	cout << com[i] << " ";
	//}

	count = 0;

	do
	{
		count++;
		cout << "1~9 ������ ���� 3���� �Է��ϼ���(�ܿ��� ���ڴ� ����)" << endl;

		for (int i = 0; i < 3; i++) {
			cin >> user_num;
			user[i] = user_num;
			if (user_num < 1 || user_num > 9) {
				duplication = true;
			}
		}
		for (int j = 0; j < 3; j++) {
			if (com[j] == user[j]) {
				strike_count++;
			} // �ڸ��� ���� ���� ��(��Ʈ����ũ)
			for (int i = 0; i < 3; i++) {
				if (com[j] != user[j] && com[i] == user[j]) {
					ball_count++;
				} // �ڸ��� �ٸ��� ���� ���� �� (��)
			}
		}
		cout << "strike : " << strike_count << "     ball : " << ball_count;
		cout << endl;
		if (strike_count == 3) {
			cout << count << "�� ���� ������ϴ�." << endl;
			break;
		}
		else {
			strike_count = 0;
			ball_count = 0;
		}
	} while (duplication == false);
}
*/


