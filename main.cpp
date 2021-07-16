#include<iostream>
#include<cmath>
#include <ctime>
#include<stdlib.h>
using namespace std;

string itemName1,itemName2,itemName3;
int quantity1,quantity2,quantity3;
int pricePerUnit1,pricePerUnit2,pricePerUnit3;
int offer1,offer2,offer3;
int total=0;

int main()
{

 time_t t = time(NULL);
 tm* tPtr = localtime(&t);
    cout<<"------The Coles beverage corporation (Pvt) Ltd------"<<endl<<endl;
    cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
    cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl;
    cout << endl;
    cout<<"Press e to login"<<endl;
    char x;
    cin>>x;

    if(x=='e'){
        system("CLS");
    }
    else{
        cout<<"wrong input!!!!"<<endl;
    }

    cout<<"------LOGIN PAGE------"<<endl<<endl;

    string name="0";
    string pass = "0";
    cout<<"user name : ";
    cin>>name;
    cout<<endl<<"password : ";
    cin >> pass;
    //here defined user name is "check" and password is "1234"
    int z=0;
    while ((pass != "1234" && name!="check") && (pass!="admin@sys" && name!="Coles") && (pass!="Mich_458" && name!="Mich_Dess")) {
        z=z+1;
        if(z==3){
            return 0;
        }

        system("CLS");
        cout<<"------LOGIN PAGE------"<<endl<<endl;
        cout << "incorrect, try again"<<endl;
        cout<<"user name : ";
        cin>>name;
        cout<<endl<<"password : ";
        cin >> pass;
    }
    system("CLS");

    char exitMenu;
    while(true){
        cout<<"Please Select an option......"<<endl<<endl;
        cout<<"(1)Menu Details"<<endl;
        cout<<"(2)Bill Calculator"<<endl;
        cout<<"(3)Log Out"<<endl;
        int option;
        cin>>option;


        if(option==1){
            cout<<"Item code     Juice Name     Price"<<endl;

            cout<<"   002          Lemon         Rs. 100"<<endl;
            cout<<"   003          Mango         Rs. 120"<<endl;
            cout<<"   004          Mix Fruit     Rs. 120"<<endl<<endl;
            //It can be added any number of Juice names and according to that you want to update in the Bill calculation code part


        }
        else if(option==2){



                cout<<"Enter Juice Name   : ";  //please enter those names as Mentioned in the Menu Details
                cin>>itemName1;
                cout<<"Enter the Quantity : ";
                cin>>quantity1;
                if(itemName1=="Lemon"){
                    pricePerUnit1=100;

                }
                else if(itemName1=="Mango"){
                    pricePerUnit1=120;
                }
                else if(itemName1=="Mix Fruit"){
                    pricePerUnit1=120;
                }
                else{
                    cout<<"wrong input!!!"<<endl;
                }
                cout<<endl<<endl;
                cout<<"Enough Items ? (y/Y) or (n/N)"<<endl;
                char check;
                cin>>check;
                if(check=='y' || check=='Y'){
                        system("CLS");
                        cout<<"-------YOUR TOTAL BILL-------"<<endl<<endl;
                        cout<<"Item Name      Quantity    Price Per Unit"<<endl<<endl;
                        cout<<itemName1<<"         "<<quantity1<<"         "<<pricePerUnit1<<endl;

                        total=quantity1*pricePerUnit1;
                        cout<<"Total Price    : "<<total<<endl;
                        if(total>1000){
                            offer1=50;
                        }
                        else if(total>2000){
                            offer1=100;
                        }
                        else{
                            offer1=0;
                        }
                        cout<<"Offer : "<<offer1<<endl;
                        cout<<"After Offer Your Total Price : "<<total-offer1<<endl;

                }
                else if(check=='n' || check=='N'){
                    cout<<"Enter Juice Name   : ";  //please enter those names as Mentioned in the Menu Details
                    cin>>itemName2;
                    cout<<"Enter the Quantity : ";
                    cin>>quantity2;
                    if(itemName2=="Lemon"){
                    pricePerUnit2=100;

                    }
                    else if(itemName2=="Mango"){
                        pricePerUnit1=120;
                    }
                    else if(itemName2=="Mix Fruit"){
                        pricePerUnit2=120;
                    }
                    else{
                        cout<<"wrong input!!!"<<endl;
                    }
                    cout<<endl<<endl;
                    cout<<"Enough Items ? (y/Y) or (n/N)"<<endl;
                    cin>>check;
                    if(check=='y' || check=='Y'){
                        system("CLS");
                        cout<<"-------YOUR TOTAL BILL-------"<<endl<<endl;
                        cout<<"Item Name      Quantity    Price Per Unit"<<endl<<endl;
                        cout<<itemName1<<"         "<<quantity1<<"        "<<pricePerUnit1<<endl;
                        cout<<itemName2<<"         "<<quantity2<<"        "<<pricePerUnit2<<endl;

                        total=quantity1*pricePerUnit1+quantity2*pricePerUnit2;
                        cout<<"Total Price    : "<<total<<endl;
                        if(total>1000){
                            offer2=50;
                        }
                        else if(total>2000){
                            offer2=100;
                        }
                        else{
                            offer2=0;
                        }
                        cout<<"Offer : "<<offer2<<endl;
                        cout<<"After Offer Your Total Price : "<<total-offer2<<endl;

                    }
                    else if(check=='n' || check=='N'){
                        cout<<"Enter Juice Name   : ";  //please enter those names as Mentioned in the Menu Details
                        cin>>itemName3;
                        cout<<"Enter the Quantity : ";
                        cin>>quantity3;
                        if(itemName1=="Lemon"){
                            pricePerUnit3=100;

                        }
                        else if(itemName3=="Mango"){
                            pricePerUnit3=120;
                        }
                        else if(itemName3=="Mix Fruit"){
                            pricePerUnit3=120;
                        }
                        else{
                            cout<<"wrong input!!!"<<endl;
                        }
                        cout<<endl<<endl;
                        system("CLS");
                        cout<<"-------YOUR TOTAL BILL-------"<<endl<<endl;
                        cout<<"Item Name      Quantity    Price Per Unit"<<endl<<endl;
                        cout<<itemName1<<"         "<<quantity1<<"       "<<pricePerUnit1<<endl;
                        cout<<itemName2<<"         "<<quantity2<<"       "<<pricePerUnit2<<endl;
                        cout<<itemName3<<"         "<<quantity3<<"       "<<pricePerUnit3<<endl;

                        total=quantity1*pricePerUnit1+quantity2*pricePerUnit2+quantity3*pricePerUnit3;
                        cout<<"Total Price    : "<<total<<endl;
                        if(total>1000){
                            offer3=50;
                        }
                        else if(total>2000){
                            offer3=100;
                        }
                        else{
                            offer3=0;
                        }
                        cout<<"Offer : "<<offer3<<endl;
                        cout<<"After Offer Your Total Price : "<<total-offer3<<endl;

                    }


                }



        }
        else if(option==3){
            return 0;

        }
        else{
            cout<<"wrong input!!!!!"<<endl;
        }


        cout<<"Proceed Main menu? (y/Y) or (n/N)"<<endl;
        cin>>exitMenu;
        if(exitMenu=='n' || exitMenu=='N'){
            return 0;

        }
        else if(exitMenu=='y' || exitMenu=='Y'){
            system("CLS");
        }


    }


    return 0;
}
