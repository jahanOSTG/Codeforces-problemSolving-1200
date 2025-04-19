#include<iostream>
using namespace std;
int main(){
    int a,b,n,m;
    cin>>n>>m>>a>>b;
    int cost1= n*a;

    int needM= n/m;
    int remainticket= n%m;
    int remainCost= min(remainticket*a,b);

    int cost2= needM*b + remainCost;

    int minimumCost=min(cost1,cost2);
    cout<<minimumCost<<endl;
}
