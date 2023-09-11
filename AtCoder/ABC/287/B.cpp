#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define T int 
typedef pair<T, T> pii;
typedef tuple<T, T, T> tii;

#define fr first
#define sc second
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define eb emplace_back

#define lowbit(x)    ((x) & -(x))
#define all(x)       (x).begin(), (x).end()
#define rep(i, x, y) for (int i = (x); i <= (y); ++i)
#define per(i, x, y) for (int i = (x); i >= (y); --i)

inline T rd() {
    T x = 0;
    bool f = 0;
    char c = getchar();
    for (; !isdigit(c); c = getchar()) f |= (c == '-');
    for (; isdigit(c); c = getchar()) x = x * 10 + (c ^ 48);
    return f ? -x : x;
}

string str;

vector<string> s, t;

int main() {
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> str; s.pb(str);
    }
    for (int i = 1; i <= m; ++i) {
        cin >> str; t.pb(str);
    }
    int ans = 0;
    for (auto x : s) {
        for (auto y : t) {
            if (x[3] == y[0] && x[4] == y[1] && x[5] == y[2]) {++ans; break;}    
        }
    }
    printf("%d\n", ans);
    return 0;
}