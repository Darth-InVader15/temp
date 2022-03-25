#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast_cin()                    \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
//              SABKA BHALA HO HO HO !!
//  PW and AW for multiple years with uniformly varying cost    
    
    int32_t main()
    {
        
        
        cout<<"Enter Years \n";
        int year;
        cin>>year;
        cout<<"Enter Rate \n";
        double rate;
        cin>>rate;
        cout<<"Enter percent increase in price \n";
        double pinc;
        cin>>pinc;
        cout<<"Enter 1st year cost \n";
        double cost;
        cin>>cost;
        double aw,pw;
        cout<<"\n \n Programmed By @Darth_InVader."<<"\n"<<"\n";

        for(int i = 1; i<=year;i++) //Darth_InVader
        {
            double newrate = 1 +(rate/100); 
            if(i>1)           
            cost *= 1+ (pinc/100); 
            
            cout<<"Cost in year "<<i<<" is "<<cost<<"\n";            
            double pwdeno = 1;
            double awdeno = 1;
            for(int j =1; j<=i; j++)
            {
                pwdeno *= (1 + (rate/100));
            }

            pw = cost/pwdeno;
            cout<<"Present Worth of year "<<i<<" is "<<pw<<"\n";
            for(int j =1; j<=i; j++)
            {
                awdeno *= (1 + (rate/100));
            }
            aw = (cost * (newrate -1))/(awdeno-1);
            cout<<"Annual Worth of year "<<i<<" is "<<aw<<"\n";
            cout<<"\n";

        }
        cout<<"@I_MiteB_InA_Gang \n";
        return 0;
    }
