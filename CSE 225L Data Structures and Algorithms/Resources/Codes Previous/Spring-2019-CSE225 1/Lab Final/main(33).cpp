#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;
int n, k;
priority_queue<int, vector<int>, greater<int> > q;

int main() {
    int n,k;
    cin >> n >> k;

    for(int i = 0; i < n; ++ i){
        int v;
        cin>>v;
        q.push(v);
    }
    bool isfind = false;
    int ans = 0;
    while(!q.empty()){
        int cur1 = q.top();
        if(cur1 >= k){
            isfind = true;
            break;
        }
        q.pop();
        if(q.empty())
            break;
        int cur2 = q.top();
        q.pop();
        int res = cur1 + 2*cur2;
        q.push(res);
        ++ ans;
    }
    if(isfind){
         cout<<ans<<endl;
    }else{
        puts("-1");
    }
    return 0;
}
