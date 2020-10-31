#include<iostream>
#include<string>

int main()
{
    string ay= "ay";
    string s;
    char first;
    std::cout << "please enter a string";

    	getline(cin,s);
    	first= s[0];
    	std::cout << s.substr(1)+first+ay;
}
