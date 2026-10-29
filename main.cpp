#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(v) (v).begin(), (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define ll long long
#define int long long
struct per {
    string name;
    ll age;
};
void solve() {
    ll n;
    cin>>n;
    per x;
    ofstream fr("persons.txt");
    for (int i=0;i<n;i++) {
        cin>>x.name>>x.age;
        fr<<x.name<<' '<<x.age<<endl;
    }
    fr.close();
    vector<per> v(n);
    ifstream fr2("persons.txt");
    ll mn=1e18,mx=0;
    for (int i=0;i<n;i++) {
        fr2>>v[i].name>>v[i].age;
        mn=min(v[i].age,mn);
        mx=max(v[i].age,mx);
    }
    fr2.close();
    ofstream re("results.txt");
    re<<"Youngest : "<<mn<<endl<<"Oldest : "<<mx<<endl;
    re.close();

}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int TC=1;
    //cin>>TC;
    while (TC--)solve();
}
