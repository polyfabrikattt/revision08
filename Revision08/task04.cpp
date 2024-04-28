if (m > n) { swap(n, m); }
if (n < 0 || m < 0 || x < 0 || y < 0 ||
	x > m || y > n) {
	return -1;
}
return min(min(m - x, x), min(n - y, y));