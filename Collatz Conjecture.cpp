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
								if (min > max)//min>max做交換
												swap(max, min);
								for (i = min; i <= max; i++)//做min~max次的考拉茲猜想
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
				if (n == 1)//回傳
								return time;
				else if (n % 2 == 0)//n為偶數
								collatz(n / 2, time + 1);
				else//n為奇數
								collatz(n * 3 + 1, time + 1);
}