#include <bits/stdc++.h>
#include <stack>
#include <string>
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



// Function to convert Infix expression to postfix 
string InfixToPostfix(string expression);

// Function to verify whether an operator has higher precedence over other
int HasHigherPrecedence(char operator1, char operator2);

// Function to verify whether a character is operator symbol or not. 
bool IsOperator(char C);

// Function to verify whether a character is alphanumeric chanaracter (letter or numeric digit) or not. 
bool IsOperand(char C);

string postfix(string A) 
{
	string postfix = InfixToPostfix(A);
	return postfix;
}


string InfixToPostfix(string expression)
{

	stack <char> S;
	string postfix = ""; 
	for(int i = 0; i< expression.length(); i++) {

		
		if(expression[i] == ' ' || expression[i] == ',')  
			continue; 

		
		else if(IsOperator(expression[i])) 
		{
			while(!S.empty() && S.top() != '(' && HasHigherPrecedence(S.top(),expression[i]))
			{
				postfix+= S.top(); // postfix = postfix + S.top()
				S.pop();
			}
			S.push(expression[i]);
		}
		
		
		else if(IsOperand(expression[i]))
		{
			postfix +=expression[i]; 
		}

		else if (expression[i] == '(') 
		{
			S.push(expression[i]);
		}

		else if(expression[i] == ')') 
		{
			while(!S.empty() && S.top() !=  '(') {
				postfix += S.top(); 
				S.pop();
			}
			S.pop();
		}
	}

	while(!S.empty()) {
		postfix += S.top();
		S.pop();
	}

	return postfix;
}


bool IsOperand(char C) 
{
	if(C >= '0' && C <= '9') return true;
	if(C >= 'a' && C <= 'z') return true;
	if(C >= 'A' && C <= 'Z') return true;
	else return false;
}


bool IsOperator(char C)
{
	if(C == 'v' || C == '^' || C == '-' || C == '>' || C== '!')
		return true;
	else
		return false;
}


int IsRightAssociative(char op)
{
	if(op == '$') return true;
	return false;
}


int GetOperatorWeight(char op)
{
	int weight = -1; 
	switch(op)
	{
	case '-':
		weight = 1;
	case '>':
		weight = 2;
	case 'v':
		weight = 3;
	case '^':
		weight = 4;
	case '!':
		weight = 5;
	}
	return weight;
}


int HasHigherPrecedence(char op1, char op2)
{
	int op1Weight = GetOperatorWeight(op1);
	int op2Weight = GetOperatorWeight(op2);
	if(op1Weight == op2Weight)
	{
		if(IsRightAssociative(op1))
			return false;
		else 
			return true;
	}
	return op1Weight > op2Weight ?  true: false;
}



int main()
{
	std::stack <char> mystack;
	std::list <char> mylist;
	std::list <char> :: iterator it;
	string A;
	char c[100], d[100], p[100];
	int l, n, i, j, k, a, alpha, bita, res;
	
	cin >> c;
	l = strlen(c);
	
	
	for (i = 0; i <= 1; i++) {
		for (j = 0; j <= 1; j++) {
			for (k = 0; k <= 1; k++) {
				
				for (a = 0; a < l; a++) {
					if (c[a] == 'p')
						d[a] = i + '0';
					else if (c[a] == 'q')
						d[a] = j + '0';
					else if (c[a] == 'r')
						d[a] = k + '0';
					else
						d[a] = c[a];
				}
				d[a] = '\0';
				
				A = d;
				
				cout << A;
				A = postfix(A);
				
				for (a = 0; a < l; a++) {
					if (A[a] >= '0' && A[a] <= '9')
						mystack.push(A[a]);
						
					else if (A[a] == 'v') {
						alpha = mystack.top();
						mystack.pop();
						bita = mystack.top();
						mystack.pop();
						res = (OR((alpha - '0'), (bita - '0'))) + '0';
						mystack.push(res);
					}
					else if (A[a] == '-') {
						alpha = mystack.top();
						mystack.pop();
						bita = mystack.top();
						mystack.pop();
						res = (bicon((alpha - '0'), (bita - '0'))) + '0';
						mystack.push(res);
					}
					else if (A[a] == '^') {
						alpha = mystack.top();
						mystack.pop();
						bita = mystack.top();
						mystack.pop();
						res = (AND((alpha - '0'), (bita - '0'))) + '0';
						mystack.push(res);
					}
					else if (A[a] == '>') {
						alpha = mystack.top();
						mystack.pop();
						bita = mystack.top();
						mystack.pop();
						res = (then((alpha - '0'), (bita - '0'))) + '0';
						mystack.push(res);
					}
					else if (A[a] == '!') {
						alpha = mystack.top();
						mystack.pop();
						res = (no((alpha - '0'))) + '0';
						mystack.push(res);
					}
					
				}
				cout << "\tResult = " << mystack.top() << endl;
					
			}
		}
	}
		
	return 0;
}
	
	

