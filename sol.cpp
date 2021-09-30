#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	// check every i-th car if it collided with the j-th car and if it turned over
	// if the i-th car didn't turn over upon collision, then store it as one of the answers
	vector<int> indices;
	for (int i = 0; i < n; i++) {
		bool collided = false;
		for (int j = 0; j < n; j++) {
			collided |= (a[i][j] == 1 || a[i][j] == 3);
		}
		if (!collided) {
			indices.push_back(i + 1);
		}
	}
	cout << (int) indices.size() << '\n';
	for (auto& e : indices) {
		cout << e << " ";
	}
	cout << '\n';
	return 0;
}
