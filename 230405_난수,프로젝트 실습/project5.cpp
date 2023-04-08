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

	cout << "야구게임" << endl;
	while (count < 3) {
		int num = rand() % 9 + 1;
		for (int i = 0; i < 3; i++) {
			if (com[i] == num) {
				duplication = true; // 기존에 있던 숫자와 중복 방지
				break;
			}
		}
		if (!duplication) {
			com[count] = num;  //3개의 숫자 저장
			count++;
		}
	}

	//cout << "컴퓨터 번호 : ";
	//for (int i = 0; i < 3; i++) {
	//	cout << com[i] << " ";
	//}

	count = 0;

	do
	{
		count++;
		cout << "1~9 사이의 숫자 3개를 입력하세요(외에의 숫자는 종료)" << endl;

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
			} // 자리와 숫자 같을 때(스트라이크)
			for (int i = 0; i < 3; i++) {
				if (com[j] != user[j] && com[i] == user[j]) {
					ball_count++;
				} // 자리는 다르고 숫자 같을 때 (볼)
			}
		}
		cout << "strike : " << strike_count << "     ball : " << ball_count;
		cout << endl;
		if (strike_count == 3) {
			cout << count << "번 만에 맞췄습니다." << endl;
			break;
		}
		else {
			strike_count = 0;
			ball_count = 0;
		}
	} while (duplication == false);
}
*/


