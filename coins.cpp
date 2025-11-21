
#include <iostream>

using namespace std;
 int coins = 0;
 double B_RM = 0.00;

 string users, pass, b_user, B_pass;

 void BuyCoins();
 void CheckCoins();
 void SpendCoins();
 void FreeCoins();
 bool CheckPass();
 void SaleCoins(); 
void BankAccount();


 
 int main(){

  cout<<"Enter Username:  ";
  cin>>users;
  cout<<"Enter Password: ";
  cin>>pass;
  system("clear");


int choice;
 do{
   cout<<"\n-------------------------------------------\n";
   cout<<"      Welcome "<< users << " to the WAKA COINS      \n";
   cout<<"      Your Belance is "<< coins<<"  coins.           \n";
   cout<<"      Your Belance is RM "<< B_RM <<".           \n";
   cout<<"-------------------------------------------\n";
   cout<<"1. Buy coins\n";
   cout<<"2. Spend coins\n";
   cout<<"3. Check coins\n";
   cout<<"4. Free coins\n";
   cout<<"5. Login bank account\n";
   cout<<"6. Exit\n";
   cout << "Enter your choice: ";


   while (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number from 1 to 4.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter your choice: ";
        }

        switch (choice){
        case 1: BuyCoins(); break;

        case 2: SpendCoins();break;

        case 3: CheckCoins();  break;
        case 4: FreeCoins();  break;
        case 5: BankAccount();  break;


        case 6: cout<<"Exiting...."; break;
        
        default:
        cout << "\n \nInvalid input! Please enter a number from 1 to 6.\n \n \n";
          break;
        }

 } while (choice != 5);
 
  return 0;

}


void BuyCoins(){
  if(!CheckPass()){
      cout <<"Incorrect password returning to menu... \n";
     return;

    }
    int Getcoins;
    string yn;
   cout<<"-------------------------\n";
  cout<<".     Coins Shop \n ";
  cout<<"-------------------------\n";
  cout<<"1 coins = RM 1.00 \n Enter How many Coins you wanna buy > ";
  cin>>Getcoins;
 
  cout<<"Are you sure wanna buy " << Getcoins << " coins for RM " << Getcoins << ". \n Enter y or n \n > ";
  cin>>yn;

  if(yn == "Y" || yn == "y"){
    coins += Getcoins;
    cout<<"Thank You,You will recieve your coins shortly\n";
  }else if(yn == "N" && yn == "n"){
    cout<<"Returning to main menu.... \n";
    return;
  }else{
    cout<<"error: Please Enter only y or n.  \n";
    BuyCoins();
  }


//   int Newcoins, total;
 
//    cout<<"Enter amount you want to add: \n > ";
//    cin>>Newcoins;

//   total = coins + Newcoins;

//   cout<<Newcoins <<" coins added to your account. Your new balances is " << total << "\n \n";
//  coins = total;


}

void CheckCoins(){
  cout<<"\n \n Your balances is " << coins << " coins \n \n";
}

 void SpendCoins(){
    if(!CheckPass()){
      cout <<"Incorrect password returning to menu...\n ";
     return;
    }
   int choice;
   do{
    cout<<"\nOnline shop (wakaka) \n";
    cout<<"1. 12 coins: GTA 5 Game \n";
    cout<<"2. 19 coins: Mouse      \n";
    cout<<"3. 29 coins: keybord    \n";
    cout<<"4. 35 coins: Monitor    \n";
    cout<<"5. 39 coins: CPU        \n";
    cout<<"6. 49 coins: GPU        \n";
    cout<<"7. 59 coins: speaker    \n";
    cout<<"8. exit.                \n";
    cout<<"Enter your choice       \n > ";

    while (!(cin >> choice)) {
            cout << "Invalid input! Please enter a number from 1 to 8.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter your choice: ";
        }

    switch (choice){
    case 1: if(coins < 12){cout<<"\nNot enough coins\n";} else {coins -= 12; cout<<"\nYou Spend 12 coins. Your belance is " << coins << " coins.\n";} break;
    case 2: if(coins < 19){cout<<"\nNot enough coins\n";} else {coins -= 19; cout<<"\nYou Spend 19 coins. Your belance is " << coins << " coins.\n";} break;
    case 3: if(coins < 29){cout<<"\nNot enough coins\n";} else {coins -= 29; cout<<"\nYou Spend 29 coins. Your belance is " << coins << " coins.\n";} break;
    case 4: if(coins < 35){cout<<"\nNot enough coins\n";} else {coins -= 35; cout<<"\nYou Spend 35 coins. Your belance is " << coins << " coins.\n";} break;
    case 5: if(coins < 39){cout<<"\nNot enough coins\n";} else {coins -= 39; cout<<"\nYou Spend 39 coins. Your belance is " << coins << " coins.\n";} break;
    case 6: if(coins < 49){cout<<"\nNot enough coins\n";} else {coins -= 49; cout<<"\nYou Spend 49 coins. Your belance is " << coins << " coins.\n";} break;
    case 7: if(coins < 59){cout<<"\nNot enough coins\n";} else {coins -= 59; cout<<"\nYou Spend 59 coins. Your belance is " << coins << " coins.\n";} break;
    case 8: cout<<"returning to menu...\n"; break;
    default: cout << "Invalid input! Please enter a number from 1 to 6.\n";
      break;
    }


   }while (choice != 8);

  }
  

 bool CheckPass(){
  string a;
  cout<<"Enter Your Password: \n > "; 
  cin>>a;
  if(a == pass){
    return true;
  }else{
    return false;
  }

 }

 void FreeCoins(){
  string data, c;
  data = "ufshelffhiuhfQ@&FHJWjbsdvs";

  cout<<"To get free coins You just need to type this: "<< data << " Make sure it same. \n >";
  cin>>c;
  if(c != data){
    cout<<"Sorry try again \n";
  }else if (c == data){

    coins += 10;
    cout<<"Cool you got 10 free coins. \n";
  }
 }


void BankAccount(){
 if(!CheckPass()){
      cout <<"Incorrect password returning to menu... \n";
     return;

    }
    cout<<"-------------------------\n";
    cout<<".     Bank Account Login \n ";
    cout<<"Your belance is RM "<< B_RM <<"\n";
    cout<<"-------------------------\n";
    return;
}