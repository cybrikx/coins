
#include <iostream>

using namespace std;
 int coins = 0;
 double B_RM = 0.00;
bool hasAccount = false;
 string users, pass, b_user, B_pass;

 void BuyCoins();
 void CheckCoins();
 void SpendCoins();
 void FreeCoins();
 bool CheckPass();
 void SaleCoins(); 
 void BankAccount();
 void CreateAccount();
 bool loginbank();
 void DepositBnk();
 //coming soon
void WithdrawalBnk();
void ConvertToCoins();
void CoinsToBank();  

 
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

 } while (choice != 6);
 
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
  cout<<"2 coins = RM 1.00 \n Enter How many Coins you wanna buy > ";
  cin>>Getcoins;
 
  cout<<"Are you sure wanna buy " << Getcoins * 2 << " coins for RM " << Getcoins << ". \n Enter y or n \n > ";
  cin>>yn;

  if(yn == "Y" || yn == "y"){
    coins += Getcoins *2 ;
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
     cout<<"-------------------------\n";
    cout<<"\nOnline shop (wakaka) \n";
     cout<<"-------------------------\n";
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
 if(!hasAccount){
    CreateAccount();
    return;
 }else if ((!loginbank())){
  cout<<"wrong Username or password. \n Returning to main manu \n";
   return;
 }
 int C;
do {
  cout<<"\n\n\n-------------------------\n";
  cout<<"     Bank System \n";
  cout<<"-------------------------\n";
  cout<<"1.Check belance  \n";
  cout<<"2.Deposit   \n";
  cout<<"3.Withdrawal   \n";
  cout<<"4.Convert to coins   \n";
  cout<<"5.Coins to Bank   \n";
  cout<<"6.Exit   \n";

  while (!(cin >> C)) {
            cout << "Invalid input! Please enter a number from 1 to 6.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter your choice: ";
        }

      switch(C){
        case 1: cout<<"Your belance is " << B_RM <<endl; break;
        case 2: DepositBnk(); break;
        case 3: WithdrawalBnk(); break;
        case 4: ConvertToCoins();break;
        case 5: CoinsToBank(); break;
        case 6: cout<<"Exiting to main manu"; break;
      }
  
}while(C != 6);


}

void CreateAccount(){
  cout<<"\n\n\n-------------------------\n";
  cout<<"     Create Bank Account \n";
  cout<<"-------------------------\n";
  cout<<"Enter Bank Username: ";
  cin>>b_user;
  cout<<"Enter Bank Password: ";
  cin>>B_pass;
  cout<<"Account Created Successfully \n";
  hasAccount = true;

}
bool loginbank(){
  string Bu, Bp;
  cout<<"\n\n\n-------------------------\n";
  cout<<"     Login Bank Account \n";
  cout<<"-------------------------\n";
  cout<<"Enter bank Username: ";
  cin>>Bu;
  cout<<"Enter bank Password: ";
  cin>>Bp;

  if(Bu == b_user && Bp == B_pass ){
    return true;
  }else {
    return false;
  }
}

void DepositBnk(){
  double money;
  cout<<"\nEnter Amount you want to deposit: ";
  cin>>money;
  B_RM += money;
  return;
 
} 

void WithdrawalBnk(){
  double money;
  cout<<"\nEnter Amount you want withdraw: ";
  cin>>money;
  if (money > B_RM){
    cout<<"error:  sorry you dont have enough credit.";
  }else{
  B_RM -= money;
  cout<<"\nwithdrawal successful, RM: "<< money <<"  has been deducted from Your account\n ";
  }
}

void ConvertToCoins(){
  int gone = 0;
  double total = 0.00;
  cout<< "You have "<< coins <<" coins\n";
  cout<< "And Your bank belance is RM "<< B_RM <<"\n\n";

  cout<<"price: 2 coins = RM 1:00\nEnter The amount of coins you want \n > ";
  cin>>gone;
 total = gone / 2.00;
 cout<<"TEST:  "<< total<<" \n";
  if (total > B_RM || B_RM == 0){
    cout<<"error:  sorry you dont have enough credit.";
  }else{
    B_RM -= total;
    coins += gone;
    cout<<"successful converted RM "<<total<<" into "<< gone<< "coins\n";
  }
  


}

void CoinsToBank(){
double money = 0.0;
int total = 0;
string a;

cout<< "You have "<< coins <<" coins\n";
cout<< "And Your bank belance is RM "<< B_RM <<"\n\n";
cout<<"price: RM 1:00 = 2 coins\nEnter how much you want \n >RM:  ";
cin>>money;

total = money * 2;

if(total > coins || coins == 0){
   cout<<"error:  sorry you dont have enough coins.";
}else{
  cout<<"Are you sure? You want to convert " << total << " coins into RM " << money <<" \n" ;
  cout<<"Enter Y or N";
  cin>>a;
  if(a == "y"  || a == "Y"){
    coins -= total;
    B_RM += money;
    cout<<"successful converted "<< total << " coins into RM " << money;
  }else{
    return;
  }
}



}