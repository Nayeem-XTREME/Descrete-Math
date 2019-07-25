#include <bits/stdc++.h>
using namespace std;

bool AND (bool a, bool b)
{
	if (a == true && b == true)
		return true;
	else
		return false;
}

bool OR (bool a, bool b)
{
	if (a == true || b == true)
		return true;
	else
		return false;
}

bool XOR (bool a, bool b)
{
	if ((a == true || b == true) && a != b)
		return true;
	else
		return false;
}

bool then (bool a, bool b)
{
	if (a == false)
		return true;
	else if (a == true && b == true)
		return true;
	else if (a == true && b == false)
		return false;
}

bool bicon (bool a, bool b)
{
	if (a == b)
		return true;
	else
		return false;
}

bool no (bool a)
{
	if (a == true)
		return false;
	else
		return true;
}

int main()
{
	char c[100], d[100], ch[100], res;
	int l, n, i, j, k;
	
	printf("Enter the proposition (only using p, q and r) :\n");
	gets(c);
	cout << endl;
	l = strlen(c);
	for (i = 0, j = 0; i < l; i++) {
		if (c[i] != ' ') {
			d[j] = c[i];
			j++;
		}
	}
	
	l = strlen(d);
	
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 1; j++) {
			for (k = 0; k <= 1; k++) {
				for (int a = 0; a < l; a++) {
					
					if (d[a] == 'p')
						ch[a] = i + '0';
					else if (d[a] == 'q')
						ch[a] = j + '0';
					else if (d[a] == 'r')
						ch[a] = k + '0';
					else
						ch[a] = d[a];
				}
				cout << ch << " = ";
				
				for (int a = 0; a < strlen(ch); a++) {
					if (ch[a] == 'v') {
						ch[a+1] = (OR ((ch[a-1] - '0'), ch[a+1] - '0')) + '0';
					}
					
					else if (ch[a] == '^') {
						ch[a+1] = (AND ((ch[a-1] - '0'), ch[a+1] - '0')) + '0';
					}
					
					else if (ch[a] == '+') {
						ch[a+1] = (XOR ((ch[a-1] - '0'), ch[a+1] - '0')) + '0';
					}
					
					else if (ch[a] == '>') {
						ch[a+1] = (then ((ch[a-1] - '0'), ch[a+1] - '0')) + '0';
					}
					
					else if (ch[a] == '-') {
						ch[a+1] = (bicon ((ch[a-1] - '0'), ch[a+1] - '0')) + '0';
					}
					
					else if (ch[a] == '!') {
						ch[a+1] = (no (ch[a+1] - '0')) + '0';
					}
					
					res = ch[a];
					
				}
				cout << res << " " << endl; 
			}
		}
	}
	
	return 0;
}
