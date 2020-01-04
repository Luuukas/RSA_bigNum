#include <iostream>
#include <random>
#include <math.h>
using namespace std;
using std::default_random_engine;
using std::uniform_int_distribution;
typedef long long ll;
int main() {
	ll p = 97;
	ll q = 2 * p + 1;
	default_random_engine e;
	uniform_int_distribution<ll> u(2, p);
	ll g;
	// 生成一个随机数 g，1 < g < p - 1，直到g^2 mod p 和 g^q mod p 都不等于 1
	do {
		g = u(e);
	} while (((ll)pow(g, 2) % p == 1) || ((ll)pow(g, q) % p == 1));
	cout << g << endl;
	return 0;
}