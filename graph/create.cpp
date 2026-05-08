#include <iostream>
#include <vector>
using namespace std;

void addelement(vector<int> adj[],int v, int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void print(vector<int>adj[],int V){
    for (int i = 0; i < V; i++)
    {
        cout<<"\nAdjansency graph "<<i<<"\nhead";
        for(auto a: adj[i]){
            cout<<"->"<<a;
        }
        cout<<"\n";
    }
    
}

int main(){
    int V = 5;
    vector<int> adj[V];
    addelement(adj,1,2);
    addelement(adj,2,1);
    addelement(adj,1,3);
    addelement(adj,1,4);
    addelement(adj,4,2);
    print(adj,V);

    return 0;
}