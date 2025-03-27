#include "assignment.h"

assignment::assignment(string Title, string Desc, int Maxscore){
    title = Title;
    desc = Desc;
    maxscore = Maxscore;
}

void assignment::displayinfo(){
    cout << "assignment" << title << "\ndescreption:" << desc << "\n max score:" << maxscore << endl;
}