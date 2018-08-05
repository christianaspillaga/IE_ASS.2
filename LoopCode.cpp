    #include<stdio.h>
    #include<conio.h>
    #include<iostream>
    #include<stdlib.h>

    using namespace std;
    int main (){
        int toLoop;
        cout<<"Enter a number to loop"
        <<endl;
        cin>> toLoop;
        for(int i=0;i<toLoop;++i)
        {
        cout<< i+1;
    }
    }