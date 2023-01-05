#include <iostream>
#include <deque>

using namespace std;

using di = deque<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ans = di{};
	auto temp = di{};
	auto now = int{ 1 };
	while (0 < (n--)) {
		int x;
		cin >> x;

		while (0 < (x--)) {
			auto t = ans.back();
			temp.push_back(t);
			ans.pop_back();
		}

		ans.push_back(now);
		while (0 < temp.size()) {
			auto t = temp.back();
			ans.push_back(t);
			temp.pop_back();
		}

		++now;
	}

	for (const auto& a : ans) {
		cout << a << ' ';
	}

	return 0;
}