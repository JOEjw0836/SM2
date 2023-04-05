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
		cout << "���� ��!\n���� ������ : " << level;
	}
	void item_get() {
		item_num++;
		cout << "���� ������ �� : " << item_num;
	}
	void item_use() {
		item_num--;
		cout << "���� ������ �� : " << item_num;
	}
	void output() {
		cout << "�̸� : " << name << endl << "���� : " << level << endl << "������ ���� : " << item_num << endl;
	}
};

int main() {
	int num = 0;
	string name;
	Character c(name);
	cout << "�̸��� �Է����ּ��� : ";
	cin >> name;
	cout << endl << name << "ĳ���Ͱ� �����Ǿ����ϴ�" << endl;
	while (1) {
		cout << "� ������ �����ϰڽ��ϱ� ? (0 : ����)";
		cin >> num;
		switch (num) {
		case 0:
			return -1;
		case 1:
			cout << "�� �̸� �Է� : ";
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