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

    std::stack<Position> path;
    Position p_ini{0,0,0};
    path.push(p_ini);
    Position p;

    while (!path.empty())
    {   
        p=path.top();
        int dir=p.dir;
        path.pop();

        while (dir<8){
            int row= p.x +Move[dir][0];
            int col=p.y + Move[dir][1];
            if((row==nrow-1) && (col==ncol-1)){
                path.push(Position(row,col,dir));
                maze[p.x][p.y]=PATH;
                while (!path.empty())
                {
                    Position pat=path.top();
                    path.pop();
                    maze[pat.x][pat.y]=PATH;
                }
                

                return true;
            }
            else {
                if(valMove(row,col)){
                    maze[row][col]=TRIED;
                    
                    p.dir=dir+1;
                    path.push(p);
                    dir=0;
                    p.x=row;
                    p.y=col;
                }
                else dir++;



            }
            
        }
        
        
    }
    
    return false;

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

bool Maze::Start_ric(int x, int y)
{
    bool done{false};
    int dir{0};
    while (dir<8)
    {
        int row=x+Move[dir][0];
        int col=y+Move[dir][1];

        if((row==nrow-1) && (col==ncol-1)){
            done=true;
            maze[x][y]=PATH;
            maze[row][col]=PATH;
            return done;
        }
        
        if(valMove(row,col)){
            maze[row][col]=TRIED;
           done= Start_ric(row,col);

            if(done){

                maze[row][col]=PATH;  // in questo modo mi segna il percorso 
                return true;
            }


        }
        else dir++;
        
    }
    return false;
    
}

bool Maze::rtraverse(int x, int y){
    if(valMove(x,y))
        return false;

    if(x==nrow-1 && y==ncol-1)
        return true;

    for (int dir = 0; dir < 8; dir++){
        if(rtraverse(x+Move[dir][0],y+Move[dir][1])){
            maze[x][y]= PATH;
            return true;
        }
        

    }
    
    
}
