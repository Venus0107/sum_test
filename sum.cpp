#include "sum.h"

int sum(int n) {
	int res = 1;
	for (int i = 1; i <= n; ++i)
		res += i;
	return res;
}
