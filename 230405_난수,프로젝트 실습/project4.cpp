/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int count = 0;
	int n = 0;

	cout << "마방진의 행 혹은 열의 수를 자연수로 입력하세요 : ";
	cin >> n;
	vector<vector<int>> arr(n, vector<int>(n, 0));
	int x = 0;
	int y = n / 2;

	for (int i = 0; i < n * n; i++) {
		count++;
		if (x < 0) {
			x += n;
		} // x가 음수로 내려가면 윗행으로 이동
		if (y >= n) {
			y -= n;
		} // 열이 우측으로 넘어가면 첫열로 이동
		arr[x][y] = count;
		if (count % n == 0) {
			x++;
			continue;
		} // n의 배수라면 행 증가
		x--;
		y++;
	}// 행 감소 열 증가
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}
*/

