#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

#define debug(x) do { cout << #x << ": "; print(x); cout << '\n'; } while (0)
#define debug_size(x) cout << #x << ".size(): " << x.size() << '\n';

template <class T> void print(stack<T> s);
template <class T> void print(queue<T> q);
template <class T> void print(const deque<T> &dq);
template <class T> void print(const vector<T> &arr);
template <class T> void print(const multiset<T> &mst);
template <class K, class V> void print(const map<K, V> &m);
template <class T1, class T2> void print(const pair<T1, T2> &p);
template <class T, class Compare = less<T>> void print(const set<T, Compare> &st);
template <class T, class Container, class Compare> void print(priority_queue<T, Container, Compare> pq);

void print(const string &n) { cout << n; }
void print(const int &n) { cout << n; }
void print(const ll &n) { cout << n; }
void print(const ull &n) { cout << n; }
void print(const ld &n) { cout << n; }
void print(const bool &n) { cout << (n ? 1 : 0); }
void print(const char &n) { cout << n; }

template <class T1, class T2> void print(const pair<T1, T2> &p) { cout << "("; print(p.first); cout << ", "; print(p.second); cout << ")"; }
template <class T> void print(const vector<T> &arr) { cout << "[ "; for (const T &i : arr) { print(i); cout << " "; } cout << "]"; }
template <class T> void print(const vector<vector<T>> &arr) { cout << "[\n"; for (const auto &row : arr) { cout << "  "; print(row); cout << '\n'; } cout << "]"; }
template <class T> void print(const set<T> &st) { cout << "{ "; for (const T &i : st) { print(i); cout << " "; } cout << "}"; }
template <class T> void print(const multiset<T> &mst) { cout << "{ "; for (const T &i : mst) { print(i); cout << " "; } cout << "}"; }
template <class T> void print(stack<T> s) { vector<T> temp; while (!s.empty()) { temp.push_back(s.top()); s.pop(); } reverse(temp.begin(), temp.end()); print(temp); }
template <class T> void print(queue<T> q) { cout << "[ "; while (!q.empty()) { print(q.front()); cout << " "; q.pop(); } cout << "]"; }
template <class T> void print(const deque<T> &dq) { cout << "[ "; for (const T &i : dq) { print(i); cout << " "; } cout << "]"; }
template <class T, class Container, class Compare> void print(priority_queue<T, Container, Compare> pq) { vector<T> temp; while (!pq.empty()) { temp.push_back(pq.top()); pq.pop(); } if (is_same<Compare, greater<T>>::value) reverse(temp.begin(), temp.end()); print(temp); }
template <class K, class V> void print(const map<K, V> &m) { cout << "{\n"; for (const auto &[key, value] : m) { cout << "  "; print(key); cout << ": "; print(value); cout << '\n'; } cout << "}"; }

void solve() {
    ll x, y;
    cin>>x>>y;
    ll sum = x+y;
    ll ans = 0;
    for(ll i=29; i>=0; i--){
        if((sum&(1<<i)) == 0) continue;
        if(ans + (1<<i) <= x){
            ans += (1<<i);
        }
    }
    cout<<sum<<" "<<x-ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}