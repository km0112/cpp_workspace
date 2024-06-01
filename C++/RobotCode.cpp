//Navigation code 

//robot's previous location 


//vector of robot
//a)if no previous 
    //x & y will be coordinates given by Lidar sensor

    x = testCollector[0];
    y = testCollector[1];
  
    int curX = x - 0; 
    int curY = y - 0; 
//b)if previous 
    x = testCollector[0];
    y = testCollector[1]; 
    //(a,b) are previous coords of robot 
    int vectorX = x - a; 
    int vectorY = y - b; 

    
//destination of target: inputted by user, will be called (t1,t2) 

//vector from current destination to robot: current destinations will be called (cur1,cur2)
int desVectorX = t1-cur1; 
int desVectorY = t2-cur2;

//find angle between them 
float top = (x-a)(t1-cur1) + (y-b)(t2-cur2); 
float bottom = sqrt((x-a)^2+(y-b)^2) * sqrt((t1-cur1)^2+(t2-cur2)^2); 
double angle = acos(top/bottom); //this returns radians 
double degrees = angle * 180/PI; 

//use angle to tell robot how much to turn using value for 1 degree of turning multiplied by how much turn is needed 
//degreesPerSec determined experimentally using time for 1/4 turn divided by 
float turnTime = angle * degreesPerSec; 
//turn by that much

//go forward 
motor1.write(0);
motor2.write(0); 

//check if vectors are aligned every so often

//if not, check degrees off and turn in the necessary direction

//keep repeating until you reach target 

