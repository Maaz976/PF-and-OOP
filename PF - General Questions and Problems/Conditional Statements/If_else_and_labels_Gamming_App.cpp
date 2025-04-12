/***************************************************************************** 
 *                      Author : Muhammad Maaz                               *
 *                       Date : 08 Oct 2024                                  *
 *         Description: This the code for a gamming app which offer          *
 *  three games. Each Game has a gamemenu and with different options.        *
 *                                                                           *
 * ***************************************************************************/








#include<iostream>
using namespace std;
int main()
{
    int option;
    MainMenu:

    cout<<"Select which Game to play"<<endl;
    cout<<"1:Snake Game"<<endl;
    cout<<"2:Car Game"<<endl;
    cout<<"3:War Game"<<endl;
    cout<<"0:Close Gamming App!"<<endl;
    cin>>option;
        if (option==1){
            cout << "***Snake Game***"<<endl;
            GameMenu:
            cout << "\n\n**Main Menu**"<<endl;
            cout << "1: Resume Game"<<endl;
            cout << "2: New Game"<<endl;
            cout << "3: Load Game"<<endl;
            cout << "4: Settings"<<endl;
            cout << "5: Exit"<<endl;
            cout << "0: go to main menu."<<endl;
            cin>>option;

                if (option==1){
                    cout<<"\n\nGame Resuming...."<<endl;
                    cout<<"Enter 0 to go to Game Menu(Press 1 to Continue): "<<endl;
                    cin>>option;

                    if (option == 0 ){
                            goto GameMenu;
                                     }
                    else cout<<"Game Resumed"<<endl;                 
                              }
                else if (option == 2){
                    cout<<"\n\nLoading New Game..."<<endl;
                    cout<<"Enter 0 to go to Game Menu(Press 1 to Continue): "<<endl;
                    cin>>option;
                    if (option == 0 ){
                            goto GameMenu;
                                     }
                    else cout<<"Game Resumed"<<endl;                 
                                     }                           
                                     
                else if (option==3){
                    LoadMenu:
                    cout<<"\n\nSelect which game to load."<<endl;
                    cout<<"1: Mission Impossible"<<endl;
                    cout<<"2:Mission Possible"<<endl;
                    cout<<"3:Mission I am possible"<<endl;
                    cout<<"4:Enter 0 to go to GameMenu."<<endl;
                    cin>>option;

                        if( option == 1 ) {
                            cout << "\n\nMission Impossible loading..."<<endl;
                            cout<<"Enter 0 to go to Game Menu.(or Press 1 to continue): "<<endl;
                            cin>>option;
                                if (option == 0 ){
                                        goto GameMenu;
                                                 }
                                else cout<<"Game Loaded"<<endl;                 
                                         }
                        else if (option == 2){
                                    PartMenu:
                                        cout<<"\n\n***Mission Possible***"<<endl;
                                        cout<<"Select part:"<<endl;
                                        cout<<"1:Part 1"<<endl;
                                        cout<<"2:Part 2"<<endl;
                                        cout<<"3:Part 3"<<endl;
                                        cout<<"Enter 0 to go to Load Menu(Press 1 to Continue.)"<<endl;
                                        cin>>option;
                                            if (option == 1){
                                                        cout<<"\n\nPart 1 Loading..."<<endl;
                                                        cout<<"Enter 0 to go to Part Menu.(or Press 1 to continue): "<<endl;
                                                        cin>>option;
                                                            if (option == 0 ){
                                                                        goto PartMenu;
                                                                             }
                                                            else cout<<"Game Loaded"<<endl;                 
                                                             }
                                            else if (option == 2){
                                                        cout<<"\n\nPart 2 Loading..."<<endl;
                                                        cout<<"Enter 0 to go to Part Menu.(or Press 1 to continue): "<<endl;
                                                        cin>>option;
                                                            if (option == 0 ){
                                                                        goto PartMenu;
                                                                             }
                                                            else cout<<"Game Loaded"<<endl;                 
                                                             } 
                                            else if (option == 3){
                                                        cout<<"\n\nPart 3 Loading..."<<endl;
                                                        cout<<"Enter 0 to go to Part Menu.(or Press 1 to continue): "<<endl;
                                                        cin>>option;
                                                            if (option == 0 ){
                                                                        goto PartMenu;
                                                                             }
                                                            else cout<<"Game Loaded"<<endl;                 
                                                             } 
                                            else if (option == 0) {
                                                            goto LoadMenu;
                                                                  } }
                        else if( option == 3 ) {
                            cout << "\n\nMission I am possible loading..."<<endl;
                            cout<<"Enter 0 to go to Part Menu.(or Press 1 to continue): "<<endl;
                            cin>>option;
                                if (option == 0 ){
                                        goto PartMenu;
                                                 }
                                else cout<<"Game Loaded"<<endl;                 
                                          }
                        else if(option == 0){
                                    goto GameMenu;
                                            }                                           
                                            } 
                if (option == 4){
                        SettingsMenu:
                            cout<<"\n\n**Settings**"<<endl;
                            cout<<"Choose one"<<endl;
                            cout<<"1:Sound Settings"<<endl;
                            cout<<"2:Graphics Settings"<<endl;
                            cout<<"3:Control Settings"<<endl;
                            cout<<"0: Back to Game Menu"<<endl;
                            cin>>option;
                                if (option == 1){
                                            cout<<"\n\n**Sound Setting**"<<endl;
                                            cout<<"Enter 0 to go to settings menu(or Press 1 to continue): ";
                                            cin>>option;
                                                if (option==0){
                                                            goto SettingsMenu;
                                                              }
                                                else {
                                                    cout<<"Sound setting Continued..."<<endl;
                                                    }              
                                                }
                                if (option == 2){
                                            cout<<"\n\n**Graphics Setting**"<<endl;
                                            cout<<"Enter 0 to go to settings menu(or Press 1 to continue): ";
                                            cin>>option;
                                                if (option==0){
                                                            goto SettingsMenu;
                                                              }
                                                else {
                                                    cout<<"graphics setting Continued"<<endl;
                                                    
                                                    }              
                                                } 
                                if (option == 3){
                                     ControlSettings:
                                            cout<<"\n\n**Control Setting**"<<endl;
                                            cout<<"Click the setting to edit"<<endl;
                                            cout<<"1:Change Direction = Arrow keys(Click to change to WASD keys.)" <<endl;
                                            cout<<"2:Auto Restart Mission = R(Click to change to F1 key)"<<endl; 
                                            cout<<"0:Go to setting menu."<<endl;
                                            cout<<"Which one to change: ";
                                            cin>>option;
                                                if (option==1){
                                                            cout<<"\n\nDirection will now change by WASD"<<endl;
                                                            cout<<"Enter 0 to go back to Control Settings"<<endl;
                                                            cin>>option;
                                                             if (option==0) {
                                                                        goto ControlSettings;
                                                                            }
                                                             else {
                                                                goto ControlSettings;  //Will goto settings whatever he enters. asking is just formality.
                                                                  }               
                                                            }
                                                else if (option==2){
                                                            cout<<"\n\nGame will now restart mission with F1 key"<<endl;
                                                            cout<<"Enter 0 to go back to Control Settings"<<endl;
                                                            cin>>option;
                                                             if (option==0) {
                                                                        goto ControlSettings;
                                                                            }
                                                             else {
                                                                goto ControlSettings;  //Will go to control settings whatever he enters. asking is just formality.
                                                                  }    
                                                                }
                                                else if(option==0){
                                                                goto SettingsMenu;
                                                                  }             
                                                
                                                     } 
                                else if(option==0) {
                                            goto GameMenu;
                                                   }                                           
                                }
        else if (option == 5){
                            cout<<"\n\nAre you Sure You want to  quit game?"<<endl;
                            cout<<"1:Go to game Menu back"<<endl;
                            cout<<"2:Continue"<<endl;
                            cin>>option;
                                if(option==1){
                                        goto GameMenu;
                                            }
                                else {
                                    goto MainMenu;
                                    }           
                            }                                                   
        }
    else if(option == 0){                              
    return 0; 
           }
}
                                                                       

                
    


   

