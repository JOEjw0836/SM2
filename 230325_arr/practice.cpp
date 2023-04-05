#include <iostream>

using namespace std;

class Character {
	string name;
	int level, item_num;
public:
	Character(string name) {
		this->name = name;
		level = 0;
		item_num = 0;
	}
	void setName(string name) {
		this->name = name;
	}
	void level_up() {
		level++;
		cout << "레벨 업!\n현재 레벨은 : " << level;
	}
	void item_get() {
		item_num++;
		cout << "현재 아이템 수 : " << item_num;
	}
	void item_use() {
		item_num--;
		cout << "현재 아이템 수 : " << item_num;
	}
	void output() {
		cout << "이름 : " << name << endl << "레벨 : " << level << endl << "아이템 개수 : " << item_num << endl;
	}
};

int main() {
	int num = 0;
	string name;
	Character c(name);
	cout << "이름을 입력해주세요 : ";
	cin >> name;
	cout << endl << name << "캐릭터가 생성되었습니다" << endl;
	while (1) {
		cout << "어떤 동작을 실행하겠습니까 ? (0 : 종료)";
		cin >> num;
		switch (num) {
		case 0:
			return -1;
		case 1:
			cout << "새 이름 입력 : ";
			cin >> name;
			c.setName(name);
			break;
		case 2:
			c.level_up();
			break;
		case 3:
			c.item_get();
			break;
		case 4:
			c.item_use();
			break;
		case 5:
			c.output();
			break;
		}
	}
}