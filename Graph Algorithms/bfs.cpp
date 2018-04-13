/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
#include <bits/stdc++.h>
using namespace std;
#define  LL long long
#define F first
#define S second
#define fast_io ios::sync_with_stdio(false);cin.tie(NULL)
vector<int> graph[1005];
int visited[1005]={0};
int main()
{
	int V,E;
	cin >> V >> E;
	for(int i=0;i<E;i++)
	{
		int x,y;
		cin >> x >> y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	int source;
	cin >> source;
	queue<int> q;
	q.push(source);
	while(!q.empty())
	{
		int x = q.front();
		cout << x << " ";
		visited[x] = 1;
		q.pop();
		for(int i=0;i<graph[x].size();i++)
		{
			int node = graph[x][i];
			if(!visited[node])
			{
				q.push(node);
			}
		}
	}
	cout << endl;
}
