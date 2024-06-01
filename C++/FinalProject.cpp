/*
Final Project ENGR 116 Recitation

Group members:
Kaila McNamara
Adeen Qureshi

Purpose/Function:
This code is designed to create a user specified to do list
that can hold up to 15 tasks over a span of 7 days.
It can track the times of each task and tell you if any overlap.
After this, it outputs one of many possible responses.

Flaws:
1. This program can break if the user enters the dates out of order
because the list of tasks will print out in a different order
than the list of dates so the times will not match the tasks.

2. If the user enters an input that is a string without proper
spelling and capitalization, the program will not work

3. The user can't enter a negative number for the string length


*/
#include <iostream>
#include <string>
using namespace std;
// cctype needed for std::tolower()
#include <cctype>

// Function to convert a string to lowercase
string toLowerCase(const string& str) 
{
    string lowerCaseStr = str;
    for (char &c : lowerCaseStr) 
    {
        c = std::tolower(c);
    }
    return lowerCaseStr;
}


int main()
{

// added a try catch block to prevent the program from crashing
    try {
        // declaration of variables

        const int MAX_TASKS = 15;
        // List with names of each task
        vector<string> A(MAX_TASKS);
        // List with names of each task subject
        vector<string> D(MAX_TASKS);
        //List of Start times for AM
        vector<int> SMA(MAX_TASKS);
        //List of Start times for PM
        vector<int> SMP(MAX_TASKS);
        //List of end times for AM
        vector<int> EMA(MAX_TASKS);
        //List of end times for pm
        vector<int> EMP(MAX_TASKS);
        //task 1 that overlaps
        int task;
        //
        int hours3 = 0;
        int min3 = 0;
        int work = 0;




    // Input
        //number of tasks that will be put in the list
        int x;
        //takes number of tasks from user
        cout << "How many tasks do you want to add? (max of 15, enter tasks in order of time)" << endl;
        cin >> x;

    // Input
        //This inputs the tasks the user enters into an array
        if (x > MAX_TASKS)
        {
            //sets number of tasks to 15 if the user enters a number that is too hard
            cout << "Maximum number of tasks is 15. Setting to 15." << endl;
            x = MAX_TASKS;
        }

        //string day tracks what day the task is on for time conversions
        string day;
        //string response tracks am or pm for time conversions
        string response;
        //int hours tracks what hour the task starts for conversions
        int hours;
        //int min tracks how many minutes into that hour the task starts for conversions
        int min;
        //int hours2 tracks the hours into the day of the end time for conversions
        int hours2;
        //int min2 tracks the number of minutes into that hour for conversions
        int min2;

    // Continued to input tasks
        for (int i = 0; i < x; i++)
        {
        // Takes each task by iterating though the loop
            cout << "Please enter the task you need to do: " << endl;
            //enters the task at position i in the array
            cin >> A[i];

    // Enters what day it is
            cout << "What day is this activity? " << endl;
            //sets day to the day that the task is
            cin >> day;
            // force day to lower case
            day = toLowerCase(day);

    // Define the start and end times of the task
            //this is the hour of the start time of the task
            cout << "What time does it start? Enter hours followed by minutes: " << endl;
            cin >> hours;
            //this is how many minutes into the hour that task starts
            cin >> min;

    // Is it AM or PM?
            cout << "AM or PM?" << endl;
            //the response will determine the value that the first response of hours and
            //minutes is given
            cin >> response;

    // Convert to minutes
            //This sets hours and minutes to entirely minutes
            //also acts as input for monday am

            int timeInMinutes = hours * 60 + min;

            /* The statements below are designed to calculate
                when the tasks are using the time in minutes into
                the week starting at midnight on sunday
            */

            if (response == "pm")
            {
                // Add 12 hours in minutes for each pm time
                timeInMinutes += 720;
            }

    // Filter the tasks by day
    //set them in increasing order by how long has elapsed since midnight sunday
            if (day == "monday")
            {
                SMA[i] = timeInMinutes;
            }

            //the 1440 means 1 day plus time in minutes from start of day has elapsed
            if (day == "tuesday")
            {
                SMA[i] = 1440 + timeInMinutes;
            }

            // the 2880 means 2 days plus time in minutes from start of day has elapsed
            if(day == "wednesday")
            {
                SMA[i] = 2880 + timeInMinutes;
            }

            //the 4320 means 3 days plus the time in minutes from start of day has elapsed
            if(day == "thursday")
            {
                SMA[i] = 4320 + timeInMinutes;
            }

            //the 5760 means 4 days plus time in minutes from start of day has elapsed
            if(day == "friday")
            {
                SMA[i] = 5760 + timeInMinutes;
            }

            //the 7200 means 5 days plus time in minutes from start of day has elapsed
            if(day == "saturday")
            {
                SMA[i] = 7200 + timeInMinutes;
            }

            //the 8640 means 6 days plus time in minutes has elapsed
            //this is the last day of the week of tasks
            else if(day == "sunday")
            {
                SMA[i] = 8640 + timeInMinutes;
            }

    // print the time the task ends
            cout << "What time does it end? Enter the number of hours followed by minutes: " << endl;
            cin >> hours2;
            cin >> min2;

            /* The statements below are designed to calculate
                when the tasks are using the time in minutes into
                the week starting at midnight on sunday
            */

            //sets everything to minutes
            timeInMinutes = hours2 * 60 + min2;

            if (response == "pm")
            {
                // Add 12 hours in minutes
                timeInMinutes += 720;
            }

            //First day of schedule so no time is added
            if (day == "monday")
            {
                EMA[i] = timeInMinutes;
            }

            //1 day added in minutes
            if (day == "tuesday")
            {
                EMA[i] = 1440 + timeInMinutes;
            }

            // Add similar conditions for other days
            //2 days added in minutes
            if(day == "wednesday")
            {
                EMA[i] = 2880 + timeInMinutes;
            }

            //3 days added in minutes
            if(day == "thursday")
            {
                EMA[i] = 4320 + timeInMinutes;
            }

            //4 days added in minutes
            if(day == "friday")
            {
                EMA[i] = 5760 + timeInMinutes;
            }

            //5 days added in minutes
            if(day == "saturday")
            {
                EMA[i] = 7200 + timeInMinutes;
            }

            //6 days added in minutes
            //last day
            else if(day == "sunday")
            {
                EMA[i] = 8640 + timeInMinutes;
            }

            cout << "What subject is this task?" << endl;
            cin >> D[i];
        }

        // Check for task overlapping
        // This is done by comparing the start and end times of the tasks

        /* This loop checks the start times from 1 to the end of array SMA
            and the end times from 0 to the end of EMA-1
            this is done because if the times overlap, the user will be unable to
            do both tasks and will have to revise the times
        */

           for (int i = 0; i < x; ++i)
           {

            for (int j = i + 1; j < x; ++j)
            {

                if (SMA[j] < EMA[i])
                {

                    cout << "Task " << i << " overlaps with Task " << j << ". Please revise the times." << endl;
                    cout << "Which task would you like to get rid of? (enter number) Task " << i << " or Task " << j << "? ";
                    cin >> task;

                    if (task == i || task == j)
                    {
                        // Shift all tasks from the chosen index one position to the left
                        for (int k = task; k < x - 1; ++k)
                        {
                            A[k] = A[k + 1];
                            D[k] = D[k + 1];
                            SMA[k] = SMA[k + 1];
                            EMA[k] = EMA[k + 1];
                        }

                        x--; // Reduce the number of tasks

                        if (task == i)
                        {
                            i--; // Adjust the outer loop counter
                        }

                        j--; // Adjust the inner loop counter
                    }

                }
            }

           }

        // Output schedules
        // Include the start and end times of the tasks
        cout << "Your schedule: " << endl;

        //1. outputs the tasks
        //2. followed by the topic
        //3. after that the start time and end time are outputted

        for (int i = 0; i < x; i++)
        {
            cout << A[i] << " - " << D[i] << " - Start: " << SMA[i] << " - End: " << EMA[i] << endl;
        }

        //calculates amount of free time left in the week

        //ask user how long each task is
        for(int j = 0; j< A.capacity(); j++)
        {
            //going through each task in the list to sum up the time
            cout<<" How long is this task? enter hours followed by minutes"<<endl;
            cin>>hours3;
            cin>>min3;

            //sums up total minutes of work
            work = work + (hours3*60 + min3);

        }

         //subtract the total number of minutes working from total time in week
        int freeTime = 10080 - work;

        //give back the time left in the week in hours and minutes
        int h = 10080/60;
        int m = 10080%60;

        cout<< "you have "<< h << "hours and " << m <<" minutes of free time" << endl;

         //if num minutes is less than 3360, not enough time to sleep 3 hrs
        if(freeTime<3360)
        {
            cout<< "You don't even have time to sleep right, chill out" << endl;
        }

         //if num minutes is between 3600 and 4020, 1 hr relaxation a day
        if(freeTime>3360 && freeTime<4020)
        {
            cout<< "You're intense."<< endl;
        }

        //lot of relaxation time, vacation
        else
        {
            cout<<"You have loads of free time. You're chillin" << endl;
        }


        // Random number between 1 and 11
        int num = rand() % 11 + 1;

        // outputs random statements as a reply
        // the switch statements paired with the random number
        // allow for each case to have a different response paired with it
        switch (num)
        {
            case 1:
                cout << "There you go, you busy blastoise!" << endl;
            break;

            case 2:
                cout << "You busy beeswax you ;)" << endl;
            break;

             case 3:
               cout << "you trapezoidal harmonica" << endl;
               break;

             case 4:
               cout << "you radiant buttercup" << endl;
               break;

             case 5:
               cout << "you malignant playstation 5" << endl;
               break;

             case 6:
               cout << "you genshin impact cutie" << endl;
               break;

             case 7:
               cout << "you watermelon annihaltor" << endl;
               break;

             case 8:
               cout << "you ecentric walnut" << endl;
               break;

             case 9:
               cout << "you homeless honeybun" << endl;
               break;

             case 10:
               cout << "you polygonal poptart" <<endl;
               break;

             case 11:
               cout << "have a good week you beautiful little twinkie ;)" << endl;
               break;
               }

        } catch (const std::exception& e) {
            cerr << "Error: " << e.what() << std::endl;
            return 1;
        }

    return 0;
}

