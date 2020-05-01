#include <iostream>
#include <string>
using namespace std;

class User {       
  public:             
    int id;        
    string Email; 
    string Password;
    string Phone;
    string addrese;
    int rol;

};
class Market {       
  public:             
    int id;        
    int user_id; 
    string Name;
};
class Product {       
  public:             
    int id;        
    int Market_id; 
    string Name;
    double price;
    int Number;
};
int main() {
  User ahmad; 
  Market Market1;
  Product water;

  // Access attributes and set values
  ahmad.id=1;
  ahmad.Email="a@a.com";
  ahmad.Password="1234";
  ahmad.Phone="123456";
  ahmad.addrese="trkey";
  ahmad.rol=1;

  Market1.id=500;
  Market1.user_id=1;
  Market1.Name="Market1";

  
string email , pass;
bool log=false;
cout<<"enter your email"<<endl;
cin>>email;
if(email=="a@a.com"){
  cout<<"enter your password"<<endl;
  for(int i=0;i<3;i++){
    cin>>pass;
    if(pass=="1234"){
      log=true;
      cout<<"you are login"<<endl;
      break;
    }else{
      if(i<2){
        cout<<"renter your password"<<endl;
      }
    }
  }
}
if(log==true){
  cout<<"welcom " +ahmad.Email<<endl;
  cout<<"Market Name is  " +Market1.Name<<endl;
  cout<<"enter the first product"<<endl;
  water.Market_id=500;
  cout<<"enter product id"<<endl;
  cin>>water.id;
  
  cout<<"enter product Name"<<endl;
  cin>>water.Name;
  
  cout<<"enter product Number"<<endl;
  cin>>water.Number;
  
  cout<<"enter product price"<<endl;
  cin>>water.price;

  cout<<"you have "<<water.Name<<"=>"<<water.Number <<"  pices  "<<"  price one pices =>  "<<water.price<<"$"<<endl;

}else{
  cout<<"You cant login to this System" +Market1.Name<<endl;
} 
  
  return 0;
}