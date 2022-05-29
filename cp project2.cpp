#include<iostream>
#include<string>
#include<cmath>



using namespace std;

int main()
{
    char line[150];
    int vowels, consonants, digits, spaces,even,odd,symbols;

    vowels =  consonants = digits = spaces = even =odd=symbols=0;

    cout << "Enter a line of string: ";
    cin.getline(line, 150);
    for(int i = 0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++consonants;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++digits;
            
         if (line[i] % 2==0 )
         	++even;
		 else 
		    ++odd;
        }
        else if (line[i]==' ')
        {
            ++spaces;
        }
        else
        ++symbols;
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "White spaces: " << spaces << endl;
    cout << "Even No: " << even << endl;
    cout << "Odd No: " << odd << endl;
	cout << "Symbols: " << symbols << endl;  
    return 0;
}
