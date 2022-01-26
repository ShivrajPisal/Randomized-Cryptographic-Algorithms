#include<bits/stdc++.h>
using namespace std;
 int find_e(int a, int h) 
{     int temp; 

    while(1) 
  {         temp = a%h; 

        if(temp==0) 

        return h; 
  a = h; 
  h = temp; 
} 
}    
int main()
{    int times,choice; double pt=0,p=3,q=7,n=p*q,count,totient =(p-1)*(q-1),e=2,k=2,d=(1+(k*totient))/e,msg;
int i,j,key;
    string s,t;
   cout<<"Enter how many time to encrypt the data";
   cin>>times;
 
   while (times>0)          //Main driver loop
   {  srand(time(0));       // The core of
     choice=rand() % 2 +1;  // our code
   
       if(choice==1)
       {
       
            while(e<totient){ 
    count = find_e(e,totient); 
if(count==1) 
        break; 
    else 
        e++; 
 } 
        cout<<"\n"<<"Message (in digits)"<<endl;cin>>msg;
        double c=pow(msg,e);
        
        c=fmod(c,n);
        
        double m=pow(c,d);
        
        m=fmod(m,n);
        cout<<"Message data= //RSA choice=1 "<<msg<<endl;
        cout<<"\n"<<"p= //RSA choice=1 "<<p<<endl;
         cout<<"\n"<<"q = //RSA choice=1 "<<q<<endl;
         cout<<"\n"<<"n = pq = //RSA choice=1 "<<n<<endl;
    cout<<"\n"<<"totient = //RSA choice=1 "<<totient<<endl; 
    cout<<"\n"<<"e = //RSA choice=1 "<<e<<endl; 
    cout<<"\n"<<"d = //RSA choice=1 "<<d<<endl;
    cout<<"\n"<<"Encrypted data = //RSA choice=1 "<<c<<endl; 
    cout<<"\n"<<"Decrypted (original) data= //RSA choice=1 "<<m<<endl;
    c=pt;
  
       }
       else if(choice==2)
       {
       cout<<"Enter the key //Caesar cipher choice=2  \n"<<endl;
    cin>>key;
    cout<<"Enter the message //Caesar cipher choice=2  \n"<<endl;
    cin>>s;
    for(i=0;i<s.size();i++){
        t+=(s[i]-'A'+key)%26+'A';
    }
    cout<<"\n\nEncrypted message is //Caesar cipher choice=2 "<<t<<'\n'<<endl;
       
       }
       else{
         cout<<"Wrong input"<<endl;
       }
       times --;
   }
   
   
return 0;
}