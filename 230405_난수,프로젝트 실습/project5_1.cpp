
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int strike_count = 0;
	int ball_count = 0;
	int count = 0;
	int com[3];
	int user[3];
	int user_num;
	const int chance = 3;
	bool duplication = false;

	cout << "�߱����� ����!" << endl;
	while (count < chance) {
		int num = rand() % 9 + 1;

		for (int i = 0; i < 3; i++) {
			if (com[i] == num) {
				duplication = true;
				break;
			} // com�� ���� ���� ������ ����
		}
		if (!duplication) {
			com[count] = num;
			count++;
		} // �ߺ��� �ƴϸ� com�� �ֱ�
	}
	count = 0;


	//do~while : do ���� �ѹ� �����ϰ� �ߺ������� ��� �ݺ��ǰԲ�.
	do {
		count++;
		cout << "1~9������ ���� �� 3���� �Է��ϼ��� (�� �ܴ� ����): ";
		cout << endl;
		bool duplication = false;

			for (int i = 0; i < chance; i++) {
				cin >> user_num;
				user[i] = user_num;
				if (user_num < 1 || user_num > 9) {
					duplication = true;
					cout << "���� ���� �����Դϴ�. ���Է��ϼ���" << endl;
				}
			}
			for (int j = 0; j < chance; j++) {
				if (com[j] == user[j]) {
					strike_count++;
				} // ���� ��ġ�� ���� ������ ��, strike_count++
				for (int i = 0; i < j; i++) {
					if (com[j] != user[j] && com[i] == user[j]) {
						ball_count++;
					}
				}// ��ġ�� �ٸ��� ���� ������ ��, ball_count++
			}
			cout << "strike : " << strike_count << " ball : " << ball_count << endl;

			if (strike_count == 3) {
				cout << count << "�� ���� ������ϴ�." << endl;
				break;
			}
			else {
				strike_count = 0;
				ball_count = 0;
			} // �ʱ�ȭ�ϰ� �ٽ� ī��Ʈ.
		
	} while (duplication == false); //�ߺ������� �ٽ� do �ݺ�.
}


