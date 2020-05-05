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
    Product(int id1,int Mid,string Name1,double Price2,int Number1){
      id=id1;
      Market_id=Mid;
      Name=Name1;
      price=Price2;
      Number=Number1;

    }
};
int main() {
  User user1; 
  Market Market1;
  list <Product> prod =list<Product>();
  user1.id=1;
  user1.Email="b@b.com";
  user1.Password="1234";
  user1.Phone="123456";
  user1.addrese="trkey";
  user1.rol=2;

  Market1.id=500;
  Market1.user_id=1;
  Market1.Name="Market1";
prod.push_back(Product(1,500,"Water",1,10));
prod.push_back(Product(2,500,"icreem",0.5,20));
prod.push_back(Product(3,500,"apple",2,15));

  
string email , pass;
bool log=false;
cout<<"enter your email"<<endl;
cin>>email;
if(email=="b@b.com"){
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
if(log==true && user1.rol==2){
  cout<<"welcom " +user1.Email<<endl;
  cout<<"You can Bay Product From " +Market1.Name<<endl;
  string i;
  int n=1;
double total;
double totalmany;
cout<<"there are this products in market"<<endl;
for (list<Product>::iterator p=prod.begin(); p!=prod.end(); p++) {
  total=p->Number*p->price;
  cout<<p->Name<<"=>"<<p->Number <<"  pices  "<<"  price one pices =>  "<<p->price<<"$"<<" total "<<total<< "$"<<endl;
  cout<<"if you need this products press 1"<<endl;
  int m;
  cin>>m;
  if(m==1){
    cout<<"enter number of piece"<<endl;
    int num;
    cin>>num;
    int Error=0;
    while (Error!=1)
    {
      if(num>0 && num<=p->Number){
      total=num * p->price;
      totalmany=totalmany+total;
      Error=1;
    }else
    {
      cout<<"Error : number of piece bigger of Number Product renter Number"<<endl;
      cin>>num;
    }
    }
  }
  
}
cout<<"you must Bay "<<totalmany<<" $ thank for vist my market"<<endl;
}else{
  cout<<"You cant login to this System" +Market1.Name<<endl;
} 
  
  return 0;
}