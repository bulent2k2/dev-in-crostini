#include<iostream>
//#include<windows.h>
using namespace std;

void ciz1();
void ciz2();
void ciz3();

int main(){
    
    int x,s;
    
    cout << "kac kutucuk istersin : ";
    cin>>x;
    
    if(x%3==0){
    
        s=x/3;
        while(s>0){
            ciz3();
            s--;
        }
    
    }else{
    
        s=x/3;
        while(s>0){
            ciz3();
            s--;
        }
        
        if((x%3)==1) 
        ciz1();
        else if((x%3)==2) 
        ciz2();
        
    }
}

void ciz1(){
    
    char alan[16][9];
    
    for(int x=0;x<16;x++){
        for(int y=0;y<9;y++){
        
        alan[x][y]=' ';
        
    }
    }
    
    for(int x=1;x<14;x++){
        
        alan[x][1]='O';
        alan[x][7]='O';
        
    }
    
    for(int y=1;y<8;y++){
        
        alan[1][y]='O';
        alan[13][y]='O';
        
    }
    
    alan[7][4]='#';
    
    for(int y=0;y<9;y++){
    
        for(int x=0;x<16;x++){
        cout<<alan[x][y];
        }
    if(y!=8)    
    cout<<"\n";
    }
    
}

void ciz2 (){
    
    char alan[32][9];
    
    for(int x=0;x<32;x++){
        for(int y=0;y<9;y++){
        
        alan[x][y]=' ';
        
    }
    }
    
    for(int x=1;x<14;x++){
        
        alan[x][1]='O';
        alan[x][7]='O';
        
    }
    
    for(int y=1;y<8;y++){
        
        alan[1][y]='O';
        alan[13][y]='O';
        
    }
    
    for(int x=17;x<30;x++){
        
        alan[x][1]='O';
        alan[x][7]='O';
        
    }
    
    for(int y=1;y<8;y++){
        
        alan[17][y]='O';
        alan[29][y]='O';
        
    }
    
    alan[7][4]='#';
    alan[23][4]='#';
    
    for(int y=0;y<9;y++){
    
        for(int x=0;x<32;x++){
        cout<<alan[x][y];
        }
    if(y!=8)    
    cout<<"\n";
    }
    
}

void ciz3(){
    
    char alan[49][9];
    
    for(int x=0;x<49;x++){
        for(int y=0;y<9;y++){
        
        alan[x][y]=' ';
        
    }
    }
    
    for(int x=1;x<14;x++){
        
        alan[x][1]='O';
        alan[x][7]='O';
        
    }
    
    for(int y=1;y<8;y++){
        
        alan[1][y]='O';
        alan[13][y]='O';
        
    }
    
    for(int x=17;x<30;x++){
        
        alan[x][1]='O';
        alan[x][7]='O';
        
    }
    
    for(int y=1;y<8;y++){
        
        alan[17][y]='O';
        alan[29][y]='O';
        
    }
    
    for(int x=33;x<46;x++){
        
        alan[x][1]='O';
        alan[x][7]='O';
        
    }
    
    for(int y=1;y<8;y++){
        
        alan[33][y]='O';
        alan[45][y]='O';
        
    }
    
    alan[7][4]='#';
    alan[23][4]='#';
    alan[39][4]='#';
    
    for(int y=0;y<9;y++){
    
        for(int x=0;x<49;x++){
        cout<<alan[x][y];
        }
    if(y!=8)    
    cout<<"\n";
    }
    
}