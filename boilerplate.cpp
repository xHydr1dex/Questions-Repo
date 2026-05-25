// xhydr1dex <3

#include <bits/stdc++.h>
#include <string>
#include <cctype>
using namespace std;

// -------------------- Constants --------------------
const long long MOD = 1e9 + 7;
const int INF = 1e9;
const long long LINF = 1e18;
#define ll long long
#define pb push_back
#define FOR for(int i = 0;i<n;i++)
#define f(a,b) for(int i = a;i<b;i++)
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>
#define pll pair<long long,long long>
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
#define endl "\n"
#define mp make_pair
#define all(a) a.begin(),a.end()
#define lb lower_bound
#define ub upper_bound

// -------------------- Globals --------------------
const int lim = 1e6+1;
ll div_cnt[lim];
ll fact[lim], invfact[lim]; // For nCr

// -------------------- Math Utilities --------------------
void fact_cnt(){
    for(int i = 1;i<lim;i++){
        for(int j = i;j<lim;j+=i){
            div_cnt[j]++;
        }
    }
}

ll gcd(ll a, ll b){ return b==0?a:gcd(b,a%b); }
ll lcm(ll a, ll b){ return (a/gcd(a,b))*b; }

long long modpow(long long a, long long b) {
    long long res = 1;
    a %= MOD;
    while (b > 0) {
        if (b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

long long modinv(long long q) {
    return modpow(q, MOD - 2);
}

// -------------------- Combinatorics --------------------
void init_fact(int n=1e6){
    fact[0] = invfact[0] = 1;
    for(int i=1; i<=n; i++) fact[i] = (fact[i-1]*i)%MOD;
    invfact[n] = modinv(fact[n]);
    for(int i=n-1;i>=1;i--) invfact[i] = (invfact[i+1]*(i+1))%MOD;
}

ll nCr(int n, int r){
    if(r<0 || r>n) return 0;
    return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
}

// -------------------- Number Theory --------------------
vector<int> primes;
vector<bool> is_prime;
void sieve(int n=1e6){
    is_prime.assign(n+1,true);
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=n;j+=i) is_prime[j]=false;
        }
    }
    for(int i=2;i<=n;i++) if(is_prime[i]) primes.pb(i);
}

// -------------------- DSU (Union-Find) --------------------
struct DSU {
    vector<int> parent, sz;
    DSU(int n){ parent.resize(n); sz.resize(n,1); iota(all(parent),0);}
    int find(int x){ return parent[x]==x?x:parent[x]=find(parent[x]); }
    bool unite(int a, int b){
        a=find(a); b=find(b);
        if(a==b) return false;
        if(sz[a]<sz[b]) swap(a,b);
        parent[b]=a; sz[a]+=sz[b];
        return true;
    }
};

// -------------------- Debugging --------------------
template<typename T>
void print_vec(vector<T> &v){
    for(auto &x: v) cout << x << " ";
    cout << endl;
}

// -------------------- Main Solve --------------------
int sol(){ 
    return 0; 
}

void solve(){
    int n;
    cin >> n;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // init_fact(); // Precompute factorials for nCr
    // sieve();     // Generate primes up to 1e6

    int T;
    cin >> T;
    while (T--){
        solve();
    }
    return 0;
}