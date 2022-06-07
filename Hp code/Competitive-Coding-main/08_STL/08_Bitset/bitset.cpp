#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    bitset<5> bt;
    cin >> bt; // 10101
    /*
    this functions are provided by bitset container
    all any count flip none set reset size test*/

    // cout<<bt.all();


    //any

// cout<<bt.any(); //bt --> 10000

//0000 -> false
//0001 -> true


//count  
// cout<<bt.count(); //01010  =2


//flip
//cout<<bt.flip(2);  //10100  --> 10000

// cout<<bt.none();  // 10101 = 0 :  00000 =1


//set
//cout<<bt.set(); //it sets all the elements as one 

//cout<<bt.set(2); // if we give the index then /it sets that index

// cout<<bt.set(2,0); //sets 2nd postion as zero


//reset
// cout<<bt.reset(); //this will turn all to zero
// bt.reset(2);


//size
// cout<<bt.size();

//test
// cout<<bt.test(1);
//checks if the bit is set or not at the index 1





    return 0;
}