#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;
int main()
{
	list <int> setA, setB, TempA1, TempB1, TempA2, TempB2;
	list <int> ::iterator it, it1;
	vector <int> Union, Intersection;
	int n1, n2, n, i, j, k;
	
	printf("Enter the no. of elements of Set A : ");
	cin >> n1;
	printf("Enter the elements of Set A : ");
	for (i = 0; i < n1; i++) {
		cin >> n;
		setA.push_back(n);
	}
	
	printf("Enter the no. of elements of Set B : ");
	cin >> n2;
	printf("Enter the elements of Set B : ");
	for (i = 0; i < n2; i++) {
		cin >> n;
		setB.push_back(n);
	}
	
	for (it = setA.begin(); it != setA.end(); it++) {
		TempA1.push_back(*it);
	}
	for (it = setB.begin(); it != setB.end(); it++) {
		TempB1.push_back(*it);
	}
	
	for (it = TempA1.begin(); it != TempA1.end(); it++) {
		Union.push_back(*it);
	}
		
	for (it = TempB1.begin(); it != TempB1.end(); it++) {
		bool flag = 0;
		for (it1 = TempA1.begin(); it1 != TempA1.end(); it1++) {
			if (*it == *it1) {
				TempA1.remove(*it1);
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			Union.push_back(*it);
		}
	}

	
	std :: sort (Union.begin(), Union.end());
	printf("Elements of Union\n");
	for (i = 0; i < Union.size(); i++) {
		cout << Union[i] << endl;
	}
	
	for (it = setA.begin(); it != setA.end(); it++) {
		TempA2.push_back(*it);
	}
	for (it = setB.begin(); it != setB.end(); it++) {
		TempB2.push_back(*it);
	}
		
	for (it = TempB2.begin(); it != TempB2.end(); it++) {
		bool flag = 0;
		for (it1 = TempA2.begin(); it1 != TempA2.end(); it1++) {
			if (*it == *it1) {
				TempA2.remove(*it1);
				Intersection.push_back(*it);
				flag = 1;
				break;
			}
		}
	}
	
	std :: sort (Intersection.begin(), Intersection.end());
	printf("Elements of Intersection\n");
	for (i = 0; i < Intersection.size(); i++) {
		cout << Intersection[i] << endl;
	}

	return 0;
}
