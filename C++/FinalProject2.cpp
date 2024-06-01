//1. takes strings and time objects and arranges them by subject or time

//1b. can try to have user input their own subjects "Max of 15"

//1c. Have the program look for any overlaps and give you the ones that overlap

//Plan- you need all of the details of each input in arrays. this one as large as 15x3

 

#include <iostream>

#include <string>

using namespace std;

 

//create Time class before using

//do not need a subject class, can just use strings.

 

/*

void sortTimes(int arr[x])

{

    //x = size of array

    //int arr[] will be the array that I add into here

 

    //find smallest and largest values and move them to ends

 

    for(int i = 0; i<x; i++) //this loops through

    {

 

    }

}

*/

 

int main()

{
 //This outputs the list of tasks

 for(int a = 0; a<sizeof(A); a++)
 {
    cout << "Your task"<< a <<"is" << A[a] << endl;
 }
 //outputs subjects of each task

 for(int b=0; b<sizeof(D); b++)
 {
     cout << "The task subject of task"<<b<< "is" << D[b] << endl;
 }

 //outputs times

    int x; //sets how many tasks user wants to enter, max of 15

    cout<< "How many tasks do you want to add? (max of 15, enter tasks in order of time)"<< endl;

    cin>>x;

    string A [x]; // name of task

    string D [x]; //subject of task

    int SMA [x]; //start time am

    int SMP [x]; //start time pm

    int EMA [x]; //end time am

    int EMP [x]; //end time pm

    int hours = 0;

        int min = 0;

        int hours2 = 0;

        int min2 = 0;

       //need to track number of ams and pms each day

        int Mam = 0;

        int Mpm = 0;

        int Tam = 0;

        int Tpm = 0;

        int Wam = 0;

        int Wpm = 0;

        int Tham = 0;

        int Thpm = 0;

        int Fam = 0;

        int Fpm = 0;

        int Sam = 0;

        int Spm = 0;

        int Suam = 0;

        int Supm = 0;

        string day;

        string response;

    //enters all data
    int c = 0; 
    for(int i= 0; i<x; i++)

    {
        cout<<"Please enter the task you need to do (enter tasks in order)"<< endl;

        cin>> A[c];

        //handles time
        cout<<"What day is this activity?"<<endl;

        cin>>day;

        cout<<"What time does it start? enter hours followed by minutes"<<endl;

        cin>> hours;

        cin>> min;

 

        cout<< "am or pm?"<<endl;

        cin>>response;

 
        if(day == "monday")
        {
         if (response == "am")
         {
            Mam = Mam + 1;

            SMA [c] =  (hours * 60) + min; //hours and minutes (used for calculations later)
         }

          if(response == "pm")
          {
            Mpm = Mpm + 1;

            SMP [c] = 720 + (hours*60) + min;
          }

        }

        cout<<"What time does it end? enter the number of hours followed by minutes"<<endl;

        cin>> hours2;

        cin>> min2;

         if (response == "am")
        {
            EMA [c] =  (hours * 60) + min; //hours and minutes (used for calculations later)
        }

        if(response == "pm")
        {

            EMP [c] = 720 + (hours*60) + min;
        }

    }

    if(day == "tuesday")
    {
         if (response == "am")
         {
            Tam = Tam +1;

            SMA [c] =  1440 + (hours * 60) + min; //hours and minutes (used for calculations later)
         }

          if(response == "pm")
          {
            Tpm = Tpm + 1;

            SMP [c] = 1440+ 720 + (hours*60) + min;
          }

        cout<<"What time does it end? enter the number of hours followed by minutes"<<endl;

        cin>> hours2;

        cin>> min2;


        if (response == "am")
        {
            EMA [c] = 1440+ (hours * 60) + min; //hours and minutes (used for calculations later)
        }

 

        if(response == "pm")
        {
            EMP [c] = 1440+ 720 + (hours*60) + min;
        }

    }

 

    if(day == "Wednesday")
     {

         if (response == "am")
         {
            Wam = Wam + 1;

            SMA [c] =  2880 + (hours * 60) + min; //hours and minutes (used for calculations later)
         }

          if(response == "pm")
          {
            Wpm = Wpm + 1;

            SMP [c] = 2880 + 720 + (hours*60) + min;
          }

        cout<<"What time does it end? enter the number of hours followed by minutes"<<endl;

        cin>> hours2;

        cin>> min2;

        if (response == "am")
        {
            EMA [c] =  2880+ (hours * 60) + min; //hours and minutes (used for calculations later)
        }

        if(response =="pm")
        {

            EMP [c] = 2880+ 720 + (hours*60) + min;

        }

     }

 

        if(day == "Thursday")
        {

         if (response == "am")
         {
            Tham = Tham + 1;

            SMA [c] =  4320 + (hours * 60) + min; //hours and minutes (used for calculations later)
         }

        if(response == "pm")
        {
            Thpm = Thpm + 1;

            SMP [c] = 4320 + 720 + (hours*60) + min;
        }

        cout<<"What time does it end? enter the number of hours followed by minutes"<<endl;

        cin>> hours2;

        cin>> min2;


        if (response == "am")
        {
            EMA [c] =  4320 + (hours * 60) + min; //hours and minutes (used for calculations later)
        }

        if(response =="pm")
        {
            EMP [c] = 4320 + 720 + (hours*60) + min;
        }

      }

        if(day == "Friday")

        {
         if (response == "am")
         {
            Fam = Fam + 1;

            SMA [c] =  5760 + (hours * 60) + min; //hours and minutes (used for calculations later)
         }

          if(response == "pm")
          {
            Fpm = Fpm + 1;

            SMP [c] = 5760 + 720 + (hours*60) + min;
          }

        cout<<"What time does it end? enter the number of hours followed by minutes"<<endl;

        cin>> hours2;

        cin>> min2;

        if (response == "am")
        {
            EMA [c] =  5760 + (hours * 60) + min; //hours and minutes (used for calculations later)
        }

        if(response =="pm")
        {
            EMP [c] = 5760 + 720 + (hours*60) + min;
        }

      }

 

        if(day == "Saturday")
        {
         if (response == "am")
         {
            Sam = Sam + 1;

            SMA [c] =  7200 + (hours * 60) + min; //hours and minutes (used for calculations later)
         }

          if(response == "pm")
          {
            Spm = Spm+1;

            SMP [c] = 7200 + 720 + (hours*60) + min;
          }

        cout<<"What time does it end? enter the number of hours followed by minutes"<<endl;

        cin>> hours2;

        cin>> min2;


        if (response == "am")
        {
            EMA [c] =  7200 + (hours * 60) + min; //hours and minutes (used for calculations later)
        }

        if(response =="pm")
        {
            EMP [c] = 7200 + 720 + (hours*60) + min;
        }

     }
         if(day == "Sunday")

        {

         if (response == "am")

         {

            Suam = Suam +1;

            SMA [c] =  8640 + (hours * 60) + min; //hours and minutes (used for calculations later)

         }

 

          if(response == "pm")

          {

            Supm = Supm +1;

            SMP [c] = 8640 + 720 + (hours*60) + min;

          }

       

 

        cout<<"What time does it end? enter the number of hours followed by minutes"<<endl;

        cin>> hours2;

        cin>> min2;

 

         if (response == "am")

        {

            EMA [c] =  8640 + (hours * 60) + min; //hours and minutes (used for calculations later)

        }

 

        if(response =="pm")

        {

            EMP [c] = 8640 + 720 + (hours*60) + min;

        }

        }

 

        cout<< "What subject is this task?"<<endl;

        cin>> D[c];
        c = c+1; 
    

 
    int j = 0; 
    while( j< sizeof(SMA) ||  j < sizeof(EMA) ) //set j less than length of either SMA or EMA

     //bounds set at x-1 bc you do not need to check the last position in list

     //and will get an out of bounds error if you try

    {

        if(SMA[j+1]<EMA[j])

        {

            string ans;

            cout<< "The " << j << "task overlaps with the " << j+1 << "task";

            cout<< "please get rid of one of the tasks or revise the times" <<endl;

            cout<<endl;

           

            cout<< "would you like to change the times or delete one of the tasks?"<<endl;

            cin>>ans;

            if(ans == "change time")

            {

            //changes the end time of the task at position j

            cout<<"what is the new end time of task "<<j<< endl;

            cin>>EMA[j];

            cout<<endl;

            //changes the start time of the task at position j+1

            cout<< "what is the new start time of task " << j+1 << endl;

            }

 

            if(ans == "delete task")

            {

                int ans2;

                cout<< "Would you like to delete task "<< j<< "or task "<< j+1<< endl;

                cin>>ans2;

 

                if(ans2 == j)

                //inside this if statement put code to delete position j in task list

                //and to delets the start and end time of position j

                //decrement j by 1 so that the loop goes over it again to

                //check if new info is valid

                {

 

                }

 

                if(ans2 == j+1)

                //put code to delete position j+1

                //decrement by 0(this is bc it has to check if this is valid but

                {

                   

                }

 

            }

 

        }

 

    }

 

    //outputs

 

   

   cout << "your monday schedule is: " << endl;

   //output task list A from 0 to Mam+Mpm. Same with other days.

   //output subjects in order from 0 to Mam+Mpm. Same with other days

   for (int i=0; i < Mam; i++) {

    cout << A[i] << "   " < D[i] << "   " << SMA[i] << endl;

   }

  for (int i=0; i < Mpm; i++) {

     cout << A[i+Mam] << "   " < D[i+Mam] << "   " << SMP[i] << endl;

  }

  cout << "your tuesday schedule is: " << endl;

  for (int i=0; i< Tam; i++) {

    cout << A[i + Mam + Mpm] << "   " << D[i + Mam + Mpm] << endl;

  }

  for (int i=0; i< Tpm; i++) {

    cout << A[i + Mam + Mpm + Tam] << "   " << D[i + Mam + Mpm + Tam] << endl

  }

  cout << "your wednesday schedule is: " << endl;

  for (int i=0; i< Wam; i++) 
    {

    cout << A[i + Mam + Mpm + Tam + Tpm] << "   " << D[i + Mam + Mpm + Tam + Tpm] << endl;

    }

    for (int i=0; i< Wpm; i++) {

    cout << A[i + Mam + Mpm + Tam + Wam] << "   " << D[i + Mam + Mpm + Tam + Wam] << endl;

  }

    cout << "your thursday schedule is: " << endl;

    for (int i=0; i< Tham; i++) {

    cout << A[i + Mam + Mpm + Tam + Wam+Wpm] << "   " << D[i + Mam + Mpm + Tam + Wam + Wpm] << endl;

  }

    for (int i=0; i< Thpm; i++) {

    cout << A[i + Mam + Mpm + Tam + Wam + Tham] << "   " << D[i + Mam + Mpm + Tam + Wam +Tham] << endl;

  }

    cout << "your friday schedule is: " << endl;

    for (int i=0; i< Fam; i++) {

    cout << A[i + Mam + Mpm + Tam + Wam + Tham+ Thpm] << "   " << D[i + Mam + Mpm + Tam + Wam +Tham + Thpm] << endl;

  }

    for (int i=0; i< Fpm; i++) {

    cout << A[i + Mam + Mpm + Tam + Wam + Tham + Thpm + Fam] << "   " << D[i + Mam + Mpm + Tam + Wam +Tham + Thpm +Fam] << endl;

  }

    cout << "your saturday schedule: " << endl;

    for (int i=0; i< Sam; i++) {

    cout << A[i + Mam + Mpm + Tam + Wam + Tham + Thpm + Fam+ Fpm] << "   " << D[i + Mam + Mpm + Tam + Wam +Tham + Thpm +Fam +Fpm] << endl;

  }

  for (int i=0; i< Spm; i++) {

    cout << A[i + Mam + Mpm + Tam + Wam + Tham + Thpm + Fam +Sam] << "   " << D[i + Mam + Mpm + Tam + Wam +Tham + Thpm +Fam +Sam] << endl;

  }

    cout << "your sunday schedule is: " << endl;

 for (int i=0; i< Suam; i++) {

    cout << A[i + Mam + Mpm + Tam + Wam + Tham + Thpm + Fam +Sam +Spm] << "   " << D[i + Mam + Mpm + Tam + Wam +Tham + Thpm +Fam +Sam+ Spm] << endl;

  }

   for (int i=0; i< Supm; i++) {

    cout << A[i + Mam + Mpm + Tam + Wam + Tham + Thpm + Fam +Sam + Suam] << "   " << D[i + Mam + Mpm + Tam + Wam +Tham + Thpm +Fam +Sam +Suam] << endl;

  }

  // use a switch statement to choose these at random

  //set equal to a random number

  int num = 1;

  switch(num)

  {

  case 1:

    cout << "there you go you busy blastoise" << endl;

  case 2:

    cout << "you busy beeswax you ;)" << endl;

    break;

  case 3:

    cout << "you trapezoidal harmonica" << end;

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

}

 