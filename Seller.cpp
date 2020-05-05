#include <iostream>
#include <string>
#include <list> 
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
  User user1; 
  Market Market1;
  list <Product> prod;
  Product pr;
  user1.id=1;
  user1.Email="a@a.com";
  user1.Password="1234";
  user1.Phone="123456";
  user1.addrese="trkey";
  user1.rol=1;

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
if(log==true && user1.rol==1){
  cout<<"welcom " +user1.Email<<endl;
  cout<<"Market Name is  " +Market1.Name<<endl;
  string i;
  int n=1;
while (i!="1")
{
  pr.id=n;
  pr.Market_id=Market1.id;
  cout<<"enter product Name"<<endl;
  cin>>pr.Name;
  cout<<"enter product Number"<<endl;
  cin>>pr.Number;
  cout<<"enter product price"<<endl;
  cin>>pr.price;
  cout<<"if finish enter 1"<<endl;
  prod.push_back(pr);
  cin>>i;
  n++;
}
double total;
double totalmany;
for (list<Product>::iterator p=prod.begin(); p!=prod.end(); p++) {
  
  total=p->Number*p->price;
  cout<<"you have "<<p->Name<<"=>"<<p->Number <<"  pices  "<<"  price one pices =>  "<<p->price<<"$"<<" total "<<total<< "$"<<endl;
  totalmany=totalmany+total;
}
cout<<"you have product equal "<<totalmany<<"$"<<endl;
}else{
  cout<<"You cant login to this System" +Market1.Name<<endl;
} 
  
  return 0;
}