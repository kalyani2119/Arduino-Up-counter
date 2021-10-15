# Arduino-Up-counter
Build an Arduino Up Counter and display the result on a single digit 7-segment display.
#include<sevensegment.h>
sevensegment tep = Seven Segment (0, 1, 2, 3, 4, 5, 6);
char arr [10] = {‘0′,’1′,’2′,’3′,’4′,’5′,’6′,’7′,’8′,’9’};
int index;
void setup ()
{
index = 0;
}
void loop(){
tep.display(arr[index++]);
delay(1000);
if(index == 11)
index = 0;
}
