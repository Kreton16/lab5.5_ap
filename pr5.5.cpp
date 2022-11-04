#include <iostream>
#include <cmath>
using namespace std;
double p(const double x, const int n, int level, int& depth);
int main()
{
	int depth = 0;
	int n;
	double x, q;
	cout << "x = "; cin >> x;
	cout << "n = "; cin >> n;
	q = p(x, n, 1, depth);
	cout << "depth = " << depth << endl;
	cout << "q = " << q << endl;
	return 0;
}
double s = 1;
double p(const double x, const int n, int level, int& depth)
{
	if (level > depth)
		depth = level;
	cout << "level = " << level << endl;
	if (n == 0)
		return s;
	else
		if (n < 0)
			s = 1 / p(x, abs(n), level+1, depth);
		else
			if (n > 0)
				s = x * p(x, n-1, level+1, depth);

	return s;
}