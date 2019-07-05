#include <Morse.h>
Morse morse(13);//以13号管脚自带LED显示莫尔斯电码
void setup()
{
Serial.begin(9600);//设置波特率
}
void loop()
{
if(Serial.available()>0)//防止当串口没有发送时乱码
{
 char ch=Serial.read();//读取值
  switch(ch)//各字母莫尔斯电码
  {
    case 'a':
    morse.dot();
    morse.dash();
    break;
    case 'b':
    morse.dash();
    morse.dot();morse.dot();
    morse.dot();
    break;
    case 'c':
    morse.dash();
    morse.dot();morse.dash();
    morse.dot();
    break;
    case 'd':
    morse.dash();
    morse.dot();morse.dot();
    break;
    case 'e':
    morse.dot();
    break;
    case 'f':
    morse.dot();
    morse.dot();morse.dash();
    morse.dot();
    break;
    case 'g':
    morse.dash();morse.dash();
    morse.dot();
    break;
    case 'h':
    morse.dot();
    morse.dot();morse.dot();
    morse.dot();
    break;
    case 'i':
    morse.dot();
    morse.dot();
    break;
    case 'j':
    morse.dot();
    morse.dash();morse.dash();
    morse.dash();
    break;
    case 'k':
    morse.dash();morse.dot();
    morse.dash();
    break;
    case 'l':
    morse.dot();
    morse.dash();morse.dot();
    morse.dot();
    break;
    case 'm':
    morse.dash();
    morse.dash();
    break;
    case 'n':
    morse.dash();morse.dot();
    break;
    case 'o':
    morse.dash();morse.dash();
    morse.dash();
    break;
    case 'p':
    morse.dot();
    morse.dash();morse.dash();
    morse.dot();
    break;
    case 'q':
    morse.dash();
    morse.dash();morse.dot();
    morse.dash();
    break;
    case 'r':
    morse.dot();
    morse.dash();morse.dot();
    break;
    case 's':
    morse.dot();
    morse.dot();morse.dot();
    break;
    case 't':
    morse.dash();
    break;
    case 'u':
    morse.dot();morse.dot();
    morse.dash();
    break;
    case 'v':
    morse.dot();
    morse.dot();morse.dot();
    morse.dash();
    break;
    case 'w':
    morse.dot();
    morse.dash();
    morse.dash();
    break;
    case 'x':
    morse.dash();
    morse.dot();morse.dot();
    morse.dash();
    break;
    case 'y':
    morse.dash();
    morse.dot();morse.dash();
    morse.dash();
    break;
    case 'z':
    morse.dash();
    morse.dash();morse.dot();
    morse.dot();
    break;
   
  }

}
}
