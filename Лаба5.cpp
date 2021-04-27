#include <iostream>


using namespace std;

string coder(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        char letter = text[i];

        if ((letter >= 'a' && letter <= 'm') || (letter >= 'A' && letter <= 'M'))
        {
            text[i] += 1;
        }
        else if ((letter >= 'n' && letter <= 'z') || (letter >= 'N' && letter <= 'Z'))
        {
            text[i] -= 1;
        }
    }

    return text;
}

int main()
{
    string text = "Hello, world!";

    text = coder(text);
    cout << "Encoded text: " << text << endl;



    return 0;
}