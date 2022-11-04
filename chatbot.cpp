#include<windows.h>
#include<iostream>
#include<string>
using namespace std;
 int main()
 {
    char inp , y, n , Y, N;
    string name , getkey , getans, getinp ;
    int age;

    cout<<"\t \t WELCOME TO CHATBOT \n \n";
    cout<<"To continue the program type 'Y' and to End type'N'-\n";
    cout<<"-->";
    cin>>inp;
    //condition whether its Y or N

    if(inp=='y'||inp=='Y')
    {
        cout<<"\n WELCOME .....!";
    }
    else 
    {
        cout<<"\n Thanks for coming ";
        return 0;
    }

    system("cls");//clean out the terminal
    if(getkey !="bye")
    {
        cout<<"\t HELLO USER \n";
        cout<<"-->";
        cin>>getkey;
        cout<<" What is your name ?\n";
        cout<<"-->";
        cin>>name;
        cout<<name<<"\t What is your age ?\n";
        cout<<"-->";
        cin>>age;
        switch(age)
        {
            case 18:
            cout<<"you are young \n";
            break;
            case 19:
            cout<<"You are an adult \n";
            break;
            case 20:
            cout<<"You are an adult \n";
            break;
            case 21:
            cout<<"You are an adult \n";
            break;
            case 22:
            cout<<"You are an adult \n";
            break;
            case 23:
            cout<<"You are an adult \n";
            break;
            case 24:
            cout<<"You are an adult \n";
            break;
            default:
            cout<<"Nothing I can say about your age \n";

        }
        cout<<"How was your day ?\n";
        cin>>getans;
        cout<<"Hope you love the experience with me \n";
        cout<<"-->";
        cin>>getinp;
        cout<<"\t\t\t ...............THANKS FOR THE COMPLIMENT............. \n ";
        cout<<"Bye Bye"<<name<<"-->";
        cin>>getkey;

    }
    cout<<" \t\t\t PROGRAM ENDS HERE! \n";
    return 0;

 }