#include <iostream>
#include <string>
using namespace std;

int main() {
    char str[100];
    int i;
    int freq[256] = {0};
    
    cin >> str;
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
        cout<<freq[str[i]];
    }
    
    //Printing frequency of each character.
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
           cout<<"Frequency "<<char(i)<<" is "<<freq[i]<<endl;
        }
    }
    return 0;
}

