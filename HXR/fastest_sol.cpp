#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#include <cstring>
#include <iostream>
#define pie acos(-1)
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b)
#define siii(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define sl(a) scanf("%lld",&a)
#define sll(a,b) scanf("%lld %lld",&a,&b)
#define slll(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define ss(st) scanf("%s",st)
#define sch(ch) scanf("%ch",&ch)
#define ps(a) printf("%s",a)
#define newLine() printf("\n")
#define pi(a) printf("%d",a)
#define pii(a,b) printf("%d %d",a,b)
#define piii(a,b,c) printf("%d %d %d",a,b,c)
#define pl(a) printf("%lld",a)
#define pll(a,b) printf("%lld %lld",a,b)
#define plll(a,b,c) printf("%lld %lld %lld",a,b,c)
#define pd(a) printf("%lf",a)
#define pdd(a,b) printf("%lf %lf",a,b)
#define pddd(a,b,c) printf("%lf %lf %lf",a,b,c)
#define pch(c) printf("%ch",c)
#define debug1(str,a) printf("%s=%d\n",str,a)
#define debug2(str1,str2,a,b) printf("%s=%d %s=%d\n",str1,a,str2,b)
#define debug3(str1,str2,str3,a,b,c) printf("%s=%d %s=%d %s=%d\n",str1,a,str2,b,str3,c)
#define debug4(str1,str2,str3,str4,a,b,c,d) printf("%s=%d %s=%d %s=%d %s=%d\n",str1,a,str2,b,str3,c,str4,d)
#define for0(i,n) for(i=0;i<n;i++)
#define for1(i,n) for(i=1;i<=n;i++)
#define forab(i,a,b) for(i=a;i<=b;i++)
#define forstl(i, s) for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)
#define nl puts("")
#define sd(a) scanf("%lf",&a)
#define sdd(a,b) scanf("%lf %lf",&a,&b)
#define sddd(a,b,c) scanf("%lf %lf %lf",&a,&b,&c)
#define sp printf(" ")
#define ll long long int
#define ull unsigned long long int
#define MOD 1000000007
#define mpr make_pair
#define pub(x) push_back(x)
#define pob(x) pop_back(x)
#define mem(ara,value) memset(ara,value,sizeof(ara))
#define INF INT_MAX
#define eps 1e-9
#define checkbit(n, pos) (n & (1<<pos))
#define setbit(n, pos) (n  (1<<pos))
#define para(i,a,b,ara)\
for(i=a;i<=b;i++){\
    if(i!=0){printf(" ");}\
    cout<<ara[i];\
}\
printf("\n");
#define pvec(i,vec)\
for(i=0;i<vec.size();i++){\
    if(i!=0){printf(" ");}\
    cout<<vec[i];\
}\
printf("\n");
#define ppara(i,j,n,m,ara)\
for(i=0;i<n;i++){\
    for(j=0;j<m;j++){\
        if(j!=0){printf(" ");}\
        cout<<ara[i][j];\
    }\
    printf("\n");\
}
#define ppstructara(i,j,n,m,ara)\
for(i=0;i<n;i++){\
    printf("%d:\n",i);\
    for(j=0;j<m;j++){\
        cout<<ara[i][j];printf("\n");\
    }\
}
#define ppvec(i,j,n,vec)\
for(i=0;i<n;i++){\
    printf("%d:",i);\
    for(j=0;j<vec[i].size();j++){\
        if(j!=0){printf(" ");}\
        cout<<vec[i][j];\
    }\
    printf("\n");\
}
#define ppstructvec(i,j,n,vec)\
for(i=0;i<n;i++){\
    printf("%d:",i);\
    for(j=0;j<vec[i].size();j++){\
        cout<<vec[i][j];printf("\n");\
    }\
}
#define sara(i,a,b,ara)\
for(i=a;i<=b;i++){\
    scanf("%d",&ara[i]);\
}
#define pstructara(i,a,b,ara)\
for(i=a;i<=b;i++){\
    cout<<ara[i];nl;\
}
#define pstructvec(i,vec)\
for(i=0;i<vec.size();i++){\
    cout<<vec[i];nl;\
}
#define pstructstl(stl,x)\
for(__typeof(stl.begin()) it=stl.begin();it!=stl.end();++it){\
    x=*it;\
    cout<<x;nl;\
}\
nl;
#define pstl(stl)\
for(__typeof(stl.begin()) it=stl.begin();it!=stl.end();++it){\
    if(it!=stl.begin()){sp;}\
    pi(*it);\
}\
nl;
#define ppairvec(i,vec)\
for(i=0;i<vec.size();i++){\
    cout<<vec[i].first;sp;cout<<vec[i].second;printf("\n");\
}
#define ppairara(i,a,b,ara)\
for(i=a;i<=b;i++){\
    cout<<ara[i].first;sp;cout<<ara[i].second;printf("\n");\
}
#define pppairvec(i,j,n,vec)\
for(i=0;i<n;i++){\
    printf("%d:\n",i);\
    for(j=0;j<vec[i].size();j++){\
        cout<<vec[i][j].first;sp;cout<<vec[i][j].second;nl;\
    }\
}
#define pppairara(i,j,n,m,ara)\
for(i=0;i<n;i++){\
    printf("%d:\n",i);\
    for(j=0;j<m;j++){\
        cout<<ara[i][j].first;printf(" ");cout<<ara[i][j].second;nl;\
    }\
}
#define SZ 2 * 100010
#define xx first
#define yy second
using namespace std;
//using namespace __gnu_pbds;
//bool status[100010];
//vector <int> prime;
//void siv(){
//    int N = 100005, i, j; prime.clear();
//    int sq = sqrt(N);
//    for(i = 4; i <= N; i += 2){ status[i] = true; }
//    for(i = 3; i <= sq; i+= 2){
//        if(status[i] == false){
//            for(j = i * i; j <= N; j += i){ status[j] = true; }
//        }
//    }
//    status[1] = true;
//    for1(i, N){ if(!status[i]){ prime.pub(i); } }
//}
//mt19937_64 mt(chrono::steady_clock::now().time_since_epoch().count());
//auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
//std::mt19937 mt(seed);
inline int add(int _a, int _b){
    if(_a < 0){ _a += MOD; }
    if(_b < 0){ _b += MOD; }
    if(_a + _b >= MOD){ return _a + _b - MOD; }
    return _a + _b;
}
inline int mul(int _a, int _b){
    if(_a < 0){ _a += MOD; }
    if(_b < 0){ _b += MOD; }
    return ((ll)((ll)_a * (ll)_b)) % MOD;
}
const int N = 500; 
int n, k, l[N + 5], r[N + 5]; 
ll ara[N + 5], sol[N + 5]; 
ll row[N + 2][N / 64 + 5], col[N + 2][N / 64 + 5]; 
ll mat_row[N + 2][N / 64 + 5], mat_col[N + 2][N / 64 + 5]; 
void mat_mul(ll a_row[][N / 64 + 5], ll a_col[][N / 64 + 5], ll b_row[][N / 64 + 5], ll b_col[][N / 64 + 5]){
	int i, j, p; 
	ll c_row[N + 2][N / 64 + 5], c_col[N + 2][N / 64 + 5]; 
    mem(c_row, 0), mem(c_col, 0); 
	for0(i, n){
        for0(j, n){
            int x = 0;
            for0(p, n / 64 + 1){
                x ^= __builtin_popcountll(a_row[i][p] & b_col[j][p]) & 1; 
            }
            if(x) c_row[i][j / 64] |= 1ll << (j - (j / 64) * 64); 
            if(x) c_col[j][i / 64] |= 1ll << (i - (i / 64) * 64); 
        }
    }
	for0(i, n) for0(j, n / 64 + 1) a_row[i][j] = c_row[i][j], a_col[i][j] = c_col[i][j]; 
}
void expo(int p){
	int i, j;
    for0(i, n){
        mat_row[i][i / 64] |= 1ll << (i - (i / 64) * 64);
        mat_col[i][i / 64] |= 1ll << (i - (i / 64) * 64);
    }
	while(p){
		if(p & 1) mat_mul(mat_row, mat_col, row, col);
		mat_mul(row, col, row, col), p >>= 1; 
	}
}
void solve(){
	int i, j, p; 
    mem(sol, 0), mem(row, 0), mem(col, 0), mem(mat_row, 0), mem(mat_col, 0); 
	for0(i, n) for(j = l[i]; j <= r[i]; ++j){
        row[i][j / 64] |= 1ll << (j - (j / 64) * 64);  
        col[j][i / 64] |= 1ll << (i - (i / 64) * 64); 
    }
	expo(k - 1);
	ll bit[N / 64 + 5];
	for0(i, 60){
        mem(bit, 0); 
		for0(j, n){
			if(ara[j] & 1ll << i) bit[j / 64] |= 1ll << (j - (j / 64) * 64); 
		}
		for0(j, n){
            int x = 0; 
            for0(p, n / 64 + 1){
                x ^= __builtin_popcountll(mat_row[j][p] & bit[p]) & 1; 
            }
            if(x) sol[j] |= 1ll << i; 
		}
	}
	for0(i, n){
		if(i) sp; 
		pl(sol[i]); 
	} nl; 
}
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("0.in", "r", stdin); 
    // freopen("0.out", "w", stdout); 

    // freopen("1.in", "r", stdin); 
    // freopen("1.out", "w", stdout); 

    // freopen("2.in", "r", stdin); 
    // freopen("2.out", "w", stdout); 
    // freopen("output.txt", "w", stdout);
    int cs, ts;
    si(ts); 
    for0(cs, ts){
        int i, j; 
        sii(n, k); 
        assert(n >= 1 && n <= 500 && k >= 1 && k <= 50000000); 
        for0(i, n){
        	sl(ara[i]); 
        	assert(ara[i] >= 1ll && ara[i] <= 1000000000000000000ll); 
        }
        for0(i, n){
        	sii(l[i], r[i]);
        	assert(l[i] >= 1 && l[i] <= n && r[i] >= 1 && r[i] <= n); 
        	--l[i], --r[i]; 
        }
        solve();
    }
}
