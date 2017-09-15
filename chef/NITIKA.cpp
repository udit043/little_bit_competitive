// A simple C++ program to show working of getline
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string str;
    char c;
    int t,i,space;
    cin >> t;
    cin.ignore();
    while (t--)
    {
    	i=space=0;
        getline(cin, str);
        //cout << "original: " << str << "\n"; 
        c = str[0];
        str[0] = toupper(c);

        for(i=1; i<str.length(); ++i)
        {
        	c = str[i];
        	if(str[i] != ' ')
        		str[i] = tolower(c);
        	else
        	{
        		space += 1;
        		str[i+1] = toupper(str[i+1]);
        		++i;
        	}
        }

        //cout << str << "\n\n";
    
        if(space == 0)
        {
        	cout << str << "\n";
        }
        else if(space == 1)
        {
        	int cn = 0;
        	cout << str[0] << ". ";
        	for(i=1; i<str.length(); ++i)
        	{
        		if(str[i] == ' ')
        		{
        			cn = 1;
        			++i;
        		}
        		if(cn == 1)
        			cout << str[i];
        	}
        	cout << "\n";
        }
        else
        {
        	int cn = 0;
        	cout << str[0] << ". ";
        	for(i=1; i<str.length(); ++i)
        	{
        		if((str[i] == ' ') && (cn == 0))
        		{
        			++i;
        			cout << str[i] << ". ";
        			cn = 1;
        		}
        		else if((str[i] == ' ') && (cn == 1))
        		{
        			++i;
        			break;
        		}
        	}
        	for(; i<str.length(); ++i)
        		cout << str[i];
        	cout << "\n";
        }
    }
    return 0;
}

/*
3
gandhi
mahatma gandhI
Mohndas KaramChand gandhi

*/