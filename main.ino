#include <SoftwareSerial.h>
#include <Adafruit_NeoPixel.h>

int allLeds = 169;
int allLeds2 = 117;

Adafruit_NeoPixel a_block = Adafruit_NeoPixel(326, 2, NEO_RGB + NEO_KHZ800);
Adafruit_NeoPixel b_block = Adafruit_NeoPixel(allLeds, 3, NEO_RGB + NEO_KHZ800);
int bright = 150;

SoftwareSerial bluetooth(0, 1);

void setup() {
  a_block.begin();
  b_block.begin();
  Serial.begin(9600);
  bluetooth.begin(9600);

  a_block.clear();
  b_block.clear();
}

long lastBlock = "<";
long lastEntrance = "1";
long lastFloor;
long res;

void loop() {
  res = (bluetooth.read());

  switch (res){
    case '_':
      a_block.clear();
      for (int i = 0; i < 326; i++) {
        a_block.setBrightness(bright);
        a_block.setPixelColor(i, a_block.Color(0, 0, 0));
        a_block.show();
      }
    case 'D':
      a_block.clear();
      for (int i = 0; i < 326; i++) {
        if(i % 4 == 0){
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'v':
      a_block.clear();
      for (int i = 0; i < 326; i++) {
        a_block.setBrightness(bright);
        a_block.setPixelColor(i, a_block.Color(255, 255, 150));
        a_block.show();
      }
      break;
    case '<':
      lastBlock = '<';
      a_block.clear();
      for (int i = 0; i < 169; i++) {
        a_block.setBrightness(bright);
        a_block.setPixelColor(i, a_block.Color(255, 255, 150));
        a_block.show();
      }
      break;
    case '>':
      lastBlock = '>';
      a_block.clear();
      for (int i = 169; i < 300; i++) {
        a_block.setBrightness(bright);
        a_block.setPixelColor(i, a_block.Color(255, 255, 150));
        a_block.show();
      }
      break;
    case '1':
      a_block.clear();
      lastEntrance = "1";
      if(lastBlock == '<'){
        for (int i = 0; i < 78; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }else{

      }
      break;
    case '2':
      a_block.clear();
      lastEntrance = "2";
      if(lastBlock == '<'){
        for (int i = 78; i < 169; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }else {

      }
      break;
    case 'a':
      a_block.clear();
      b_block.clear();
      lastFloor = "1";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 0; i < 6; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 78; i < 85; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 169; i < 179; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'b':
      a_block.clear();
      lastFloor = "2";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 6; i < 12; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 85; i < 92; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 179; i < 189; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'c':
      a_block.clear();
      lastFloor = "3";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 12; i < 18; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 92; i < 99; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 189; i < 199; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      
      break;
    case 'd':
      a_block.clear();
      lastFloor = "4";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 18; i < 24; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 99; i < 106; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 199; i < 209; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'e':
      a_block.clear();
      lastFloor = "5";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 24; i < 30; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 106; i < 113; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 209; i < 219; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'f':
      a_block.clear();
      lastFloor = "6";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 30; i < 36; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 113; i < 120; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 219; i < 229; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'g':
      a_block.clear();
      lastFloor = "7";
      
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 36; i < 42; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 120; i < 127; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 229; i < 239; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'h':
      a_block.clear();
      lastFloor = "8";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 42; i < 48; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 127; i < 134; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 239; i < 249; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'i':
      a_block.clear();
      lastFloor = "9";
     
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 48; i < 54; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 134; i < 141; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 249; i < 259; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'j':
      a_block.clear();
      lastFloor = "10";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 54; i < 60; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 141; i < 148; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 259; i < 269; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'k':
      a_block.clear();
      lastFloor = "11";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 60; i < 66; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 148; i < 155; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 269; i < 279; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }
      break;
    case 'l':
      a_block.clear();
      lastFloor = "12";
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 66; i < 72; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 155; i < 162; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 279; i < 289; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      }

      break;
    case 'm':
      a_block.clear();
      lastFloor = "13";

      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          for (int i = 72; i < 78; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          for (int i = 162; i < 169; i++) {
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        for (int i = 289; i < 299; i++) {
          a_block.setBrightness(bright);
          a_block.setPixelColor(i, a_block.Color(255, 255, 150));
          a_block.show();
        }
      break;

    case '4':
      a_block.clear();
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          if(lastFloor == "1"){
            for (int i = 0; i < 2; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "2"){
            for (int i = 6; i < 8; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "3"){
            for (int i = 12; i < 14; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "4"){
            for (int i = 18; i < 20; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "5"){
            for (int i = 24; i < 26; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "6"){
            for (int i = 30; i < 32; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "7"){
            for (int i = 36; i < 38; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "8"){
            for (int i = 42; i < 44; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "9"){
            for (int i = 48; i < 50; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "10"){
            for (int i = 54; i < 56; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "11"){
            for (int i = 60; i < 62; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "12"){
            for (int i = 66; i < 68; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "13"){
            for (int i = 72; i < 74; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }
        }else{
          if(lastFloor == "1"){
            for (int i = 78; i < 80; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "2"){
            for (int i = 85; i < 87; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "3"){
            for (int i = 92; i < 94; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "4"){
            for (int i = 99; i < 101; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "5"){
            for (int i = 106; i < 108; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "6"){
            for (int i = 113; i < 115; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "7"){
            for (int i = 120; i < 122; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "8"){
            for (int i = 127; i < 129; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "9"){
            for (int i = 134; i < 136; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "10"){
            for (int i = 141; i < 143; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "11"){
            for (int i = 148; i < 150; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "12"){
            for (int i = 155; i < 157; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "13"){
            for (int i = 162; i < 164; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }
        }
      }else {
        if(lastFloor == "1"){
          for(int i = 169; i < 172; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "2"){
          for(int i = 179; i < 182; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "3"){
          for(int i = 189; i < 192; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "4"){
          for(int i = 199; i < 202; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "5"){
          for(int i = 209; i < 212; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "6"){
          for(int i = 219; i < 222; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "7"){
          for(int i = 229; i < 232; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "8"){
          for(int i = 239; i < 242; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "9"){
          for(int i = 249; i < 252; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "10"){
          for(int i = 259; i < 262; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "11"){
          for(int i = 269; i < 272; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "12"){
          for(int i = 279; i < 282; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "13"){
          for(int i = 289; i < 292; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }
      break;
    case '5':
      a_block.clear();
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          if(lastFloor == "1"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(2, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "2"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(8, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "3"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(14, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "4"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(20, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "5"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(26, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "6"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(32, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "7"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(38, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "8"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(44, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "9"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(50, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "10"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(56, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "11"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(62, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "12"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(68, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "13"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(74, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          if(lastFloor == "1"){
            for (int i = 80; i < 82; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
            }else if(lastFloor == "2"){
              for (int i = 87; i < 89; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "3"){
              for (int i = 94; i < 96; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "4"){
              for (int i = 101; i < 103; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "5"){
              for (int i = 108; i < 110; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "6"){
              for (int i = 115; i < 117; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "7"){
              for (int i = 122; i < 124; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "8"){
              for (int i = 129; i < 131; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "9"){
              for (int i = 136; i < 138; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "10"){
              for (int i = 143; i < 145; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "11"){
              for (int i = 150; i < 152; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "12"){
              for (int i = 157; i < 159; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
            }else if(lastFloor == "13"){
              for (int i = 164; i < 166; i++) {
                a_block.setBrightness(bright);
                a_block.setPixelColor(i, a_block.Color(255, 255, 150));
                a_block.show();
              }
          }
        }
      }else {
        if(lastFloor == "1"){
          for(int i = 169+3; i < 171+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "2"){
          for(int i = 179+3; i < 181+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "3"){
          for(int i = 189+3; i < 191+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "4"){
          for(int i = 199+3; i < 201+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "5"){
          for(int i = 209+3; i < 211+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "6"){
          for(int i = 219+3; i < 221+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "7"){
          for(int i = 229+3; i < 231+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "8"){
          for(int i = 239+3; i < 241+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "9"){
          for(int i = 249+3; i < 251+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "10"){
          for(int i = 259+3; i < 261+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "11"){
          for(int i = 269+3; i < 271+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "12"){
          for(int i = 279+3; i < 281+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "13"){
          for(int i = 289+3; i < 291+3; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }
      break;
    case '6':
      a_block.clear();
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          if(lastFloor == "1"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(3, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "2"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(9, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "3"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(15, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "4"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(21, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "5"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(27, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "6"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(33, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "7"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(39, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "8"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(45, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "9"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(51, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "10"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(57, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "11"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(63, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "12"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(69, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "13"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(75, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else{
          if(lastFloor == "1"){
            for(int i = 82; i < 84; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "2"){
            for(int i = 89; i < 91; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "3"){
            for(int i = 96; i < 98; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "4"){
            for(int i = 103; i < 105; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "5"){
            for(int i = 110; i < 112; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "6"){
            for(int i = 117; i < 119; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "7"){
            for(int i = 124; i < 126; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "8"){
            for(int i = 131; i < 133; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "9"){
            for(int i = 138; i < 140; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "10"){
            for(int i = 145; i < 147; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "11"){
            for(int i = 152; i < 154; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "12"){
            for(int i = 159; i < 161; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "13"){
            for(int i = 166; i < 168; i++){
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }
        }
      }else {
        if(lastFloor == "1"){
          for(int i = 169+5; i < 171+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "2"){
          for(int i = 179+5; i < 181+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "3"){
          for(int i = 189+5; i < 191+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "4"){
          for(int i = 199+5; i < 201+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "5"){
          for(int i = 209+5; i < 211+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "6"){
          for(int i = 219+5; i < 221+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "7"){
          for(int i = 229+5; i < 231+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "8"){
          for(int i = 239+5; i < 241+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "9"){
          for(int i = 249+5; i < 251+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "10"){
          for(int i = 259+5; i < 261+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "11"){
          for(int i = 269+5; i < 271+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "12"){
          for(int i = 279+5; i < 281+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "13"){
          for(int i = 289+5; i < 291+5; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }
      break;
    case '7':
      a_block.clear();
      if(lastBlock == '<'){
        if(lastEntrance == "1"){
          if(lastFloor == "1"){
            for (int i = 4; i < 6; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "2"){
            for (int i = 10; i < 12; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "3"){
            for (int i = 16; i < 18; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "4"){
            for (int i = 22; i < 24; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "5"){
            for (int i = 28; i < 30; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "6"){
            for (int i = 34; i < 36; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "7"){
            for (int i = 40; i < 42; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "8"){
            for (int i = 46; i < 48; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "9"){
            for (int i = 52; i < 54; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "10"){
            for (int i = 58; i < 60; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "11"){
            for (int i = 64; i < 66; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "12"){
            for (int i = 70; i < 72; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }else if(lastFloor == "13"){
            for (int i = 76; i < 78; i++) {
              a_block.setBrightness(bright);
              a_block.setPixelColor(i, a_block.Color(255, 255, 150));
              a_block.show();
            }
          }
        }else{
          if(lastFloor == "1"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(84, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "2"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(91, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "3"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(98, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "4"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(105, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "5"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(112, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "6"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(119, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "7"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(126, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "8"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(133, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "9"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(140, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "10"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(147, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "11"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(154, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "12"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(161, a_block.Color(255, 255, 150));
            a_block.show();
          }else if(lastFloor == "13"){
            a_block.setBrightness(bright);
            a_block.setPixelColor(168, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }else{
        if(lastFloor == "1"){
          for(int i = 176; i < 179; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "2"){
          for(int i = 186; i < 189; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "3"){
          for(int i = 196; i < 199; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "4"){
          for(int i = 206; i < 209; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "5"){
          for(int i = 216; i < 219; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "6"){
          for(int i = 226; i < 229; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "7"){
          for(int i = 236; i < 239; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "8"){
          for(int i = 246; i < 249; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "9"){
          for(int i = 256; i < 259; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "10"){
          for(int i = 266; i < 269; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "11"){
          for(int i = 276; i < 279; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "12"){
          for(int i = 286; i < 289; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }else if(lastFloor == "13"){
          for(int i = 296; i < 299; i++){
            a_block.setBrightness(bright);
            a_block.setPixelColor(i, a_block.Color(255, 255, 150));
            a_block.show();
          }
        }
      }
      break;
    }
  }
}