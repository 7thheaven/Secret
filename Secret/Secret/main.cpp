//
//  main.cpp
//  Secret
//
//  Created by July on 14-6-26.
//  Copyright (c) 2014年 July. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <vector>

#define primenum 10000

using namespace std;

void swap(int & a,int & b)
{
    int c = a;
    a = b;
    b = c;
}

int gcd(int a,int b)
{
    if(0 == a)
        return b;
    if(0 == b)
        return a;
    if(a > b)
        swap(a,b);
    int c;
    for(c = a % b; c >0; c = a % b)
    {
        a = b;
        b = c;
    }
    return b;
}

long long PowerMod(long long a, long long b, long long k)
{
    long long tmp = a, ret = 1;
    while (b)
    {
        if (b & 1)
            ret = ret * tmp % k;
        tmp = tmp * tmp % k;
        b >>= 1;
    }
    return ret;
}

bool ishusu(int a,int b)
{
    return gcd(a,b)==1? true : false;
}

bool isprime(long long n)
{
    for(int i(2);i*i<=n;++i)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int main(int argc, const char * argv[])
{
    // insert code here...
    //freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int p(23),q(47),n(p*q),e(59);
    vector<long long> primebox;
    for(long long i(2);primebox.size()<primenum;++i)
    {
        if(isprime(i))
            primebox.push_back(i);
    }
    //for(int i(0);i<primenum;++i)  cout<<primebox[i]<<endl;
    return 0;
}

