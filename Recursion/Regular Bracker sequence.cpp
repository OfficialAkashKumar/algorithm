/*
Given number of open and close brackets...
print all the regular bracket sequence obtained
by their combination
*/


#include <bits/stdc++.h>
using namespace std;
using namespace placeholders;
#define mem1(a) 		memset(a, -1, sizeof(a))
#define mem0(a)			memset(a, 0, sizeof(a))
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define fr first
#define sc second
#define ll long long
#define printst(st)		for(auto &i : st) cout << i << " "; cout << endl;
#define printvec(vec) for(auto elem : vec) cout << elem << " "; cout << endl;
#define printstack(st) while(!st.empty()) cout << st.top() << " ", st.pop(), cout <<endl;
#define MOD 1000000007

void solve(int open, int close, string op, vector<string> &v) {
	if (open == 0 && close == 0) {
		v.push_back(op);
		return;
	}
	if (open != 0) {
		string op1 = op;
		op1.push_back('(');
		solve(open - 1, close, op1, v);
	}
	if (close > open) {
		string op2 = op;
		op2.push_back(')');
		solve(open, close - 1, op2, v);
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	string op;
	vector<string> v;
	solve(n, n, op, v);
	printvec(v);

}
