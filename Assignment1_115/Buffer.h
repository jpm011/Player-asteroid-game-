//
//  Buffer.h
//  
//
//  Created by jay patel on 2020-01-24.
//  Copyright © 2020 jay patel. All rights reserved.
//Jay Patel
//

#ifndef Buffer_h
#define Buffer_h
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
void bufferPrint (const Buffer buff);
void bufferClear (Buffer buff);
void bufferSetCell (Buffer buff, int row, int column, char value);


 int main ();
void loadPlayer ();
void loadAsteroid ();
bool isCollision (int player_row,   int player_column,
                  int asteroid_row, int asteroid_column);


#endif /* Buffer_h */
