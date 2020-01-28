//
//  Bigmain.cpp
//
//
//  Created by jay patel on 2020-01-24.
//  Copyright © 2020 jay patel. All rights reserved.
//Jay Patel
//
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
const int BUFFER_ROW_COUNT  =   20;
  const int BUFFER_COLUMN_COUNT =   60;
  const char BUFFER_EMPTY = '.';
const char BUFFER_BORDER = '#';
int row;
int column;

typedef char BUFFER[BUFFER_ROW_COUNT][BUFFER_COLUMN_COUNT];
  BUFFER buff;

void bufferClear(BUFFER buff)
{
   
    for(int i = 0; i<BUFFER_ROW_COUNT; i++)
    {
        for(int j = 0; j<BUFFER_COLUMN_COUNT; j++)
        {
           buff[i][j]= BUFFER_EMPTY;
            
        } cout<<endl;
    }
}
    

void bufferPrint( const BUFFER buff)
{
    
    
    {for(int i = 0; i<BUFFER_COLUMN_COUNT+1; i++)
    {      cout<<BUFFER_BORDER;
        
    }cout<<endl;
    }
    {  for(int i=0; i<BUFFER_ROW_COUNT;i++)
            
        {cout<<BUFFER_BORDER;
            for(int j = 0; j<BUFFER_COLUMN_COUNT-1; j++)
            {
            cout<<buff[i][j];//add code for first and last line for the border
           
           }cout<<BUFFER_BORDER<<endl;
        }
    }
        
            { for(int i = 0; i<BUFFER_COLUMN_COUNT+1; i++)
           {      cout<<BUFFER_BORDER;}
            }
        }


void bufferSetCell ( BUFFER buff, int row, int column, char value)
{
    buff[row][column]=value;
  
}
 void loadAsteroid()
    {
     row=3;
      column=4;
        
        
     
        ifstream infile;
    infile.open("asteroid.txt");
    if(!infile)
    {
        cout<<"File player unable to open";
        exit(0);
            }
   

    string line1;
      
         char imageAsteroid[row][line1.length()];
          
        
    while(getline(infile, line1))
      {
      
                                 
          for(int i=0;i<1;i++)
          {
              for(int j=0;j<line1.length();j++)
              {
                  
            imageAsteroid[i][j] = line1[j];
                                cout << imageAsteroid[i][j];
   //was unable to access imageAsteroid array outside this function
              }
          }cout<<endl;
         
          
      }
   
    infile.close();
   
           }
 

void loadPlayer()
{
     column = 9;
      row = 4;
    
    ifstream infile;
      infile.open("player.txt");
         if(!infile)
         {
             cout<<"File player unable to open";
             exit(0);
                 }
         cout<<endl;

    string line;
    char imagePlayer[row][line.length()];
         while(getline(infile, line))
           {
               for(int i=0;i<1;i++)
               {
                   for(int j=0;j<line.length();j++)
                   {
                       
             imagePlayer[i][j] = line[j];
                       buff[i][j] = imagePlayer[i][j];
    //was unable to access imagePlayer array outside this function
                    
                   }
               }cout<<endl;
           }
    
    infile.close();
    
}
bool isCollision (int player_row, int player_column,int asteroid_row, int asteroid_column)

{
 //   if(player_row == asteroid_row || player_column==asteroid_column )
   if(player_row==20||player_column==20)
    {
        return true;
    }
    else
    {
      
    
        return false;
    }
    
}

int main()
{
    BUFFER my_buffer;
    bufferClear(my_buffer);
   bufferPrint(my_buffer);
    cout<<endl;
  row=10;
    column=2;
   
   for(int i=10;i<row;i++)
      {
          for(int j = 1; j<column; j++)
          {
         //     my_buffer[i][j]=imagePlayer[i][j];
        //was not able to access imagePlayer array
       
          }cout<<endl;
            
      }
   
    
  //  loadAsteroid();
   
    int counter = 0;
    int i=1, j=1;
    
   while(counter<10)
   {
     //  ClearScreen();
      system ("clear");
       system("cls");
       char ans;
          cout<<"next?";
          cin>>ans;
       if (ans =='q')
       {
             cout<<"Game Over";
           exit(0);
       }
       else{
           
       
    if(ans=='w')
    {
       
        
        bufferSetCell(my_buffer,10-i,4,'\\');
        bufferSetCell(my_buffer,10-i, 8,'/');
        bufferSetCell(my_buffer,11-i,0,'C');
        bufferSetCell(my_buffer,11-i,1,'-');
        bufferSetCell(my_buffer,11-i,2,'<');
        bufferSetCell(my_buffer,11-i,3,'_');
        bufferSetCell(my_buffer,11-i,4,'L');
        bufferSetCell(my_buffer,11-i,5,'_');
        bufferSetCell(my_buffer,11-i,6,'>');
        bufferSetCell(my_buffer,11-i,7,'/');
        bufferSetCell(my_buffer,12-i,0,'C');
        bufferSetCell(my_buffer,12-i,1,'=');
        bufferSetCell(my_buffer,12-i,2,'=');
        bufferSetCell(my_buffer,12-i,3,'=');
        bufferSetCell(my_buffer,12-i,4,'=');
        bufferSetCell(my_buffer,12-i,5,'+');
        bufferSetCell(my_buffer,12-i,6,'+');
        bufferSetCell(my_buffer,12-i,7,'\\');
        bufferSetCell(my_buffer,13-i,8,'\\');
        
             bufferSetCell(my_buffer, 5, 30-j,'/');
             bufferSetCell(my_buffer, 5, 31-j,'-');
             bufferSetCell(my_buffer, 5, 32-j,'-');
             bufferSetCell(my_buffer, 5, 33-j,'\\');
             bufferSetCell(my_buffer, 6, 30-j,'|');
             bufferSetCell(my_buffer, 6, 31-j,'X');
             bufferSetCell(my_buffer, 6, 32-j,'X');
             bufferSetCell(my_buffer, 6, 33-j,'|');
             bufferSetCell(my_buffer, 7, 30-j,'\\');
             bufferSetCell(my_buffer, 7, 31-j,'-');
             bufferSetCell(my_buffer, 7, 32-j,'-');
             bufferSetCell(my_buffer, 7, 33-j,'/');
        
        counter ++;
        i=i+1;
        j=j+4;
     //   bufferPrint(my_buffer);
     
    }
    else if(ans=='s')
    {
       
                bufferSetCell(my_buffer,10+i,4,'\\');
                bufferSetCell(my_buffer,10+i, 8,'/');
                bufferSetCell(my_buffer,11+i,0,'C');
                bufferSetCell(my_buffer,11+i,1,'-');
                bufferSetCell(my_buffer,11+i,2,'<');
                bufferSetCell(my_buffer,11+i,3,'_');
                bufferSetCell(my_buffer,11+i,4,'L');
                bufferSetCell(my_buffer,11+i,5,'_');
                bufferSetCell(my_buffer,11+i,6,'>');
                bufferSetCell(my_buffer,11+i,7,'/');
                bufferSetCell(my_buffer,12+i,0,'C');
                bufferSetCell(my_buffer,12+i,1,'=');
                bufferSetCell(my_buffer,12+i,2,'=');
                bufferSetCell(my_buffer,12+i,3,'=');
                bufferSetCell(my_buffer,12+i,4,'=');
                bufferSetCell(my_buffer,12+i,5,'+');
                bufferSetCell(my_buffer,12+i,6,'+');
                bufferSetCell(my_buffer,12+i,7,'\\');
                bufferSetCell(my_buffer,13+i,8,'\\');
        
             bufferSetCell(my_buffer, 5, 30-j,'/');
             bufferSetCell(my_buffer, 5, 31-j,'-');
             bufferSetCell(my_buffer, 5, 32-j,'-');
             bufferSetCell(my_buffer, 5, 33-j,'\\');
             bufferSetCell(my_buffer, 6, 30-j,'|');
             bufferSetCell(my_buffer, 6, 31-j,'X');
             bufferSetCell(my_buffer, 6, 32-j,'X');
             bufferSetCell(my_buffer, 6, 33-j,'|');
             bufferSetCell(my_buffer, 7, 30-j,'\\');
             bufferSetCell(my_buffer, 7, 31-j,'-');
             bufferSetCell(my_buffer, 7, 32-j,'-');
             bufferSetCell(my_buffer, 7, 33-j,'/');
        i=i+1;
        j=j+3;
        counter++;
        
       // bufferPrint(my_buffer);
    }
    bufferPrint(my_buffer);
       isCollision(i, j, i, j);
   }
   }
    return 0;
    }
 


