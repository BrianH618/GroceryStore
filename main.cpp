//Brian Herrera
#include<iostream>
#include<string>
using namespace std;

int main()
{
        string list[5]; //array of 5 strings
        int numItems = 0;
        char input;
        string item;
        int ItemList;

        do
        {

                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if ((input == 'a' || input == 'A') )
                {
                        cout<<"What is the item?\n";
                        cin >> item;

                        if(numItems <5)
                        {
                                list[numItems]=item;
                                numItems ++;
                        }  


                        if(numItems >=5)
                        {
                                cout<<"You'll need a bigger list!\n";
                        }
                }

        }

        while(input != 'q' && input != 'Q');
        cout<<"==GROCERY LIST MANAGER==\n";
        for(ItemList = 0; ItemList< 5; ItemList++)
        {

                cout<<ItemList+1<<" "<<list[ItemList]<<endl;

        }

        return 0;
}
