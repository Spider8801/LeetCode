#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
 
#define int long long
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define MOD 1000000007
#define MOD1 998244353
#define rep(i, a, b) for(int i = a; i <= b; i++)
#define PI 3.141592653589793238462
#define INF 1e18
#define nline "\n"
#define vi vector<int>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vll vector<ll>
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define cn cout << "NO" << nline
#define cy cout << "YES" << nline
#define all(v)          v.begin(),v.end()
#define sz(x)           ((int)(x).size())
#define setbits(x)      __builtin_popcountll(x)
#define zerobits(x)     __builtin_ctzll(x)
#define leadingzeroes(x) __builtin_clzll(x)
void google(int t) {cout << "Case #" << t << ": ";}
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
// string decimalToBinary(int n){ string s = bitset<64> (n).to_string(); const auto loc1 = s.find('1'); if(loc1 != string::npos)    return s.substr(loc1); return "0"; }
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>>
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
// void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>>
ll gcd(ll a, ll b) {if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}                  //for prime b
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
vector<ll> seive(ll N ){vector<ll> prime; vector<bool> primes(N+1, true); primes[0]=primes[1]=false; for(ll i=2; i*i<=N; i++){ if(primes[i]){ for(ll j= i*i; j<=N; j+=i){ primes[j]=false; } } } for(ll i=2; i<N; i++) if(primes[i]) prime.pb(i); return prime; }
bool isPowerOfTwo(ll x){return x && (!(x & (x - 1)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);} return false; }
ll lowbit(ll x){ return x&(-x); }
ll makeMask(ll x, ll k){ll power=0, num=1,mask=0;	while(num<x){ num*=k; power++;}	while(power>=0){ if(num<=x){ x-=num; mask+= (1ll<<power); } power--; num/=k; }if(x!=0)	return -1; return mask; }
int calcinversions(vector<int>& s){int n=s.size(); vector<int>suff(n); suff[n-1]=s[n-1]; for(int i=n-2; i>=0; i--){ suff[i]=suff[i+1]+ (s[i]); } int res=0; rep(i,0,n-1){ if(s[i]==1) res+= (n-suff[i]-i); } return res; }
 
bool cmp(pair<ll,ll> &a, pair<ll,ll> &b){
    return (a.second-a.first) > (b.second-b.first);
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>>  
// vector<int> longestprefixsuffix(string &s){int n= s.size();	vector<int> lps(n,0);	int len=0;	int i=1;while(i<n){	if(s[i]==s[len]){lps[i]= len+1;	len++;	i++;}else{	if(len==0){	lps[i]=0;	i++;}	else{len= lps[len-1];}	}	}return lps;}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------>>
 
const int mx= 1e18;
 
int check(vector<int>&v, int n, int x){
 
	int sum=0;
	rep(i,0,n-1){
		int tp= sum+v[i];
		if(sum>=x && tp<x){
			sum=x;
		}else if(sum>=x && tp>=sum){
			sum= tp;
		}else{
			sum= tp;
		}		
	}
	return sum;
}
 
void solve(int test)		
{
	debug(test)
	int n;	cin>>n;
	vector<int> v(n);
	rep(i,0,n-1)	cin>>v[i];
 
	int l= 0, r= 1e18;
 
	vector<int> pref(n,0);
	pref[0]=v[0];
	rep(i,1,n-1){
		pref[i]= pref[i-1]+v[i];
	}
	debug(pref)
	int mxx= *max_element(all(pref));
	r= mxx;
 
	int mid;
	int ans=0;
	int prevsum= check(v,n,0);
 
	while(l<=r){
		mid= (l+r)/2;
 
		int gf=check(v, n, mid);
		debug(mid)
		debug(gf)
		if(gf>=prevsum){
			// debug(gf)
			l= mid+1;
			ans=max(ans,mid);
			prevsum= gf;
		}else{
			r=mid-1;
		}
	}
 
	cout<<ans<<nline;
}	
 
int32_t main() {
	#ifndef ONLINE_JUDGE
	    freopen("Error.txt", "w", stderr);
	#endif
 
	fastio();
	auto start1 = high_resolution_clock::now();
 
	int t=1;
	cin>>t;
	// vector<ll> prime= seive((ll)(1e6)+10);
	for(int i=1; i<=t; i++){
	solve(i);
	}
 
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
 
	#ifndef ONLINE_JUDGE
	    cerr <<endl<< "Time: " << duration . count() / 1000 << endl;
	#endif
} 
