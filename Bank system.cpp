#include<iostream>
#include<windows.h>
#include<fstream>


using namespace std;
ofstream file("detail.txt");
void loading(){cout<<"\n\t\t\t[ Please Wait a Moment  ]\n"<<endl;
        //Loading Bar
        	char x=61;
	        cout<<"\t\t\t   ||<"<<x;
	        Sleep(300);
	         cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(300);
	          cout<<""<<x;
	        Sleep(800);
	          cout<<""<<x;
	        Sleep(800);
	          cout<<">||";
	        Sleep(1500);
	        
}

void atm( int a,int b)
{int choice, balance=100000,dep,draw,trans;
	do{
	system("Color F0");	
	cout<<"\n\n";
	cout<<"\n\t\t\t************|--DASHBOARD--|************";
	cout<<"\n\t\t\t*                                     *";
	cout<<"\n\t\t\t*         [1]. Account Balance        *";
	cout<<"\n\t\t\t*         [2]. Withdraw               *";
	cout<<"\n\t\t\t*         [3]. Deposite               *";
	cout<<"\n\t\t\t*         [4]. Transfer               *";
	cout<<"\n\t\t\t*         [5]. Return to Dashboard    *";
	cout<<"\n\t\t\t*         [6]. Exit                   *";
    cout<<"\n\t\t\t***************************************";
    cout<<"\n\t  ENTER YOUR CHOICE: ";
    cin>>choice;
    system("cls");
    	
    switch(choice){
    	case 1:
    		cout<<"\n\t Available Account Balance is: $ "<<balance<<endl;
    		file<<"\nAvailable Balance: "<<balance<<"\t"<<endl;
    		break;
    
		case 2:
		    cout<<"\n\t Amount your want to Withdraw: $ ";
		    cin>>draw;
		    cout<<"\n\t\t\t Withdrawing Money From Your Account"<<endl;
		    loading();
		    file<<"You Have WITHDRAW ("<<draw<<")$ from Your Amount: "<<draw<<"\t"<<endl;
		    balance=balance-draw;
		    cout<<"\n\t Available Balance is: $ "<<balance<<endl;
		    break;
		    	case 3:
		    cout<<"\n\t Amount your want to Despoit: $ ";
		    cin>>dep;
		    cout<<"\n\t\t\t Deposite Money to Your Account"<<endl;
		    loading();
		    file<<"You Have Deposite ("<<dep<<")$ in Your Amount: "<<dep<<"\t"<<endl;
		    balance=balance+dep;
		    cout<<"\n\t Available Balance is: $ "<<balance<<endl;
		    
		    break;
		case 4:
			if(balance<=0){
				cout<<"No Balance Available";
				break;
			}
			else{
			cout<<"\n\t Amount your want to Transfer: $ ";
		    cin>>trans;
		    cout<<"\n\t\t\t Transfering Money  PLEASE WAIT"<<endl;
	
	        loading();
		   file<<"You Have TRANSFER ("<<dep<<")$ in Your Amount: "<<trans<<"\t"<<endl;
		    balance=balance-trans;
		    cout<<"\n\t Available Balance is: $ "<<balance<<endl;
		    break;
		    }
		case 5:
			atm(a,b);
		case 6:
			break;
		default:
			cout<<"Invalid Input"<<endl;
			break;
	}
}while(choice!=6);

	
}

int main(){
	 int a,tries=3;
	int b, choice,bal=1000;
	fstream dat;
	dat.open("data.txt");
	dat>>a>>b;
	system("Color 0F");
	cout<<"\n\n\n\t\t\t\t------------^~^WELCOME To ATM MACHINE^~^-------------\n\n\n";
	while(tries > 0){  int c,d;
        cout << "\n\n\n\t\t||ENTER CARD NUMBER||: ";
        cin >> c;
        cout<<"\n\n\n\t\t||ENTER PIN||: ";
        cin>>d;
    if(c == a &&  d== b) {
            cout << "\n\t\t\t\t\t\t||Login Successful||\n" << endl;
            file<<"Login Passed at "<<__DATE__<<__TIME__<<endl;
            loading();
            system("cls");
atm(a,b);
            break;
        }
        
        else {tries--;
            if (tries == 0){cout << "\n\t\t\t\tInvalid CARD NUMBER or PIN. Please Try Again later." << endl;
                break;}
            cout << "\n\t\t\t\tInvalid CARD NUMBER or PIN. Please Try Again. " << tries << " Tries Remaining." << endl;
             file<<"Login Failed at "<<__DATE__<<__TIME__<<endl;
        loading();
        
    }
    }
    

		

			
    dat.close();
	return 0;
}
