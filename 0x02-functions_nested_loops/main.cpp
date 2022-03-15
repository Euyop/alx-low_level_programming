#include <iostream>

using namespace std;

int main()
{
    int index= 6;
    do{
        cout<<index<<endl;
            index++;
    }
    while(index<= 5);
    int secrnum=7;
    int guess;
    int guesscount=0;
    int guesslimit=3;
    bool outofguess=false;
    while(secrnum != guess && !outofguess ){
            if (guesscount < guesslimit)
        cout<<"enter guess: ";
        cin>>guess;
    guesscount++;
    }
    else{
        outofguess=true;
    }
}
    if(outofguess){
        cout<<"you lose";
    }
    cout<<"you get a secrete number6!!";

    return 0;
}
