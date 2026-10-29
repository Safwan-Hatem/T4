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
    per mn,mx;
    mn.age=1e18;
    mx.age=0;
    for (int i=0;i<n;i++) {
        fr2>>v[i].name>>v[i].age;
        if (v[i].age<mn.age) {
            mn.age=v[i].age;
            mn.name=v[i].name;
        }
        if (v[i].age>mx.age) {
            mx.age=v[i].age;
            mx.name=v[i].name;
        }
    }
    fr2.close();
    ofstream re("results.txt");
    re<<"Youngest : "<<mn.name<<endl<<"Oldest : "<<mx.name<<endl;
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
