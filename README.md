# Smart-Elevator

Smart-Elevador-Elevator
Introduction: Nowadays, in buildings, the conventional elevators have higher waiting time, higher traveling time, more power consumption and are not so efficient. So there is a need to develop an system which reduces the above problems. we have developed an algorithm which reduces the waiting and travelling time in elevators and which automates the process of selecting the floor. we have used the concept of computer vision in this project along with the usage of Arduino microcontroller. Components and software library used: Arduino UNO microcontroller Light emitting diode (LED) Computer vision (Python library)

Conceptual framework: often times when a delivery man or any one who approaches the lift lobby should keep aside the payload which he is carrying and then have to manually select the floor.This leads to a lot of discomfort and delay in the process .Our system automates the process of selecting the floor.

How is the lift assigned to the user? When a user approces the cameras which are present in the building, the system goes through the following steps:

It checks if the user is already in the database of the lift , if yes, it assigns the floor.
If no, it recognises whether the user wants to go and then feeds it to the database.
It then assigns the lift which is going up and nearer to that floor.
What’s the system and how it works? In our system we have simulated the lift environment using a arduino board. When a person is recognised through the cameras near the lift,it first checks whether the person is present in the database of the lift.If the person is present it searches for the floor which he regularly visits at that point of time and it automatically selects the floor.If the person doesn’t exist in the database of the lift it first monitors the floor he visits daily and then registers his face in the database.


# Instructions to Run This System:
 
$ Firstly Arduino code has to be flashed/dumped into the Arduino.
 
$ Run the Python code.
