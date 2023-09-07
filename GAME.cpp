
#include<bits/stdc++.h>

using namespace std;
char space [3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int col;
bool tie=false;
char token='x';
string n1="";
string n2="";


void functionone(){
   

cout<<"    |     |    "<<endl;
cout<<" "<<space[0][0]<< "  |  "<<space[0][1]<<"  |   "<< space[0][2]<<endl;
cout<<"    |     |    "<<endl;
cout<<"..............."<<endl;
cout<<"    |     |    "<<endl;
cout<<" "<<space[1][0]<< "  |  "<<space[1][1]<<"  |   "<< space[1][2]<<endl;
cout<<"    |     |    "<<endl;
cout<<"..............."<<endl;
cout<<"    |     |    "<<endl;
cout<<" "<<space[2][0]<< "  |  "<<space[2][1]<<"  |   "<< space[2][2]<<endl;
cout<<"    |     |    "<<endl;

}

void functiontwo(){
int digit;
if(token=='x'){
cout<<"Please enter"<<endl;
cin>>digit;
}
if(token=='O'){
    cout<<"Please enter"<<endl;
    cin>>digit;
}
if(digit==1){
row=0;col=0;
}
if(digit==2){
row=0;col=1;
}
if(digit==3){
row=0;col=2;
}
if(digit==4){
row=1;col=0;
}
if(digit==5){
row=1;col=1;
}if(digit==6){
row=1;col=2;
}if(digit==7){
row=2;col=0;
}if(digit==8){
row=2;col=1;
}if(digit==9){
row=2;col=2;
}
else if(digit<1 || digit>9){
    cout<<"INVALID !!!!"<<endl;
}
 
        if(token=='x' && space[row][col] !='x' && space[row][col] !='O'){
            space[row][col]='x';
            token='O';
        }      
    
        else if(token=='O' && space[row][col] !='x' && space[row][col] !='O'){
              space[row][col]='O';
              token='x';
        }
        else {
            cout<<"SPACE IS ALREADY FILLED"<<endl;
        functiontwo();
        }
    
 
 functionone();

}
 
 bool functionthree(){
    bool tie;
         for(int i=0;i<3;i++){
                if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]== space[1][i]&& space[0][i]==space[2][i]){
               return true;
                }
              if((space[0][0]==space[1][1] && space[1][1]==space[2][2]) ||(space[0][2]==space[1][1]&&space[1][1]==space[2][0])){
                return true;
                }
         }
        
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
              if(space[i][j]!='x' && space[i][j]!='O'){
                return false;
            }
            }
        
        }
             tie=false;
             return false;
         }
        
         
         
 

int main(){
    bool tie;
     cout<<"Enter the name of player1"<<endl;
    cin>>n1;
    cout<<"Enter the name of Player2"<<endl;
    cin>>n2;
   
    while(!(functionthree())){
        functionone();
        functiontwo();
        functionthree();

    } 
if( (token =='x') && (tie ==false)) {
    cout<<n2 <<" WINS!!"<<endl;
}   
else if((token=='O') && (tie==false)){
    cout<<n1 <<" wins!!"<<endl;
}
else{
  cout<<"IT's A DRAW!!"<<endl;
} 
}
