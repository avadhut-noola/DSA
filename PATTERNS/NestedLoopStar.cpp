#include<iostream>
using namespace std;
int main() {
    int nLines, nStars;
    //Input no. of lines 
    cout<<"Enter No. of lines: ";
    cin>>nLines;

    //Input no. of stars in each line
    cout<<"Enter No. of stars in each line: ";
    cin>>nStars;

    //Nested Loop
    for (int i=1; i<=nLines; i++) { //Lines
        for (int j=1; j<=nStars; j++) { //Stars
        cout << "*" ;
    }
    cout<<endl;
    }
    return 0;
}