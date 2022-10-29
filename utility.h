#include <bits/stdc++.h>
#include <chrono>
#include <Windows.h>

using namespace std;
using namespace chrono;

typedef long long lli;
typedef long double ld;
typedef vector<lli> vi;
typedef set<lli> si;
typedef pair<lli, lli> pii;
typedef map<lli, lli> mii;
typedef map<char, lli> mci;

#define _ cin.tie(nullptr); ios_base::sync_with_stdio(false);
#define fore(x, n) for (auto& x: n)
#define fori(x, n) for(lli x = 0; x < n; x++)
#define ford(x, n) for(lli x = n; x > 0; x--)
#define all(n) (n).begin(), (n).end()
#define pb push_back
#define mp make_pair
#define MOD 1000000007

void swap(lli &a, lli &b){
    lli temp = a;
    a = b;
    b = temp;
}

void printv(vi arr){
    for(auto i : arr) cout << i << " ";
    cout << endl;
}

void scanv(vi &arr, lli n){
    fori(i, n){
        lli temp; cin >> temp;
        arr.pb(temp);
    }
}

lli random(lli n){
    minstd_rand0 g1(system_clock::now().time_since_epoch().count());
    Sleep(1);
    return (g1() % n);
}

lli gcd(lli a, lli b){
    if(b == 0) return a;
    return gcd(b, a%b); 
}

lli lcm(lli a, lli b){
    return (a / gcd(a, b) * b);
}
