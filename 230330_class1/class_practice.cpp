/*
#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle(int width, int height) {
		this->width = width;
		this->height = height;
	}
	void area() {
		cout << width * height;
	}
};
int main() {
	int width, height;
	
	cout << "�簢�� ���ο� ���� �Է� : ";
	cin >> width >> height;
	Rectangle r(width, height);
	r.area();
}
*/

/*
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
		cout << "���ο� �̸��� : " << name;
	}
	void level_up() {
		level++;
		cout << "���緹�� : " << level;
	}
	void item_get() {
		item_num++;
		cout << "������ �� : " << item_num;
	}
	void item_use() {
		item_num--;
		cout << "������ �� : " << item_num;
	}
	void output() {
		cout << "�̸� : " << name << endl << "���� : " << level << endl;
		cout << "���� ������ �� : " << item_num;
	}

};
int main() {
	int num = 0;
	int level = 0;
	string name;
	Character c(name);
	cout << "�̸��� �Է����ּ���";
	cin >> name;
	while (1) {
		switch (num) {
		case 0:
			return -1;
		case 1:
			cout << "���ο� �̸��� �Է��ϼ���";
			cin >> name;
			c.setName(name);
			break;
		case 2:
			c.level_up();
		case 3:
			c.item_get();
		case 4:
			c.item_use();
		case 5:
			c.output();

		}
	}
}
*/

