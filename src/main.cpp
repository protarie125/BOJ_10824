#include <iostream>
#include <string>
#include <sstream>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string a, b, c, d;
	cin >> a >> b >> c >> d;

	auto x = a + b;
	auto y = c + d;

	auto iss = istringstream{ x };
	auto v = ll{};
	iss >> v;

	iss = istringstream{ y };
	auto w = ll{};
	iss >> w;

	cout << v + w;

	return 0;
}