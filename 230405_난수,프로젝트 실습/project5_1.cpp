
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

	cout << "야구게임 시작!" << endl;
	while (count < chance) {
		int num = rand() % 9 + 1;

		for (int i = 0; i < 3; i++) {
			if (com[i] == num) {
				duplication = true;
				break;
			} // com에 같은 숫자 나오기 방지
		}
		if (!duplication) {
			com[count] = num;
			count++;
		} // 중복이 아니면 com에 넣기
	}
	count = 0;


	//do~while : do 내용 한번 수행하고 중복없으면 계속 반복되게끔.
	do {
		count++;
		cout << "1~9사이의 숫자 중 3개를 입력하세요 (그 외는 종료): ";
		cout << endl;
		bool duplication = false;

			for (int i = 0; i < chance; i++) {
				cin >> user_num;
				user[i] = user_num;
				if (user_num < 1 || user_num > 9) {
					duplication = true;
					cout << "범위 밖의 숫자입니다. 재입력하세요" << endl;
				}
			}
			for (int j = 0; j < chance; j++) {
				if (com[j] == user[j]) {
					strike_count++;
				} // 같은 위치에 같은 숫자일 때, strike_count++
				for (int i = 0; i < j; i++) {
					if (com[j] != user[j] && com[i] == user[j]) {
						ball_count++;
					}
				}// 위치는 다르고 같은 숫자일 떄, ball_count++
			}
			cout << "strike : " << strike_count << " ball : " << ball_count << endl;

			if (strike_count == 3) {
				cout << count << "번 만에 맞췄습니다." << endl;
				break;
			}
			else {
				strike_count = 0;
				ball_count = 0;
			} // 초기화하고 다시 카운트.
		
	} while (duplication == false); //중복없으면 다시 do 반복.
}


