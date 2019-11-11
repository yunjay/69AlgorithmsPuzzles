#include <iostream>
int cutSquares(int x, int y) {
	int cnt = 0; int r;
	if (x == y)return 1;
	else if (x < y) {
		//종이 돌리기
		x ^= y;
		y ^= x;
		x ^= y;
	}
	//x>y
	cnt += x / y;
	r = x % y;
	if (r)cnt += cutSquares(y, r);
	return cnt;
}
int findRectangles(int max, int n) {
	int res = 0;
	for (int i = 1; i <= max; i++) {
		for (int j = i; j <= max; j++) { //j=i 부터 해서 반만하기
			if (cutSquares(i, j) == n) {
				res++;
				//std::cout << "가능 수치 : " << i << ", " << j << std::endl;
			}
		}
	}
	return res;
}
int main()
{
	int max = 1000, n;
	std::cout << "찾고싶은 정사각형 수: ";
	std::cin >> n;
	int res = findRectangles(max, n);
	std::cout <<"가능한 조합: " <<res << std::endl;
	system("pause");
	return 0;
}
