#include <bits/stdc++.h>
using namespace std;

void isBalanced(char s[], int n) {
	stack<char> st;
	bool ans = true;

	for(int i = 0; i < n; i++) {

		//if the incoming element is an opening braket then push it to the stack
		if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
			st.push(s[i]);
		}

		//if it's a closing one
		else {

			//if stack is not empty
			if(!st.empty()) {
				char temp = st.top();
				st.pop();

				if(s[i] == ')' && temp != '(') {
					ans = false;
					break;
				}
				if(s[i] == '}' && temp != '{') {
					ans = false;
					break;
				}
				if(s[i] == ']' && temp != '[') {
					ans = false;
					break;
				}
			}
			//if stack is empty
			else {
				ans = false;
				break;
			}
		}
	}
	if(!st.empty())
		ans = false;

	if(ans)
		cout << "Balanced";
	else
		cout << "Not balanced";
}

int main() {
	int n;
	cout << "Enter the size of the string expression:\n";
	cin >> n;
	char s[n];

	for(int i = 0; i < n; i++) {
		cin >> s[i];
	}

	isBalanced(s, n);

	return 0;
}