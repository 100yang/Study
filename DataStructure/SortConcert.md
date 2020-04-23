### 排序

* 基本排序算法图 

    <img src="Picture/Sort.png">

    > k : “桶”的个数
    >
    > In-place :　占用常数内存，不占用额外的内存
    >
    > Out-place :　占用额外的内存

* 插入排序

    > * 步骤
    >
    > 对于当前位置 pos　其　0 － pos-1　位置上的元素是有序的(所以排序的下标从1开始)
    >
    > 接下来要对 pos上的元素(假设值为Ａ)插入到已经排好序的数组中　
    >
    > 用当前元素(A) 和　0 － pos-1　上的元素从后往前进行比较　遇到第一个比A小的就结束
    >
    > * 示意图：
    >
    > ![](/home/onezero/Files/Study/DataStructure/Picture/插入排序-示意图.png)
    >
    > * 代码：
    >
    > ```c++
    > void InsertSort(ElementType A[], int N) {
    > 	ElementType tmp;
    > 	int pos, j;
    > 	for ( pos = 1; pos < N; ++pos) {
    > 		tmp = A[pos]; //当前要排序的元素
    > 		for ( j = pos; j > 0 && A[j - 1] > tmp; --j) {　//从已排好序的数组中　找到第一个符合要求的元素
    > 			A[j] = A[j - 1];//　后移
    > 		}
    > 		A[j] = tmp;//要排序元素Ａ在　0-pos 中应该占据的位置
    > 	}
    > }
    > ```

* shell 排序

    > * 步骤
    >
    > 一般是选择一个增量序列 $h_1 h_2 ... h_t,h_1 = 1$
    >
    > 对于选择的增量$h_k$来说　排序后　对于每一个位置$i$有$A[i] \leq A[i+h_k]$  (i　是有意义的)
    >
    > 即　所有相距$h_k$的元素都是有序的
    >
    > * 示意图
    >
    > ![](/home/onezero/Files/Study/DataStructure/Picture/shell排序-示意图.png)
    >
    > 
    >
    > * 代码
    >
    > ```c++
    > void ShellSort(ElementType A[], int N) {
    > 	int pos, j, Increment;
    > 	ElementType tmp;
    > 	for (Increment = N / 2; Increment > 0; Increment /= 2) {//增量元素选择了一个等比数列
    > 		for (pos = Increment; pos < N; ++pos) {
    > 			tmp = A[pos];
    > 			for (j = pos; j >= Increment; j -= Increment) {
    > 				if (tmp < A[j - Increment]) {
    > 					A[j] = A[j - Increment];
    > 				} else {
    > 					break;
    > 				}
    > 			}
    > 			A[j] = tmp;
    > 		}
    > 	}
    > }
    > ```

* 选择排序

    > * 步骤
    >
    > 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置。
    >
    > 再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
    >
    > 重复第二步，直到所有元素均排序完毕。
    >
    > * 示意图：
    >
    > ![](/home/onezero/Files/Study/DataStructure/Picture/selectionSort.gif)
    >
    > * 代码
    >
    > ```c++
    > void SelectSort(ElementType A[], int N) {
    > 	for (int i = 0; i < N - 1; ++i) {
    > 		int min_ = i;
    > 		for (int j = i + 1; j < N; ++j) {
    > 			if (A[j] < A[min_]) min_ = j;
    > 		}
    > 		swap(A[i], A[min_]);
    > 	}
    > }
    > ```

* 堆排序

    > * 步骤
    >
    > 堆排序（Heapsort）是指利用堆这种数据结构所设计的一种排序算法。堆积是一个近似完全二叉树的结构，并同时满足堆积的性质：即子结点的键值或索引总是小于（或者大于）它的父节点；
    >
    > 大根堆：升序
    >
    > 小根堆：降序
    >
    > * 示意图
    >
    >     ![](/home/onezero/Files/Study/DataStructure/Picture/heapSort.gif)
    >
    > * 代码
    >
    >     ```c++
    >     // 建立大根堆
    >     void Build(ElementType A[], int st, int ed) {
    >     
    >     	// 建立父子节点
    >     	int fa = st;
    >     	int son = fa * 2 + 1;
    >     
    >     	while (son <= ed) {
    >     
    >     		//比较当前两个子节点的大小 选择较大的那个子节点
    >     		if (son + 1 <= ed && A[son] < A[son + 1]) {
    >     			son++;
    >     		}
    >     
    >     		/*比较当前父子节点*/
    >     
    >     		if (A[fa] > A[son]) { // 当前父节点大　结束
    >     			break ;
    >     		} else { // 交换父子节点
    >     			swap(A[fa], A[son]);
    >     			fa = son;
    >     			son = fa * 2 + 1;
    >     		}
    >     	}
    >     }
    >     void HeapSort(ElementType A[], int N) {
    >     
    >     	// 初始化　从最后一个父节点开始
    >     	for (int pos = N / 2 - 1; pos >= 0; --pos) {
    >     		Build(A, pos, N - 1);
    >     	}
    >     
    >     	// 将第一个元素和已排好序的前一位进行交换，再重新调整，直到排序完毕
    >     	for (int pos = N - 1; pos > 0; --pos) {
    >     		swap(A[0], A[pos]);
    >     		Build(A, 0, pos - 1);
    >     	}
    >     }
    >     ```

* 归并排序

    > * 步骤
    >
    >     合并两个已经排好序的表 A 和 B 。输出数组 C
    >
    >     取三个计数器 $Aptr = Bptr = Cptr = 0 $
    >
    >     令　$C[Cptr] = min(A[Aptr],B[Bptr])$
    >
    >     $if$ $ A[Aptr] < B[Bptr]$ 则 $Aptr++ Cptr++$
    >
    >     $else$ $Bptr++,Cptr++$
    >
    >     当A,B中一个数组遍历完成　数组中的剩余元素并入到C中
    >
    > * 示意图
    >
    >     ![](/home/onezero/Files/Study/DataStructure/Picture/mergeSort.gif)
    >
    > * 代码
    >
    >     ```c++
    >     /*递归版*/
    >     
    >     // 数组B为临时数组
    >     // Lpos Rpos Rend 将数组A[] 分为 A[Lpos,Rpos-1]和 A[Rpos,Rend];
    >     void Merge(ElementType A[], ElementType B[], int Lpos, int Rpos, int Rend) {
    >     	int Lend = Rpos - 1;
    >     	int TmpPos = Lpos;
    >     	int len = Rend - Lpos + 1;
    >     	while (Lpos <= Lend && Rpos <= Rend) {
    >     		if (A[Lpos] <= A[Rpos]) {
    >     			B[TmpPos++] = A[Lpos++];
    >     		} else {
    >     			B[TmpPos++] = A[Rpos++];
    >     		}
    >     	}
    >     	while (Lpos <= Lend)
    >     		B[TmpPos++] = A[Lpos++];
    >     	while (Rpos <= Rend)
    >     		B[TmpPos++] = A[Rpos++];
    >     
    >     	//　将A[Lpos,Rend] 排序完成
    >     	for (int i = 0; i < len; ++i, Rend--) {
    >     		A[Rend] = B[Rend];
    >     	}
    >     }
    >     void MSort(ElementType A[], ElementType tmpArray[], int st, int ed) {
    >     	int mid;
    >     	if (st < ed) {
    >     		mid = (st + ed) >> 1;
    >     		MSort(A, tmpArray, st, mid);
    >     		MSort(A, tmpArray, mid + 1, ed);
    >     		Merge(A, tmpArray, st, mid + 1, ed);
    >     	}
    >     }
    >     void MergeSort(ElementType A[], int N) {
    >     	ElementType tmpArray[N];
    >     	MSort(A, tmpArray, 0, N - 1);
    >     }
    >     
    >     /*非递归版*/
    >     void MregeSort()
    >     ```
    >
    >     
    >
    >     
    >
    >     