
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int count = 0;
	int n = 0;

	cout << "�������� �� Ȥ�� ���� ���� �ڿ����� �Է��ϼ��� : ";
	cin >> n;
	vector<vector<int>> arr(n, vector<int>(n, 0));
	int x = 0;
	int y = n / 2;

	for (int i = 0; i < n * n; i++) {
		count++;
		if (x < 0) {
			x += n;
		} // x�� ����(�� ��)�� ��� ������ ������ �̵�
		if (y >= n) {
			y -= n;
		} // ���� �������� �Ѿ�� ù���� �̵�
		arr[x][y] = count;
		if (count % n == 0) {
			x++;
			continue;
		} // n�� ������ �Ʒ�ĭ���� �̵��ϹǷ� �� ����
		x--;
		y++;
	}// �� ���� ��� ���� �밢�� ���� ���Ƿ� �న��, ������.
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}


