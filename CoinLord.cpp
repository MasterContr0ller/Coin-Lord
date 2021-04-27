#include <iostream>
#include <string>
#include <unistd.h>
#define RESET "\033[0m"
#define BLACK   "\033[30m" 
#define RED     "\033[31m" 
#define GREEN   "\033[32m" 
#define YELLOW  "\033[33m" 
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BBLACK   "\033[90m"    
#define BRED "\033[91m"  
#define BGREEN "\033[92m"  
#define BYELLOW "\033[93m"  
#define BBLUE "\033[94m"  
#define BMAGENTA "\033[95m"
#define BCYAN "\033[96m"  
#define BWHITE "\033[97m"  



using namespace std;

int main()
{   
    unsigned int microsecond = 1000000;
    string gamename = "Coin Lord, ";
    string gamename2 = "Coin Lord";
    string founder = "#7683";
    string Developer = "Giannis Kolotripidis#5055";
    cout << "This is a foundation of "<< "\033[31;4m" << founder <<"\033[0m"<<"and development of "<< "\033[31;4m" << Developer <<"\033[0m"<<endl;
    cout << "Loading.." <<endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<BRED<< "10%"<<RESET<< endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<BRED<< "20%"<<RESET<< endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<BRED<< "30%"<<RESET<< endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<BRED<< "40%"<<RESET<< endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<YELLOW<< "50%"<<RESET<< endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<YELLOW<< "60%"<<RESET<< endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<YELLOW<< "70%"<<RESET<< endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<GREEN<< "80%"<<RESET<< endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<GREEN<< "90%"<<RESET<< endl;
    usleep(2 * microsecond);//sleeps for 3 second
    cout <<GREEN<< "100%"<<RESET<< endl;
    usleep(3 * microsecond);//sleeps for 3 second
    cout << "Welcome to "<< gamename << gamename2 <<" Is a game all about earning coins!"<< endl;
    usleep(1 * microsecond);//sleeps for 3 second
    cout << "A "<< "\033[31;4m"<<"C++ Compiler"<<RESET<<" is required to run Coin Lord"<< endl;
    usleep(1 * microsecond);//sleeps for 3 second
    cout << "What do you have to do is to simply type a number"<< endl;
    usleep(1 * microsecond);//sleeps for 3 second
    int wallet = 0;
    cout <<"\033[91;4m" <<"DO NOT FORGET!"<<RESET<<"Your current wallet balance is "<<"\033[94m"<< wallet<<"$"<<RESET<<endl;
    usleep(1 * microsecond);//sleeps for 3 second
    int e;
    cout << "1. Search for Coins" << endl;
    cout << "2. Find a job for coins"<<endl;
    cout << "3. Beg for coins"<<endl;
    cout << "4. Check Stats"<<endl;
    cin >> e;
    int wallet_f = 0;
    if(e == 1){
        int wallet_f = wallet_f + 127 ;
        cout << "You searched the road and found " <<"\033[94m"<< wallet_f << "$"<<RESET<<" !" << endl;
        usleep(15 * microsecond);//sleeps for 3 second
        cout << "Now your current balance is " <<"\033[94m"<< wallet_f <<"$" <<RESET<< endl ;
    } 
    else if (e == 2){
        int jobs;
        cout <<"\033[96;4m"<< "Available jobs"<<RESET<<endl;
        usleep(2 * microsecond);//sleeps for 3 second
        cout<< "1.YouTuber"<< endl;
        cout <<"2.Banker"<<endl;
        cout <<"3.Engineer"<<endl;
        cin >> jobs;
        if (jobs == 1){
            string yo;
            cout << "You are now a youtuber!"<< endl;
            usleep(1 * microsecond);//sleeps for 3 second
            cout << "Type in work in all caps to start working"<< endl;
            cin >> yo;
            if (yo == "WORK"){
                cout << "Working..";
                usleep(3 * microsecond);
                cout << "For your first task you need to type in UPLOADTHEVIDEOS in all caps, no spaces"<< endl;
                usleep(3 * microsecond);
                cout << "If you don't do the task correctly, you lose your job"<< endl;
                string hello;
                cout << "Type";
                cin >> hello;
                if(hello == "UPLOADTHEVIDEOS"){
                    usleep(3 * microsecond);
                    cout << "Success! you completed the task."<< endl;
                    int salary_y = wallet + 20 ;
                    cout << "You have received 20$."<<endl;
                    cout << "Here is your current balance."<<"\033[94m"<< salary_y<<RESET<<endl;
                }else{
                    usleep(3 * microsecond);
                    cout <<"You failed to do your tasks properly, and lost your job."<< endl;
                    int salara_l = wallet - 50 ; 
                    cout << "You owe your boss 50$."<<endl;
                    cout << "Here is your current balance." <<"\033[94m"<< salara_l<<RESET<<endl;
                }
            }
        }
        if (jobs == 2){
            cout << "To receive your salary you have to wait a minute."<<endl;
            cout << "Be patient your salary is almost ready."<<endl;
            usleep(60 * microsecond);
            int salary_b = wallet + 750 ; 
            cout <<"You just received your 750$."<<endl;
            cout << "Here is your current balance." <<"\033[94m"<< salary_b<<RESET<<endl;
            
        }
        if (jobs == 3){
            cout << "Welcome to your office!"<<endl;
            cout << "You have to design a new building."<<endl;
            cout << "Be quick the customer cannot wait."<< endl;
            usleep(2*microsecond);
            cout << "Here are some questions you have to answer so as to finish quicker and receive your salary."<<endl;
            cout << "Wrong answers will lead you to lower salary."<<endl;
            cout << "Good luck! (Type your answers with the letter only, no caps)."<<endl;
            string answer_1;
            string answer_2;
            string answer_3;
            string answer_4;
            int salary_e1;
            int salary_e2;
            int salary_e3;
            int salary_e4;
            usleep(3*microsecond);
            cout <<"\033[95;4m"<<"Question 1"<<RESET<< endl;
            cout <<"How many poles does a house need?" << endl;
            usleep(1.5*microsecond);
            cout <<"a) 1"<< endl;
            usleep(1.5*microsecond);
            cout <<"b) 2"<< endl;
            usleep(1.5*microsecond);
            cout <<"c) 3"<< endl;
            usleep(1.5*microsecond);
            cout <<"d) 4"<< endl;
            cin >> answer_1;
                if(answer_1 == "d"){
                    int salary_e1 =  50 ;
                }
                else{
                    int salary_e1 =  0; 
                }
            cout <<"\033[95;4m"<<"Question 2"<<RESET<< endl;
            cout <<"Do you need a toilet in the house?"<< endl;
            usleep(1.5*microsecond);
            cout <<"a) Yes" << endl;
            usleep(1.5*microsecond);
            cout <<"b) No" << endl;
            usleep(1.5*microsecond);
            cout << "c) Maybe" << endl;
            usleep(1.5*microsecond);
            cout << "d) Ofcourse not"<< endl;
            cin >> answer_2;
                if (answer_2 == "a"){
                    int salary_e2 =  20;
                    
                }
                else{
                    int salary_e2 =  0; 
                }
            cout<<"\033[95;4m"<<"Question 3"<<RESET<<endl;
            cout<<"What materials do you need to build the walls in a windy place?"<<endl;
            usleep(1.5*microsecond);
            cout<<"a) Cotton"<<endl;
            usleep(1.5*microsecond);
            cout<<"b) Wood"<<endl;
            usleep(1.5*microsecond);
            cout<<"c) Steel"<<endl;
            usleep(1.5*microsecond);
            cout<<"d) Bricks"<<endl;
            cin >> answer_3;
                if (answer_3 == "c"){
                    int salary_e3 = 20;
                    
                }
                else if (answer_3 == "d"){
                    int salary_e3 =  35;
                }
                else{
                    int salary_e3 =  0; 
                }
            cout << "Last question and we are done!";
            usleep(2*microsecond);
            cout<<"\033[95;4m"<<"Question 4"<<RESET<<endl;
            cout<<"Which fussil fuel is more efficient?"<<endl;
            usleep(1.5*microsecond);
            cout<<"a) Wood"<<endl;
            usleep(1.5*microsecond);
            cout<<"b) Petrol Oil"<<endl;
            usleep(1.5*microsecond);
            cout<<"c) Gas"<<endl;
            usleep(1.5*microsecond);
            cout<<"d) Tar Sands"<<endl;
            cin >> answer_4;
                if (answer_4 == "c"){
                    int salary_e4 = 50;
                    
                }
                else if (answer_4 == "b"){
                    int salary_e4 =  15;
                }
                else{
                    int salary_e4 =  0; 
                }
            int total_salary = wallet + salary_e1 + salary_e2 + salary_e3 +salary_e4;
            cout<<"You have finished with the questions."<<endl;
            cout << "Here is your earnings " <<"\033[94m"<< total_salary << "$"<<RESET<<endl;
        }
    }
    else if (e == 3){
        string answer;
        cout << "Say please and you will earn some coins"<< endl;
        cin >> answer;
        if (answer == "please"){
            cout << "you are so kind" << endl;
            int wallet1 = wallet ;
            int wallet = wallet + rand() % 50 + 1 ;
            int earn = wallet1 - wallet;
            cout << "You have earned "<<"\033[94m"<< earn << "$"<<RESET<< endl;
        }
        else {
            cout << "Next time be more polite"<< endl ;
            cout << "Current balance"<<"\033[94m"<< wallet <<RESET<< endl;
        }
    }
    else if (e == 4){
        string bitcoin = "56.895,55$";
        string ethereum = "2.105,43$";
        string litecoin = "182,86$";
        cout << "Current stock prices" <<endl; 
        cout << "Bitcoin " << bitcoin << endl;
        cout <<"Ethereum " << ethereum <<endl; 
        cout <<"LiteCoin " << litecoin <<endl;
    }
    else {
        cout << "Invalid operation or you didn't type in a number"<< endl;
    }

}

