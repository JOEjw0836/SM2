//�ڵ尡 ����Ǵ� ������ �ð� �����Ϸ���
//#include <ctime>
//int main(void) {
//	clock_t startTime = clock();
//
//	clock_t endTime = clock();
//	cout << "�ɸ��ð�" << (endTime - startTime) / CLOCKS_PER_SEC;
//}
// 
//String���� ���� �ܾ�� �� �� ���ڿ� �� �� ���� ��������
//[�� �ձ���]
//string word = "hello";
//cout << word[0]; --> 'h'�� ��µ�
//[�� �ޱ���]
//string word = "hello";
//int n = word.size();
//cout << word[n - 1]; --> 'o'�� ��µ�

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
int main() {
	vector <string> output;
	output.push_back("airplane");
	string word;
	clock_t startTime = clock();

	while (1) {
		for (int i = 0; i < output.size(); i++) 
			cout << " --> " << output.at(i);
			cout << endl << "���� �ܾ �Է��ϼ��� : ";
			cin >> word;
			cout << endl;
			
			clock_t endTime = clock();
			int timer = (endTime - startTime) / CLOCKS_PER_SEC;
			cout << timer << "�� ���" << endl;

			if (timer > 20) {
				cout << "Ÿ�ӿ���! ��������!!" << endl;
				cout << "�� �Է��� �ܾ� �� : " << output.size() - 1 << endl;
				break;
			}
			int a = output.back().size();
			if (word[0] != output.back()[a - 1]) {
				cout << "�߸��� �Է��Դϴ�." << endl;
				continue;
			}
			for (int i = 0; i < output.size(); i++){
				if (word == output.at(i)) {
				cout << "�̹� �� �ܾ��Դϴ�! ��������!!" << endl;
				cout << "�� �Է��� �ܾ� �� : " << output.size() - 1 << endl;
				return 0;
				}
			}output.push_back(word);
	}
}