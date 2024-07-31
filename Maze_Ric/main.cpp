#include <iostream>
#include <fstream>
#include <string.h>
#include "Maze.h"
using namespace std;

// ASSUMIAMO CHE LA POSIZIONE DI ENTRATA 
// E DI USCITA SIANO VALIDE 

int main(int argc, char const *argv[])
{
    fstream file{"matric.txt",ios::in};

    if (!file)
    {
        cerr<<" \n Errore apertura file";
        exit(EXIT_FAILURE);
    }

    int row, col;
    int** grid;

    file>> row>>col;

    grid=new int*[row];
    for(int i=0; i<row;i++)
        grid[i]= new int[col];

    for(int i=0; i<row;i++)
        for(int j=0; j<col;j++)
            file>>grid[i][j];

    Maze m{row,col,grid};
    if (m.Start())
    
        cout<<"\nIL TOPO HA OTTENUTO LA LIBERTA";
    else
        cout<<"\nIL TOPO NON HA OTTENUTO LA LIBERTA";

    std::cout<<m.toString();
    return 0;
}
