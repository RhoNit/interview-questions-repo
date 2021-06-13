#include <bits/stdc++.h>
using namespace std;
void sieveOfEratosthenes(int n) {
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for(int i = 2; i*i <= n; i++) {
		if(prime[i] == true) {
			for(int j = i*i; j <= n; j+=i) {
				prime[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++) {
		if(prime[i] == true)
			cout << i << " ";
	}
}
int main() {
	int p;
	cout << "Up to which number you wanna print all prime numbers from 2:\n";
	cin >> p;

	sieveOfEratosthenes(p);

	return 0;
}