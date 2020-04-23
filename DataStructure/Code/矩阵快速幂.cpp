/*
* @Author: onezero
* @Date:   2020-04-14
* @Last Modified by:   onezero
* @Last Modified time: 2020-04-14
*/
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
#define N 10
int n, num;
struct Matrix {
	ll mat[N][N];
	void init() {
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				mat[i][j] = 0;
			}
		}
	}
};
Matrix multi(Matrix a, Matrix b) {
	Matrix res;
	res.init();
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < n; ++k) {
				res.mat[i][j] += (a.mat[i][k] * b.mat[k][j]);
			}
		}
	}
	return res;
}
Matrix Pow(Matrix a, int num) {
	Matrix unit;
	unit.init();
	for (int i = 0; i < N; ++i) unit.mat[i][i] = 1;
	while (num) {
		if (num & 1) {
			unit = multi(unit , a);
		}
		num >>= 1;
		a = multi(a, a);
	}
	return unit;
}
int main() {
	// int n, k;
	while (~scanf("%d%d", &n, &num)) {
		Matrix A;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				scanf("%lld", &A.mat[i][j]);
			}
		}
		Matrix ans = Pow(A, num);
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				printf("%lld ", ans.mat[i][j]);
			}
			puts("");
		}
	}
}