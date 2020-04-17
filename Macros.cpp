/*
        Author  : Malisetti Samrat
*/

//Optimisation Flags
#pragma GCC optimize ("O3")
#pragma GCC optimize("Ofast","unroll-loops","omit-frame-pointer","inline")
#pragma GCC optimize("Ofast")

#include   <bits/stdc++.h>
#include   <ext/pb_ds/assoc_container.hpp>
#include   <ext/pb_ds/tree_policy.hpp>
#include   <algorithm>
#include   <queue>
#include   <list>
#include   <map>
#include   <math.h>
#include   <numeric>
using      namespace        std;
#define    endl             '\n'
#define    FAST             ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define    ipfile           ifstream cin ("input.txt");std::cin.rdbuf(std::cin.rdbuf())
#define    pb(x)            push_back(x)
#define    int              long long int
#define    ull              unsigned long long int
#define    db               long double
#define    vll              vector<int>
#define    all(v)           v.begin(),v.end()
#define    GCD(m,n)         __gcd(m,n)
#define    LCM(m,n)         m*(n/GCD(m,n))
#define    REVVEC(v)        reverse(v.begin(),v.end())
#define    REVARR(a)        reverse(a,a+n)
#define    maxc(v)          max_element(all(v))
#define    minc(v)          min_element(all(v))
#define    inputarr(a,n)    for(int xxx=0;xxx<n;++xxx) cin>>a[xxx]
#define    outputarr(a,n)   for(int xxx=0;xxx<n;xxx++) cout<<a[xxx]<<" "
#define    rep(i,m, n)      for(int i = m; i < (n); ++i)
#define    sp               setprecison(10)
#define    sz(a)            (int)a.size()
#define    erase(vec,val)   vec.erase(std::remove(vec.begin(), vec.end(), val), vec.end()); //deleting specific value element in vector
#define    PI               (db)3.141592653589793238462643383279502884197169399375105820974944
#define    inf              (int)1000000000
#define    mod              (int)1000000007
#define    mem(a,b)          memset(a,b,sizeof(a));
#define    w(x)              int T;cin>>T;while(T -- > 0)
#define    ff                first
#define    ss                second
#define    pqueue            priority_queue< int >
#define    pdqueue           priority_queue< int,vll ,greater< int > >

//mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

clock_t time_p = clock();

void time()
{
  time_p = clock() - time_p;
  cerr << "Time elapsed : " << (double)(time_p)/CLOCKS_PER_SEC <<endl;
}

void solveTC(){



}

int32_t main()
{

    // ONLINE JUDGES
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w",stdout);
    #endif

	FAST

	w(x){

        solveTC();

	}

	time();
	return 0;
}

