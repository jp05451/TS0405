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
								if (min > max)//min>max���洫
												swap(max, min);
								for (i = min; i <= max; i++)//��min~max�����ҩԯ��q�Q
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
				if (n == 1)//�^��
								return time;
				else if (n % 2 == 0)//n������
								collatz(n / 2, time + 1);
				else//n���_��
								collatz(n * 3 + 1, time + 1);
}