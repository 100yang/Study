/*
* @Author: 100yang
* @Date:   2020-04-23
* @Last Modified by:   100yang
* @Last Modified time: 2020-04-23
*/
/**
 * 插入排序
 */
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>
using namespace std;
typedef int ElementType;
void InsertSort(ElementType A[], int N) {
	ElementType tmp;
	int pos, j;
	for ( pos = 1; pos < N; ++pos) {
		tmp = A[pos];
		for ( j = pos; j > 0 && A[j - 1] > tmp; --j) {
			A[j] = A[j - 1];
		}
		A[j] = tmp;
	}
}
void ShellSort(ElementType A[], int N) {
	int pos, j, Increment;
	// int pp = 0;
	ElementType tmp;
	for (Increment = N / 2; Increment > 0; Increment /= 2) {
		for (pos = Increment; pos < N; ++pos) {
			tmp = A[pos];
			for (j = pos; j >= Increment; j -= Increment) {
				if (tmp < A[j - Increment]) {
					A[j] = A[j - Increment];
				} else {
					break;
				}
			}
			A[j] = tmp;
		}
	}
}
void SelectSort(ElementType A[], int N) {
	for (int i = 0; i < N - 1; ++i) {
		int min_ = i;
		for (int j = i + 1; j < N; ++j) {
			if (A[j] < A[min_]) min_ = j;
		}
		swap(A[i], A[min_]);
	}
}
// #define leftchild(i) (2*(i)+1)
// 建立大根堆
void Build(ElementType A[], int st, int ed) {

	// 建立父子节点
	int fa = st;
	int son = fa * 2 + 1;

	while (son <= ed) {

		//比较当前两个子节点的大小 选择较大的那个子节点
		if (son + 1 <= ed && A[son] < A[son + 1]) {
			son++;
		}

		/*比较当前父子节点*/

		if (A[fa] > A[son]) { // 当前父节点大　结束
			break ;
		} else { // 交换父子节点
			swap(A[fa], A[son]);
			fa = son;
			son = fa * 2 + 1;
		}
	}
}
void HeapSort(ElementType A[], int N) {

	// 初始化　从最后一个父节点开始
	for (int pos = N / 2 - 1; pos >= 0; --pos) {
		Build(A, pos, N - 1);
	}

	// 将第一个元素和已排好序的前一位进行交换，再重新调整，直到排序完毕
	for (int pos = N - 1; pos > 0; --pos) {
		swap(A[0], A[pos]);
		Build(A, 0, pos - 1);
	}
}
/*
// 数组B为临时数组
// Lpos Rpos Rend 将数组A[] 分为 A[Lpos,Rpos-1]和 A[Rpos,Rend];
void Merge(ElementType A[], ElementType B[], int Lpos, int Rpos, int Rend) {
	int Lend = Rpos - 1;
	int TmpPos = Lpos;
	int len = Rend - Lpos + 1;
	while (Lpos <= Lend && Rpos <= Rend) {
		if (A[Lpos] <= A[Rpos]) {
			B[TmpPos++] = A[Lpos++];
		} else {
			B[TmpPos++] = A[Rpos++];
		}
	}
	while (Lpos <= Lend)
		B[TmpPos++] = A[Lpos++];
	while (Rpos <= Rend)
		B[TmpPos++] = A[Rpos++];

	//　将A[Lpos,Rend] 排序完成
	for (int i = 0; i < len; ++i, Rend--) {
		A[Rend] = B[Rend];
	}
}
void MSort(ElementType A[], ElementType tmpArray[], int st, int ed) {
	int mid;
	if (st < ed) {
		mid = (st + ed) / 2;
		MSort(A, tmpArray, st, mid);
		MSort(A, tmpArray, mid + 1, ed);
		Merge(A, tmpArray, st, mid + 1, ed);
	}
}
void MergeSort(ElementType A[], int N) {
	ElementType tmpArray[N];
	MSort(A, tmpArray, 0, N - 1);
}
*/
void MergeSort(ElementType A[], int N) {
	ElementType tmpArray[N];
	ElementType C[N];

}
int main() {
	default_random_engine e;
	uniform_int_distribution<unsigned> u(10, 100); //随机数分布对象
	uniform_int_distribution<unsigned> num(0, 10000); //随机数分布对象
	int n = u(e);
	printf("%d\n", n);
	int a[n];
	printf("排序前:");
	for (int i = 0; i < n; ++i) {
		a[i] = num(e);
		printf("%d ", a[i]);
	}
	puts("");
	// InsertSort(a, n);
	// ShellSort(a, n);
	// HeapSort(a, n);
	MergeSort(a, n);
	printf("排序后:");
	for (int i = 0; i < n; ++i) printf("%d ", a[i]);
}