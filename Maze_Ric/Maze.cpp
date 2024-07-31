#include "Maze.h"
#include <stack>


Maze::Maze(int nr, int nc , int**grid): nrow{nr},ncol{nc} {

    maze=new int*[nrow];
    for(int i=0; i<nrow;i++)
        maze[i]= new int[ncol];

    for(int i=0; i<nrow;i++)
        for(int j=0; j<ncol;j++)
            maze[i][j]=grid[i][j];

}

Maze::~Maze()
{
    for(int i=0; i<nrow;i++)
        delete [] maze[i];

    delete [] maze;  
}

bool Maze::valMove(int r, int c){
    if(r>=0&& c>=0 && r<nrow && c<ncol )
        if(maze[r][c]==1)
            return true;
        
    return false;
}




bool Maze::Start(){



}

std::string Maze::toString()
{
    std::string result{"\n"};

    for (int row = 0; row < nrow; row++)
    {
        for (int col = 0; col < ncol; col++)
        {
            if (maze[row][col]==PATH)
            {
                result+="P";
            }
            else if(maze[row][col]==TRIED)
                result+="T";
            else
                result+="0";
            
        }
            result+="\n";
        
    }
    return result;   
}
