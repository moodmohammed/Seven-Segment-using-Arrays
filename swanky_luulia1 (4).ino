byte pin[7]={3,//a
             2,//b
             8,//c
             7,//d
             6,//e
             4,//f
             5};//g
byte seven[10][7]={{1,1,1,1,1,1,0},//0
                   {0,1,1,0,0,0,0},//1
                   {1,1,0,1,1,0,1},//2
                   {1,1,1,1,0,0,1},//3
                   {0,1,1,0,0,1,1},//4
                   {1,0,1,1,0,1,1},//5
                   {1,0,1,1,1,1,1},//6
                   {1,1,1,0,0,0,0},//7 
                   {1,1,1,1,1,1,1},//8
                   {1,1,1,1,0,1,1}};//9  
  void setup(){
for(int i=0;i<sizeof(pin);i++)
pinMode(pin[i], OUTPUT);
} 
void loop(){
  for(int i=0;i<10;i++){
    for(int j=0;j<7;j++){
    digitalWrite(pin[j],seven[i][j]);
     }delay(1000);
   }
}