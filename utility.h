#include <bits/stdc++.h>
#include <chrono>
#include <Windows.h>

using namespace std;
using namespace chrono;

typedef long long lli;
typedef long double ld;
typedef vector<lli> vi;
typedef set<lli> si;

#define _ cin.tie(nullptr); ios_base::sync_with_stdio(false);
#define fori(x, n) for(int x = 0; x < n; x++)
#define ford(x, n) for(int x = n; x > 0; x--)
#define pb push_back
#define mp make_pair

void printv(vector<lli> arr){
    for(auto i : arr) cout << i << " ";
    cout << endl;
}

lli random(lli n){
    minstd_rand0 g1(system_clock::now().time_since_epoch().count());
    Sleep(1);
    return (g1() % n);
}
