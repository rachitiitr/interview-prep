#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i<n; i++)
#define Fo(i, k, n) for(i=k; i<n; i++)
#define max(...) ({ \
	int nos[] = { __VA_ARGS__ }; \
	int n = sizeof(nos)/sizeof(int); \
    *std::max_element(&nos[0], &nos[n]); \
})

template<typename... T>
void write(T... args) {
	((cout << args << " "), ...);
}

template<typename... T>
void read(T&... args) {
	((cin >> args), ...);
}


int main() {
	
	int x = 3, y = 8, i;

	read(x, y);
	deb(x);
	deb(y);

	write(1, 2, 3, 5, -1, "wow");
	cout << endl;

	Fo(i, 10, 20) 
		cout << i << " "; 
	cout << endl;

	cout << max(-1, 232, 12, 343, 33) << endl;
	
	return 0;
}
