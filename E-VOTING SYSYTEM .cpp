#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
using namespace std; 
class Rgs 
{ 
 public: 
  string name; 
  string sex; 
  int k; 
  void get() 
  { 
    cout<<setw(124)<<"WELCOME TO THE REGISTRATION PAGE\n"<<endl; 
    cout<<"ENTER YOUR FULL NAME:\n"; 
    cin.ignore(); 
    getline(cin,name); 
    cout<<"\nENTER YOUR AGE:\n "; 
    cin>>k; 
    cout<<"\nENTER YOUR SEX\n"; 
    cin.ignore(); 
    getline(cin,sex); 
  } 
  void disp() 
  { 
  for(int i=0;i<28;i++)
  {
 	cout<<"=";
  } 
    cout<<endl;
    cout<<"->CANDIDATE NAME: "<<name<<endl; 
    cout<<"->CANDIDATE AGE: "<<k<<endl; 
    cout<<"->CANDISATE SEX: "<<sex<<endl; 
    for(int i=0;i<28;i++)
  {
 	cout<<"=";
  } 
    cout<<endl;
  } 
 
}; 
class hrmn:public Rgs 
{ 
 public: 
    void hr() 
    {  
        cout<<"Enter Candidate full name for update :\n"; 
        cin.ignore(); 
        getline(cin,name); 
        cout<<"\nEnter Candidate  Age for update:\n "; 
        cin>>k; 
        cout<<"\nEnter Candidate sex for update\n"; 
        cin.ignore(); 
        getline(cin,sex); 
    for(int i=0;i<40;i++)
    {
 	    cout<<"=";
    }
        cout<<endl;
        cout<<"Now,After update Name of Candidate is\n"<<name<<endl;
        cout<<"Now,After update Age of Candidate is\n"<<k<<endl;
        cout<<"Now,After update Sex of Candidate is\n"<<sex<<endl;
    for(int i=0;i<40;i++)
    {
 	    cout<<"=";
    }
        cout<<endl;
    }   
}; 
class update 
{ 
 public: 
    int i; 
    void getu() 
    {  
        cin>>i; 
    for(int i=0;i<34;i++)
    {  
 	    cout<<"=";
    }
        cout<<endl;;
    if(i==1702) 
        cout<<"Candidate Voter Id.:VMF1702\nCandidate Name: Pranav Goel\nCandidateAge:18\nCandidate Sex: Male"<<endl; 
    else 
    if(i==1703) 
        cout<<"Voter id no. :VMF1703\nName:Pratibha\nAge:19\nSex: Female"<<endl; 
    else 
    if(i==1704) 
        cout<<"Voter id no. : VMF1704\nName:Paras\nAge:72\nSex: Male"<<endl; 
    if(i==1705) 
        cout<<"Voter id no. : VMF1705\nName:Nikhil Poonia\nAge:21\nSex: Male "<<endl;
    if(i==1706) 
        cout<<"Voterid no. : VMF1706\nName:Ram Singh\nAge:24\nSex: Male "<<endl;
    if(i==1707) 
        cout<<"Voter Id no. : VMF1707\nName:Purnima\nAge:19\nSex: Female "<<endl;    
    for(int i=0;i<34;i++)
    {
        cout<<"=";
    } 
        cout<<endl;
    } 
}; 
class del:public Rgs 
{ 
  public: 
   int g; 
   void delp() 
   { 
        cout<<"press 1 to delete the data"<<endl; 
        cin>>g; 
        if(g==1) 
        cout<<"Data Deleted!\n";  
   }
}; 
int main() 
{
	start:
    Rgs r; 
    update j; 
    del f; 
    hrmn h; 
        cout<<setw(118)<<"ELECTION COMMISION INDIA"<<endl;
    for(int i=0;i<211;i++)
    {
 	    cout<<"-";
    } 
        cout<<setw(124)<<"Please select from these options\n"; 
    for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }  
        cout<<endl;
        cout<<"|"<<setw(20)<<"1.New Registration"<<"  "<<"|"<<endl;
    for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    } 
        cout<<endl;
    for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }
        cout<<endl;
        cout<<"|"<<setw(15)<<"2.Update"<<"       "<<"|"<<endl;
    for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }
        cout<<endl;
    for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }
        cout<<endl;
        cout<<"|"<<setw(15)<<"3.Delete"<<"       "<<"|"<<endl;
    for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }
        cout<<endl;
    for(int i=0;i<211;i++)
    {
 	    cout<<"-";
    }  
    int a; 
    cin>>a; 
    switch(a) 
    { 
    case 1:r.get(); 
    r.disp(); 
    break; 
    case 2:
  	    cout<<setw(119)<<"Welcome to update page"<<endl;
        cout<<"REGISTRATION VOTER ID`S\nVMF1702  \nVMF1703 \nVMF1704 \nVMF1705 \nVMF1706 \nVMF1707"<<endl;
        cout<<"Select only last 4(Four) of candidate voter id`s for update\n"; 
        j.getu(); 
        h.hr(); 
        cout<<"Information updated\n"<<endl;
        break; 
    case 3:
        cout<<setw(119)<<"Welcome to delete page"<<endl;
	    cout<<"Registerd id's are:"<<endl; 
        cout<<"VMFX1702  \nVMFX1703 \nVMFX1704 \nVMFX1705 \nVMF1706 \nVMF1707"<<"\nSelect Your ID"<<endl; 
        j.getu(); 
        f.delp(); 
    break; 
    } 
   	char name[20];
	int selector,id;
	for(int i=0;i<211;i++)
    {
 	    cout<<"-";
    }  
   	    cout<<setw(115)<<"E-VOTING SYSTEM"<<endl; 
   	    cout<<"\n Enter Candidate  Voter ID's:";
   	    cin>>id;
    for(int i=0;i<49;i++)
    {
  	    cout<<"*";
    }
   	    cout<<"\n|"<<"\tEnter 1(BJP) to vote MR.Modi For PM"<<"\t|"<<endl;
   	for(int i=0;i<49;i++)
    {
 	    cout<<"*";
    }
        cout<<endl;
   for(int i=0;i<49;i++)
    {
 	    cout<<"*";
    }
        cout<<"\n|"<<"  "<<"Enter 2(Congres) to vote MR.Gandhi For PM"<<"\t|"<<endl;
   	for(int i=0;i<49;i++)
    {
 	    cout<<"*";
    }
        cout<<endl;
  	for(int i=0;i<49;i++)
    {
 	    cout<<"*";
    }
        cout<<"\n|"<<" "<<"Enter 3(NOTA) if you dont want to vote anyone"<<"\t|"<<endl;
    for(int i=0;i<48;i++)
    {
 	    cout<<"*";
    }
   	    cout<<"\nSelect one for vote"<<endl;
   	    cin>>selector;
   	switch(selector)
   	{
   	case 1:
   	    cout<<"\nYou Voted to 1(BJP) To Vote MR.Modi"<<endl;
   	for(int i=0;i<24;i++)
    {
 	cout<<"=";
    }
		cout<<endl;
   		cout<<"|"<<"Thank You For voting "<<"|"<<endl;
   	for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }
   	break;
   	case 2:
   		cout<<"\nYou Voted to 2(Congres) To Vote MR.Gandhi"<<endl;
   	for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }
   		cout<<endl;
   	    cout<<"|"<<"Thank You For voting "<<"|"<<endl;
    for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }
   	break;
   	case 3:
   		cout<<"\nYou Voted to 3(NOTE),You dont want to vote anyone"<<endl;
   	for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }
   		cout<<endl;
   		cout<<"|"<<"Thank You For voting "<<"|"<<endl;
   		for(int i=0;i<24;i++)
    {
 	    cout<<"=";
    }
   	break;
   	default:
   		cout<<"Wrong selection,Please select between 1,2 or 3"<<endl; 
	}
	goto start;  
 } 
