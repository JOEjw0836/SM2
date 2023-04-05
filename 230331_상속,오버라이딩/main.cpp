#include <iostream>
#include <vector>
using namespace std;
class Snack {
protected:
	string name;
	static int cnt;
public:
	Snack(string name) {
		this->name = name;
		plusCnt();
	}
	void plusCnt() {
		cnt++;
	}
	static int getCnt() {
		return cnt;
	}
	virtual void printName() {
		cout << name;
	}

};
int Snack::cnt = 0;

class Candy : public Snack {
protected:
	string flavor;
public:
	Candy(string flavor) : Snack(flavor) {
		this->flavor = flavor;
	}
	void printName() {
		cout << flavor << "�� �����Դϴ�" << endl;
	}
};
class Chocolate : public Snack {
protected:
	string shape;
public:
	Chocolate(string shape) : Snack(shape) {
		this->shape = shape;
	}
	void printName() {
		cout << shape << "��� ���ݸ��Դϴ�" << endl;
	}
};
int main() {
	int num;
	string flavor, shape;
	vector<Snack*> v;
	while (1) {
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�(1: ����, 2: ���ݸ�, 0: ����) :  ";
		cin >> num;
		switch (num) {
		case 0:
			cout << "���Ĺٱ��Ͽ� ��� ������ ������ " << Snack::getCnt() << "�� �Դϴ�." << endl;
			cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ� " << endl;
			for (int i = 0; i < v.size(); i++) {
				v[i]->printName();
			}
			return -1;
		case 1:
			cout << "���� �Է��ϼ��� : ";
			cin >> flavor;
			cout << endl;
			v.push_back(new Candy(flavor));
			break;
		case 2:
			cout << "����� �Է��ϼ��� : ";
			cin >> shape;
			cout << endl;
			v.push_back(new Chocolate(shape));
			break;
		}
	}

	
}