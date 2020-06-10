#include <iostream>
using namespace std;


int main()
{
    char text[] = "Hello There this is a texttttttttttttt";

    int nChars = sizeof(text) - 1;

    char *pStart = text;
    char *pEnd = text + nChars - 1;

    while (pStart < pEnd)
    {
        char save = *pStart;
        *pStart = *pEnd;
        *pEnd = save;

        pStart++;
        pEnd--;
    }
    
    cout << text << endl;

    int len = sizeof(text)-2;

    for(int k=0; k<len; k++){
        char hold = text[len];
        text[len] = text[k];

        text[k] = hold;
        len--;
    }

    cout << text << endl;

    char text2[] = "Hamburger";

    int len2 = sizeof(text2)-2;

    for(int k=0; k<len2; k++){
        char hold = text2[len2];
        text2[len2] = text2[k];

        text2[k] = hold;
        len2--;
    }

    cout << text2 << endl;

        
}
