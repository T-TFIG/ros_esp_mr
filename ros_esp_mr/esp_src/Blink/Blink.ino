/* 
 * rosserial Subscriber Example
 * Blinks an LED on callback
 */

#include <ros.h>
#include <std_msgs/Empty.h>

ros::NodeHandle  nh;
int LED = 26;

void messageCb( const std_msgs::Empty& toggle_msg){
  digitalWrite(LED, HIGH-digitalRead(LED);   // blink the led
}

ros::Subscriber<std_msgs::Empty> sub("toggle_led", &messageCb );

void setup()
{ 
  pinMode(LED, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}

void loop()
{  
  nh.spinOnce();
  delay(1);
}
