// http://ideone.com/gamore
#include <bits/stdc++.h> //works like magic, but at cost.
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i<n; i++)
#define Fo(i, k, n) for(i=k; i<n; i++)

template<typename... T>
void read(T&... args) {
	((cin >> args), ...);
}

template<typename... T>
void write(T&&... args) { //rvalue reference is new to C++ 
	((cout << args << " "), ...);
}

int main() {
	// 1. C++ Productivity Tips
	// 2. To be used while Coding Interview Prep
	// 3. Solving Problems can take time
	// 4. Writing for loops, reading multiple variables is boring.
	// 5. Debugging Tools are not present in Coding Interviews.
	int x(100), y(200), z, zz;
	
	// cin >> x >> y >> z >> zz;
	read(x, y, z, zz);
	
	deb(x); //shortcut to duplicate a line
	deb(y); //shortcut to duplicate a line
	deb(z); //shortcut to duplicate a line
	deb(zz); //shortcut to duplicate a line
		
	write(x, y, z, zz, "This is awesome right?", 4.0);
	cout << endl;
	int i, n;
	cin >> n;
	vector<int> arr(n, 0);
	fo(i, n)
		cin >> arr[i];
	
	Fo(i, 1, n+1) //shortcut to move a line as well
		cout << arr[i-1] << " " ;
	cout << endl;
	
	return 0;
}
