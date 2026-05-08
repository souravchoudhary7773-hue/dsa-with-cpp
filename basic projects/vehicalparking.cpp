#include<iostream>
using namespace std;


int main(){
    int count = 0;
    int amount = 0;

    cout<<"|| Vehical Parking Manager ||"<<endl;
    cout<<endl;

    while(1){
        cout<<"Choose your service listed below..."<<endl;
        cout<<"\n";

        cout<<"Enter '1' for car parking."<<endl;
        cout<<"Enter '2' for bus parking."<<endl;
        cout<<"Enter '3' for bike parking."<<endl;
        cout<<"Enter '4' for vehical count and amount have to pay."<<endl;
        cout<<"Enter '5' for reset entry."<<endl;
        cout<<"Enter '6' for exit program."<<endl;

        int opt;
        cin>>opt;

        if(opt == 1){
            count +=1;
            amount += 100;
        }else if(opt ==2){
            count +=1;
            amount+= 200;
        }else if(opt == 3){
            count += 1;
            amount += 50;
        }else if(opt == 4){
            cout<<"Vehical count-> "<<count<<endl;
            cout<<"Total amount-> "<<amount<<endl;
        }else if(opt == 5){
            count = 0;
            amount = 0;
            cout<<"reseted!"<<endl;
        }else if(opt ==6){
            exit(0);
        }else{
            cout<<"Enter right option!"<<endl;
        }

    }

return 0;
}
