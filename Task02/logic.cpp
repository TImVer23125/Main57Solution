
// O(N)
long long  tribonacci_iterative(int n) {
	if (n < 0) {
		return -1;
	}
	if (n == 0 || n == 1) {
		return 0;
	}
	if (n == 2) {
		return 1;
	}

	long long t0 = 0, t1 = 0, t2 = 1, tn;
	for (int i = 3; i <= n; i++) {
		tn = t0 + t1 + t2;
		t0 = t1;
		t1 = t2;
		t2 = tn;
	}
	return t2;
}

//O(3^N)
long long  tribonacci_recursive(int n) {
	if (n < 0) return -1;
	if (n == 0 || n == 1) return 0;
	if (n == 2) return 1;
	return tribonacci_recursive(n - 1) +
		tribonacci_recursive(n - 2) +
		tribonacci_recursive(n - 3);
}