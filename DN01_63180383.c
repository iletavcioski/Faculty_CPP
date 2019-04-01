#include <stdio.h>

int main() {

	long long arr[30];
	long long i = 0;
	long long n, m;
	scanf("%lld %lld", &n, &m);
	long long p = n;

	while (p > 0) {
		i++;
		p /= 10;
	}
	i--;
	while (n > 0) {
		arr[i] = n%10;
		n /= 10;
		i--;
	}
	i = 0;

	p = m;
	long long l = 0;
	while (p > 0) {
		l++;
		p /= 10;
	}
	long long leng = l;
	l--;

	long long arr2[30];

	while (m > 0) {
		arr2[l] = m%10;
		m/=10;
		l--;
	}
	
	for (int ii = 0; ii < leng; ii++) {
	
		long long br = arr2[ii];
		long long k = 1;
		for (long long j = 0; j < br - 1; j++) {
			k *= 10;
		}
		long long brojac = 0;
		while (br > 0) {
			brojac += k * arr[i];
			br--;
			k /= 10;
			i++;
		}
		printf("%lld\n", brojac);
	}
	return 0;
	
}