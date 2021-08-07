#include<iostream>
using namespace std;

int collatz(int n, int time);
int main()
{
				int i,max,min,time=0;
				while (cin >> min)
				{
								cin >> max;
								time = 0;
								cout << min << " " << max << " ";
								if (min > max)//min>max暗ユ传
												swap(max, min);
								for (i = min; i <= max; i++)//暗min~maxΩσ┰瞦稱
								{
												int temp;
												temp = collatz(i, 1);
												if (time < temp)
																time = temp;
								}
								cout << time << endl;
				}
}
int collatz(int n, int time)
{
				//cout << n <<" ";
				if (n == 1)//肚
								return time;
				else if (n % 2 == 0)//n案计
								collatz(n / 2, time + 1);
				else//n计
								collatz(n * 3 + 1, time + 1);
}