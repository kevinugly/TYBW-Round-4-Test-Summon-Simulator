#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    
    int characters[100];
    for(int x = 0; x < 100; x++)
    {
        if(x == 0)
        {
            characters[x] = rand() % 100 + 1;
        }
        else
        {
            bool repeat = true;
            while(repeat == true)
            {
                int num = rand() % 100 + 1;
                int rep = 0;
                for(int y = 0; y < x; y++)
                {
                    if(characters[y] == num)
                    {
                        rep++;
                    }
                }
                
                if(rep == 0)
                {
                    characters[x] = num;
                    repeat = false;
                }
            }
        }
    }
    
    cout << "How many orbs do you have? ";
    int orbs = 0;
    cin >> orbs;
    cout << endl;
    
    string fiveStars[100];
    int swag = 0;
    while(orbs >= 0)
    {
        int spend = 0;
        if(orbs >= 250)
        {
            cout << "Total orbs: " << orbs << endl;
            cout << "Do you want to do a multi or single?" << endl;
            cout << "single = 1 / multi = 2 / five stars acquired = 3 / quit = 4" << endl;
            cout << "--> ";
            cin >> spend;
            cout << endl;
        }
        else if(orbs < 250 && orbs >= 25)
        {
            cout << "Total orbs: " << orbs << endl;
            cout << "Do you want to single summon? (Not enough for multi)" << endl; 
            cout << "single = 1 / five stars acquired = 3 / quit = 4" << endl;
            cout << "--> ";
            cin >> spend;
            cout << endl;
        }
        else
        {
            cout << "Total orbs: " << orbs << endl;
            cout << "You do not have enough orbs to summon." << endl;
            cout << "five stars acquired = 3 / quit = 4" << endl;
            cout << "--> ";
            cin >> spend;
            cout << endl;
            
        }
        
        int times = 0;
        switch(spend)
        {
            case 1:
            if(orbs >= 25)
            {
                orbs = orbs - 25;
                cout << "Single Summon:" << endl;
                times = 1;
            }
            else
            {
                cout << "You do not have enough orbs for a single summon." << endl;
            }
            break;
            
            case 2:
            if(orbs >= 250)
            {
                orbs = orbs - 250;
                cout << "Multi Summon:" << endl;
                times = 10;
            }
            else
            {
                cout << "You do not have enough orbs for a multi summon." << endl;
            }
            break;
            
            case 3:
            cout << "List of Acquired Five Stars:" << endl;
            for(int x = 0; x <= swag; x++)
            {
                if(swag == 0)
                {
                    cout << "You have not acquired any five stars yet." << endl;
                }
                else
                {
                    cout << fiveStars[x] << endl;
                }
            }
            break;
            
            case 4:
            exit(0);
            break;
            
            default:
            cout << "Please enter a valid option." << endl;
        }
        
        
        for(int x = 0; x < times; x++)
        {
            int c = 0;
            int summon = rand() % 100 + 1;
            for(int x = 0; x < 100; x++)
            {
                if(characters[x] == summon)
                {
                    c = x;
                }
            }
            
            if(c >= 0 && c < 6)
            {
                int random = rand() % 12 + 1;
                switch(random)
                {
                    case 1:
                    cout << "Ichigo (Thousand-Year Blood War Bankai version)" << endl;
                    fiveStars[swag] = "Ichigo (Thousand-Year Blood War Bankai version)";
                    swag++;
                    break;
                        
                    case 2:
                    cout << "Yhwach (Thousand-Year Blood War version)" << endl;
                    fiveStars[swag] = "Yhwach (Thousand-Year Blood War version)";
                    swag++;
                    break;
                    
                    case 3:
                    cout << "Yoruichi (Thousand-Year Blood War version)" << endl;
                    fiveStars[swag] = "Yoruichi (Thousand-Year Blood War version)";
                    swag++;
                    break;
                        
                    case 4:
                    cout << "Kisuke (Thousand-Year Blood War version)" << endl;
                    fiveStars[swag] = "Kisuke (Thousand-Year Blood War version)";
                    swag++;
                    break;
                        
                    case 5:
                    cout << "Lisa (The Past version)" << endl;
                    fiveStars[swag] = "Lisa (The Past version)";
                    swag++;
                    break;
                        
                    case 6:
                    cout << "Sun-Sun" << endl;
                    fiveStars[swag] = "Sun-Sun";
                    swag++;
                    break;
                        
                    case 7:
                    cout << "Koga (Tag Team version)" << endl;
                    fiveStars[swag] = "Koga (Tag Team version)";
                    swag++;
                    break;
                        
                    case 8:
                    cout << "Izuru" << endl;
                    fiveStars[swag] = "Izuru";
                    swag++;
                    break;
                        
                    case 9:
                    cout << "Gin" << endl;
                    fiveStars[swag] = "Gin";
                    swag++;
                    break;
                        
                    case 10:
                    cout << "Grimmjow" << endl;
                    fiveStars[swag] = "Grimmjow";
                    swag++;
                    break;
                        
                    case 11:
                    cout << "Retsu (Tag Team Version)" << endl;
                    fiveStars[swag] = "Retsu (Tag Team Version)";
                    swag++;
                    break;
                        
                    case 12:
                    cout << "Rangiku (Tag Team Version)" << endl;
                    fiveStars[swag] = "Rangiku (Tag Team Version)";
                    swag++;
                    break;
                    
                }
            }
            else if(c >= 6 && c < 8)
            {
                cout << "Five Star from Premium Pool" << endl;
                fiveStars[swag] = "Five Star from Premium Pool";
                swag++;
            }
            else if(c >= 8 && c < 30)
            {
                cout << "Four Star" << endl;
            }
            else
            {
                cout << "Three Star" << endl;
            }
                
        }
        cout << endl;
    }
}

