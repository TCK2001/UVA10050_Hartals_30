/*
2
14
3
3
4
8
100
4
12
15
25
40
Sample Output
5
15
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n,d,h;
	cin>>n;
	while(n--)
	{
		cin>>d>>h; //��¥�� ���� ��; 
		int day[d+1]={0},hd[h]={0},hi=0; //1�� ����ϱ� ���ؼ� �̷��� ����; 
		for(int i=0;i<h;i++)
		{
			cin>>hd[i];  //�� ���θ��� �� �Է�; 
			int fr=6,sa=7; // �ݿ��� ȭ����; 
			for(int j=1;j<d+1;j++)
			{
				if(j%hd[i]==0&&((j!=fr)&&(j!=sa))) //���࿡ �� ���� 0�̰� �ݿ����̶� ȭ������ �ƴҶ� �� ����; 
        		{
        			day[j]++;
				}
				
				else if(j==fr) // ������ �ݿ��� �� ���ϱ�; 
				{
					fr=fr+7;
				}
				
				else if(j==sa) //�Ȱ��� ��; 
				{
					sa=sa+7;
				}
			}
		}
		for(int i=1;i<d+1;i++) //���� 0�̻��ΰ� �θ���; 
       	{
        	if(day[i]>0) //0�̻��̸� ���� �ߴٴ� ��; 
        	{
        		hi++;
			}
		}
        cout<<hi<<endl; 
	}
    return 0;
}

