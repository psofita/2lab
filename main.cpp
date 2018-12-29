#include <iostream>
#include <stack>
#include <cstdio>

using namespace std;

int main()
{
	char t;
	stack <char> open;
	scanf("%c", &t);
	do
	{
		if(t == ' '){
			scanf("%c", &t);
			continue;	
		}
		if(t == '(' || t == '[' || t == '{')
			open.push(t);
		else
		{	
			if(!open.empty() && ((int)t - (int)open.top() == 1 || (int)t - (int)open.top() == 2)){
				open.pop();
				scanf("%c", &t);
				continue;
			}
			else {
				cout << "no" << endl;
				return 0;
			}
		}
		scanf("%c", &t);
	} while(t != EOF && t != '\n' && t != 0);
	if (open.empty())
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	system("pause");
	return 0;

}