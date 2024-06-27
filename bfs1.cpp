#include <bits/stdc++.h>

using namespace std;


class A{
	public:
	vector<int> bfsofGraph(int V,vector<int>Adj[]){
		vectot<int>bfs;
		vector<int>vis(V,0);
		queue<int>q;
		q.push(0);
		vis[0]=1;
		while(!q.empty()){
			int node = q.front();
			q.pop();
			bfs.push_back(node);
			
			for(auto it:adj[node]){
				if(!vis[it])
{
	q.push(it);
	vis[it]=1;
	
			}			}
			
		}
		return bfs;
	}
};
void addEdge(vector < int > adj[], int u, int v) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}
void printans(vector<int> &ans){
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
		
	}
}

int main(){
	vector<int> adj[5];
	addEdge(adj,0,1);
	  addEdge(adj, 0, 2);
  addEdge(adj, 0, 3);
  addEdge(adj, 2, 4);
  
  A obj;
  vector<int> ans= obj.bfsofGraph(5,adj);
  printAns(ans);
  cout<<endl;
  return 0;
	
}
