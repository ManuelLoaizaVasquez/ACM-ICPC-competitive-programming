// Gracias, Rodolfo
// Gracias, Roman
// Gracias, Maxi
// Gracias, MarcosK
// Obrigado, Dilson
//#pragma GCC optimize ("Ofast,unroll-loops")
//#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
#define fastio ios::sync_with_stdio(0);cin.tie(0)
#define For(i,a,b) for (int i = a; i < b; i++)
#define roF(i,a,b) for (int i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) (v).begin(),(v).end()
#define SZ(v) ((int)v.size())

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

const int N = 1e6;
const ll INF = 1e18;
const ld EPS = 10e-9;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll random(ll a, ll b) { return uniform_int_distribution<ll> (a, b) (rng); }

void solve() {
	ll n;
	cin >> n;
	ll aux = n;
	vii div;
	for (ll i = 2; i * i <= n; i++) {
		if (aux % i == 0) {
			ll exp = 0;
			while (aux % i == 0) {
				exp++;
				aux /= i;
			}
			div.pb({i, exp});
		}
	}
	if (aux != 1) div.pb({aux, 1});
	int sz = div.size();
	ll a, b, c;
	if (sz >= 3) {
		a = div[0].ff;
		b = div[1].ff;
		c = n / (a * b);
		cout << "YES" << endl;
		cout << a << " " << b << " " << c << endl;
		return;
	}
	if (sz == 1) {
		if (div[0].ss < 6) {
			cout << "NO" << endl;
			return;
		}
		a = div[0].ff;
		b = a * a;
		c = n / (a * b);
		cout << "YES" << endl;
		cout << a << " " << b << " " << c << endl;
		return; 
	}
	if (sz == 2) {
		if (div[0].ss + div[1].ss <= 3) {
			cout << "NO" << endl;
			return;
		}
		a = div[0].ff;
		b = div[1].ff;
		c = n / (a * b);
		cout << "YES" << endl;
		cout << a << " " << b << " " << c << endl;
		return;
	}
}

int main() {
	fastio;
	int t = 1;
	cin >> t;
	while (t--) solve();
	return 0;
}