#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int m1 = -1, m2 = -1;
	for (int i = 0; i < n; i++) {
		int a;
		scanf("%d", &a);

		if (a > m1) 
		{
			m2 = m1;
			m1 = a;
		}
		else if (a > m2)
			m2 = a;
	}
	printf("%d\n", m2);
	return 0;
}