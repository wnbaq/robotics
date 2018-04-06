Abstract

Sparki is a great robot. Too many things can be made with Sparki. In our project, we coded Sparki to pruning thin branches at the land with flowers. We have looked a different kind of methods to wander all field and tried to apply one for this project. To pruning, we use Sparki’s grippers.With inserting scissors into Gripper, Sparki can cut flowers.Sparki stops when came into the gray area after all the land has been visited and all flowers have been pruned.
 
Chapter 1: Introduction

1.1	The Idea

We wanted Sparki visit all land and cut all flowers. We thought that we should implement this project to be run in a finite land and this land has flowers that are located at certain distances along certain roads.We think that as a land use the platform in the robotic labs and as a flower make cylindrical paper flower. Distance will be determined by Sparki’s Ultrasonic Distance Sensor. To cut flowers, we will put to Sparki’s Gripper a scissors





Chapter 2: Implementation of Project

2.1 Original Suggestion

Our original proposal for the project was using a different method than the method we have implemented in the end our project to travel all land. We assumed that Sparki is standing inside of land and in front of flower at first.Sparki planned to prune the flower in front then wander around and do the same for the other flowers. When there are no flowers in front of Sparki, it will go to the other road and prune the flowers in there.
 We then tried to do this suggestion. However, we realize that follow the flower’s path with Sparki was not a good idea. We gave up this idea because the path where the flowers are planted could be rough and the Sparki could not go on the rugged roads. Also , we could not succeed in writing the code of this idea. This way we could not go around the whole area and cut the flowers.

2.2 Reconsidered and Implemented Method

We changed our method. Instead of following the path of the flowers, we would have followed the path between the lanes where the flowers were located.

Sparki started to wander around from the beginning of the path.Firstly control the right side of path and then when it detect a flowers, turning to the flower and opening and closing the Grippper until the flower in front disappears. Opening and closing Gripper is pruning the flower because mount the scissors to them.After cutting the flower, Sparki continue to move through path. 
When it detects to flower do same procedure until saw an obstacle(wall) in front of its. It means that this path has come to an end and Sparki needs to cross the other path. Because of we cut flowers on the right side, Sparki should turn left and go straight to find a new path. This time the flowers on the left side will start cutting until came into the wall and then turn right find uncut flowers. In this way, we will cut off the flowers all over the area and go out of the area with the space on the field, and Sparki will understand that the entire area is wandered.

Chapter 3:

Problems:

1.	Which made it difficult to find the optimum cutting process. We have described many plants and scissors for this.
2.	It saw it as an obstacle when the scissor was too big, but it was doing the best cutting with big scissors.
3.	The small scissor was not able to complete the cutting process, but the sparky could not perceive it as an obstacle.
4.	At the end we wanted to complete a small scissors and a small block.
5.	Another problem that sparki is experiencing is that sometimes sparki can not see the obstacles. This problem can also be solved by continuing to wait after pinging the side.
6.	Sparki was doing the cutting process by continuing until the obstacle disappeared. However, sometimes he saw the flower and could not catch his body, so even if he did not cut the body, he was still cutting. After detecting this error he repeated the cutting 5 times even if the obstacle was not gone.


You can see how he cuts in the following photographs, in this example the big scissors were used and the red parts that after the cutting, it saw under continued to be regarded as an obstacle.



"#robotics #sparki #prunning" 
