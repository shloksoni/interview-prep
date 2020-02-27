
#include <bits/stdc++.h>
using namespace std;
string u19[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen "
               };
string tens[] = { "", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety "
               };
string check2(int n, string s)
{
    string str = "";
    cout<<n<<"\n";
    if (n > 19)
        str += tens[n / 10] + u19[n % 10];
    else
        str += u19[n];


    if (n)
        str += s;

    return str;
}


string check(long n)
{

    string ans;



    ans += check2(((n / 100000) % 100), "lakh ");


    ans += check2(((n / 1000) % 100), "thousand ");


    ans += check2(((n / 100) % 10), "hundred ");

    if (n > 100 && n % 100)
        ans += "and ";


    ans += check2((n % 100), "");

    return ans;
}


int main()
{S



    long x;
    cin>>x;
    cout << check(x);;

    return 0;
}
