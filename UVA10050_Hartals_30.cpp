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
		cin>>d>>h; //날짜와 정부 수; 
		int day[d+1]={0},hd[h]={0},hi=0; //1로 계산하기 위해서 이렇게 정의; 
		for(int i=0;i<h;i++)
		{
			cin>>hd[i];  //매 정부마다 값 입력; 
			int fr=6,sa=7; // 금요일 화요일; 
			for(int j=1;j<d+1;j++)
			{
				if(j%hd[i]==0&&((j!=fr)&&(j!=sa))) //만약에 그 일이 0이고 금요일이랑 화요일이 아닐때 값 더함; 
        		{
        			day[j]++;
				}
				
				else if(j==fr) // 다음주 금요일 값 구하기; 
				{
					fr=fr+7;
				}
				
				else if(j==sa) //똑같은 뜻; 
				{
					sa=sa+7;
				}
			}
		}
		for(int i=1;i<d+1;i++) //값이 0이상인거 부르기; 
       	{
        	if(day[i]>0) //0이상이면 일을 했다는 뜻; 
        	{
        		hi++;
			}
		}
        cout<<hi<<endl; 
	}
    return 0;
}

