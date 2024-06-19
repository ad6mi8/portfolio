

#include<bits/stdc++.h>

using namespace std;

//------------------------DEFINED--------------------------//

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vii;
typedef vector<ll> vll;

typedef vector<bool> vbb;
typedef vector<string> vss;

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<string,int> psi;
typedef pair<string,int> psl;

typedef map<int,int> mpii;
typedef map<ll,ll> mpll;
typedef map<string,int> mpsi;
typedef map<string,ll> mpsl;


const int N = 1e6+10;
const int NW = 1e9;
const int MOD = 1000000007;
const int Mod = 998244353;
const int inf = 1234567890;
const ll INF = 1122334455667788990;

//----------------------------DEFINED------------------------------//

#define FASTio                     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sp                         " "
#define nl                         <<'\n'
#define yes                        cout<<"YES" nl
#define no                         cout<<"NO" nl
#define all(a)                     a.begin(),a.end()
#define rall(a)                    a.rbegin(),a.rend()
#define rev(a)                     reverse(all(a))
#define cnt(x,a)                   count(all(x),a)
#define srt(a)                     sort(all(a))
#define dsrt(a)                    sort(all(a),greater<ll>())
#define ABS(x)                     ((x)<0?-(x):(x))
#define min3(a,b,c)                min(a,min(b,c))
#define min4(a,b,c,d)              min(a,min(b,min(c,d)))
#define max3(a,b,c)                max(a,max(b,c))
#define max4(a,b,c,d)              max(a,max(b,max(c,d)))
#define pb                         push_back
#define mpr                        make_pair
#define F                          first
#define S                          second
#define B                          begin()
#define E                          end()
#define ub                         upper_bound
#define lb                         lower_bound
#define MAX(x)                     *max_element(all(x))
#define MIN(x)                     *min_element(all(x))
#define SUM(a)                     accumulate(all(a),0LL)
#define input                      freopen("input.txt","r",stdin)
#define output                     freopen("output.txt","w",stdout)
#define FOR0                       for(ll i=0; i<n; i++)
#define FOR1                       for(ll i=1; i<=n; i++)
#define FORin                      for(ll i=0; i<n; i++) cin>>a[i];
#define a2z                        "abcdefghijklmnopqrstuvwxyz"
#define pcnt(x)                    __builtin_popcountll(x)
//-----------------------USER DEFINED FUNC--------------------------------//

//Prime check
bool isPrime(int n)
{
    if (n<2) return false;
    if (n<=3) return true;
    if (!(n%2) || !(n%3)) return false;
    for (int i=5; i*i<=n; i+=6)
        if (!(n%i) || !(n%(i+2))) return false;
    return true;
}
//Greatest common divisor — GCD
ll gcd(ll a, ll b)
{
    if (b==0) return a;
    else return gcd(b, a%b);
}
//Least common multiple — LCM
ll lcm(ll a, ll b)
{
    return (a/gcd(a,b))*b;
}

//--------------------------------------------------------------------//
char ascii(int a)
{
    if(a==0) return '.';
    else return a-1+'A';
}
//---------------------------------------------------------------------------//

void solve()
{
    ll n,m;
    cin>>n>>m;
    
    cout<<n*(m/2) nl;

}
/*
sd HAID KJDSJDSHAJKH H JFDSHKJFJK DSHFAKJHDSFKJ DFHA JHDFJSHJKHDFK JHJSDFHJKJ DSAFJSHDFKJH  JKHDFJKHJKHADSFHKJ SDFHKJKJFADJKH AJKDFHSJKHSDFH DJSFHJKASDFH JHDFS
 SDFJKHFJKH HAFD AJDSH JKDHSF
 F FJKHFHJA DSJKAJSDF JKDSF KJFHSKJHFJKHKJ DFS
  KJFDSHJKAFH HJKASD FKHJJKFDSHJF
  AFKHDFHAFJAHKJFH ASJDH FKJHASJDFKHASHF JKHAFD HF DHFKJFD HASFD
  FAKJHF AFDHSJHJKJKHAKJFJKAHFJKHSJDFKJSDF
  \FDSA HJKSDFH JKAHJK KJADSKJHJKASHFD KJHAFD
  \A FIJHKFHJKFJHKHFJKHAKJDF JKFHJKFJKH KJASFDH4\
  AHFSDHKJAFDSHKJF ASHDFHKJASFJKHAFJKHDFAJHSDFHJHFJKHSFJFKJHAHFDSHCNDSHJKHFDJFJK HJKFD
  KJDFHSHFDJKHAKJ AFDHSKJHFDHJKAFDKJ DSFHKJHKJFDJK
  HFDHJKAKJHKJASDKJ AKJDFH SKJAFDJHKJHFDHKJAHFDS
   JASDFKL FKDJ KFSKJSDFKLJFDSH JKHAFDKJH KJ
   AI JSDFKLJKSLDFJKLDF]
   SDFFDK ALJFDDFLKJFDKJKLFJKJ
   JLKDFSJLKDSFJ
   DFSHKJFKJLFD
   FJKLJFKJFD
   AKSDHJFKJD
   KJDASI OFKJKDSAJKLJDFKLJDSF JKLD
   ASDFOJ JDFLKJD
   SDJ JLDISFLKAJSDKLFJKL
   SDFOIJ JSDLFKJDSF
   DFSHKJAHFDKJ
   ADFJDSFLKJDSF KL
   ADSF LKJFDKLDS
   \F SDJFLKSDJF4DSF]
   
   \SDFDFS OJSDF JA
   DFS]ASDFJKJDFJ ODFSJ\
   DFAJKLDSJFLKJSDF
   \ASDJ KKLASDF
   ASDFJ KJSDF KLSD
   \SDLFKJSDFKJLK;DFS
   \S*/

///////////////////////////*****PEACE BE WITH YOU*****////////////////////////////

int main()
{
    FASTio


//without testcase:
	//solve();

//With testcase:
    ll t;
    cin>>t;

    while(t--)
        solve();

    return 0;
}
// ============================================================================ //
// ||                                                                        || //
// ||                   ***NEVER GIVE UP ON YOUR DREAMS***                   || //
// ||                   "Say ALHAMDULILLAH for everything"                   || //
// ||                      ^_^<<<<Happy CODING>>>>^_^                        || //
// ||                                                                        || //
// ============================================================================ //
