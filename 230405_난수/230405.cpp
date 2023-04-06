//난수생성
//난수 : 랜덤 수
/*
#include <cstdlib>
#include <iostream>
#include <ctime> // 현재시간 불러옴
using namespace std;

int main() {
	srand(time(NULL));
	int num = rand();
	int tmp = num % 5 + 1; //범위 설정할때
	cout << tmp << endl;
	cout << RAND_MAX;
}
*/


//실습1 로또번호 추첨

/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int size[6];

	for (int i = 0; i < 6; i++) {
		size[i] = rand() % 45 + 1; //1부터 45까지 범위 설정
		cout << size[i] << endl;
		for (int j = 0; j < i; j++) {
			if (size[i] == size[j]) i--;
		}
	}
	cout << "*************************" << endl;
	cout << "이번회차 로또 당첨 번호는" << endl;
	for (int i = 0; i < 6; i++) {
		cout << size[i] << " ";
	}
}
*/

//프로젝트 1. 배스킨라빈스 31 게임

/*
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	srand(time(NULL));
	int count = 0;
	int num = 0;
	int BR31[31];
	bool TURN = false;


	for (int i = 0; i < 31; i++) {
		BR31[i] = i + 1;
	}

	while (count < 32) {
		int com = rand() % 3 + 1;
		cout << "개수를 입력하세요 : ";
		cin >> num;
		if (num < 4 && TURN == false) {
			cout << "사용자가 부른 숫자!" << endl;
			for (int j = 0; j < num; j++) {
				cout << BR31[count + j] << endl;
				if (BR31[count + j] == 31) {
					cout << "컴퓨터의 승리입니다ㅜㅜ" << endl;
					return 0;
				}
			}
			count = count + num;
			TURN = true;
		}
		else {
			cout << "1~3까지의 숫자를 입력해주세요" << endl; 
		}

		if (TURN == true) {
			cout << "컴퓨터가 부른 숫자!" << endl;
			for (int j = 0; j < com; j++) {
				cout << BR31[count + j] << endl;
				if (BR31[count + j] == 31) {
					cout << "유저의 승리입니다!" << endl;
					return 0;
				}
			}
			count = count + com;
		}TURN = false;
	}
	cout << endl;
	}
	*/
