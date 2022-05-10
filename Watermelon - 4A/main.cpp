/*--------------------------------------- (Info.) ---------------------------------------*/

/// By     : Obada Alathamneh
/// GitHub : https://github.com/ObadaAlathamneh/
/// Name   : Watermelon
/// ID     : 4A
/// Link   : https://codeforces.com/problemset/problem/4/A

/*--------------------------------------- (Info.) ---------------------------------------*/

/*--------------------------------------- (Requirements) ---------------------------------------*/

/// Time limit per test   : 1 second
/// Memory limit per test : 64 megabytes
/// Input                 : Standard input
/// Output                : Standard output

/*--------------------------------------- (Requirements) ---------------------------------------*/

/*--------------------------------------- (Description) ---------------------------------------*/

/// des.   : One hot summer day Pete and his friend Billy decided to buy a watermelon. They chose the biggest and the ripest one, in their opinion.
/// des.   : After that the watermelon was weighed, and the scales showed w kilos. They rushed home, dying of thirst, and decided to divide the berry,
/// des.   : however they faced a hard problem.
/// des.   : Pete and Billy are great fans of even numbers, that's why they want to divide the watermelon in such a way that each of the two parts
/// des.   : weighs even number of kilos, at the same time it is not obligatory that the parts are equal. The boys are extremely tired and want to start
/// des.   : their meal as soon as possible, that's why you should help them and find out, if they can divide the watermelon in the way they want. For
/// des.   : sure, each of them should get a part of positive weight.

/*--------------------------------------- (Description) ---------------------------------------*/

/*--------------------------------------- (Input and Output) ---------------------------------------*/

/// Input  : The first (and the only) input line contains integer number w (1 ≤ w ≤ 100) — the weight of the watermelon bought by the boys.
/// Output : Print YES, if the boys can divide the watermelon into two parts, each of them weighing even number of kilos; and NO in the opposite case.

/*--------------------------------------- (Input and Output) ---------------------------------------*/

/*--------------------------------------- (Note) ---------------------------------------*/

/// Note   : For example, the boys can divide the watermelon into two parts of 2 and 6 kilos respectively (another variant — two parts of 4 and 4 kilos).

/*--------------------------------------- (Note) ---------------------------------------*/

/*--------------------------------------- (Solution) ---------------------------------------*/

/// Sol.   : We will use int ( W ) as input ( weight of the watermelon in Kilo ) and see if the ( W ) divided by 2 will give us an even number.
/// Sol.   : If the number is even, print("YES") else print("N")

/*--------------------------------------- (Solution) ---------------------------------------*/


/*--------------------------------------- (Source Code) ---------------------------------------*/

#include<iostream>

using namespace std;

int main()
{
    /// Weight of the watermelon in Kilo
    int w;

    /// Enter The Weight
    cin>>w;

    /// (w%2!=0) If the Weight divided by 2 is even
    /// (w==2) all even numbers divided by 2 equal an even number except the 2 so we add this exception
    if( w%2!=0 || w==2 )
        cout<<"NO";

    else
        cout<<"YES";

    return 0;
}
/*--------------------------------------- (Source Code) ---------------------------------------*/

/*--------------------------------------- (End) ---------------------------------------*/
/// Begin each day with the hope of ending it with the bests of your steps. Plan the day ahead and ensure that the plans are worthy of ensuring your dreams are achieved. Get started.
/// Go ahead and follow your dream
/// Best Wishes
/*--------------------------------------- (End) ---------------------------------------*/
