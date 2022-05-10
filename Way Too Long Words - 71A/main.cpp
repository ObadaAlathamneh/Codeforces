/*--------------------------------------- (Info.) ---------------------------------------*/

/// By     : Obada Alathamneh
/// GitHub : https://github.com/ObadaAlathamneh/
/// Name   : Way Too Long Words
/// ID     : 71A
/// Link   : https://codeforces.com/problemset/problem/71/A

/*--------------------------------------- (Info.) ---------------------------------------*/

/*--------------------------------------- (Requirements) ---------------------------------------*/

/// Time limit per test   : 1 second
/// Memory limit per test : 256 megabytes
/// Input                 : Standard input
/// Output                : Standard output

/*--------------------------------------- (Requirements) ---------------------------------------*/

/*--------------------------------------- (Description) ---------------------------------------*/

/// des.   : Sometimes some words like "localization" or "internationalization" are so long that writing them many times in one text is
/// des.   : quite tiresome.
/// des.   : Let's consider a word too long, if its length is strictly more than 10 characters. All too long words should be replaced with a special
/// des.   : abbreviation.
/// des.   : This abbreviation is made like this: we write down the first and the last letter of a word and between them we write the number of letters
/// des.   : between the first and the last letters. That number is in decimal system and doesn't contain any leading zeroes.
/// des.   : Thus, "localization" will be spelt as "l10n", and "internationalization» will be spelt as "i18n".
/// des.   : You are suggested to automatize the process of changing the words with abbreviations. At that all too long words should be replaced by the
/// des.   : abbreviation and the words that are not too long should not undergo any changes.

/*--------------------------------------- (Description) ---------------------------------------*/

/*--------------------------------------- (Input and Output) ---------------------------------------*/

/// Input  : The first line contains an integer n (1 ≤ n ≤ 100). Each of the following n lines contains one word. All the words consist of lowercase Latin
/// Input  : letters and possess the lengths of from 1 to 100 characters.
/// Output : Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

/*--------------------------------------- (Input and Output) ---------------------------------------*/

/*--------------------------------------- (Note) ---------------------------------------*/

/// Note   :

/*--------------------------------------- (Note) ---------------------------------------*/

/*--------------------------------------- (Solution) ---------------------------------------*/

/// Sol.   : We need to print the first and last letter of the word and the number of letters between

/*--------------------------------------- (Solution) ---------------------------------------*/


/*--------------------------------------- (Source Code) ---------------------------------------*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    /// The number of word
    int n;
    cin>>n;
    ///
    while(n>0)
    {
        /// Declare String variable to enter each word
        string str;
        cin>>str;
        /// If the String length is 10 or shorter print the same word
        if(str.length() <= 10)
        {
            cout<<str;
        }
        else
        {
            /// str[0]                 print the first letter in the string
            /// str.length()- 2        print the length - 2 ( - 2 ) we removed the first and last letter
            /// str[str.length()-1]    print the letter before the last (length - 1) because the last letter is (\0).
            cout<<str[0]<<str.length()-2<<str[str.length()-1];
        }
        cout<<endl;
        /// Decreased the number of remaining words is by one
        --n;
   }
    return 0;
}

/*--------------------------------------- (Source Code) ---------------------------------------*/

/*--------------------------------------- (End) ---------------------------------------*/
/// Begin each day with the hope of ending it with the bests of your steps. Plan the day ahead and ensure that the plans are worthy of ensuring your dreams are achieved. Get started.
/// Go ahead and follow your dream
/// Best Wishes
/*--------------------------------------- (End) ---------------------------------------*/
