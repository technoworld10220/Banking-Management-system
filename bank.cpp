#include <iostream>
using namespace std;
class bank_account
{
int account_num;
char depname[20];
char account_type[2];
float amount;
public:
void getinfo()
{
cout<<"enter depositer name"<<endl;
cin>>depname;
cout<<"enter account number"<<endl;
cin>>account_num;
cout<<"enter account type"<<endl;
cin>>account_type;
cout<<"enter amount"<<endl;
cin>>amount;
}
void deposit()
{
float depo;
cout<<"enter amount to be deposit"<<endl;
cin>>depo;
amount=amount+depo;
cout<<"the current/updated amount is"<<amount<<endl;
}
void withdraw()
{
float with;
cout<<"enter amount to withdraw"<<endl;
cin>>with;
if(amount>1000)
{
amount=amount-with;
cout<<"the current/updated amount is"<<amount<<endl;
}
else
{
cout<<"the min balance should be 1000"<<endl;
}
}
int getaccount_num()
{
return account_num;
}

};
int main()
{
bank_account ba[6];
int i,ch,a,flag=0;
for(i=0;i<6;i++)
{
cout<<"enter info of depositer:"<<i+1<<endl;
ba[i].getinfo();
}
cout<<"select the below operations:"<<endl;
cout<<"enter 1 for deposit"<<endl;
cout<<"enter 2 for withdraw"<<endl;
cin>>ch;
switch(ch)
{
case 1:
cout<<"enter account number";
cin>>a;
for(i=0;i<6;i++)
{
if(ba[i].getaccount_num()==a)
{
flag=1;
break;
}
else
{
flag=0;
}
}
if(flag==0)
{
cout<<"account not found"<<endl;
}
else
{
ba[i].deposit();
}
break;
case 2:
cout<<"enter account number to withdraw"<<endl;
cin>>a;
for(i=0;i<6;i++)
{
if(ba[i].getaccount_num()==a)
{
flag=1;
break;
}
else
{
flag=0;
}
}
if(flag==0)
{
cout<<"account not found"<<endl;
}
else
{
ba[i].withdraw();
}
break;
}
return 0;
}