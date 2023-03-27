#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
	clock_t start, finish;
	double duration;

	start = clock();

	int a = 10 + 20;

	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f 초 걸렸습니다.\n", duration);
	return 0;
}