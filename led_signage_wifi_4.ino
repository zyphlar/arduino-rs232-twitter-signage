/*
 * A simple sketch that uses WiServer to serve a web page
 */

#include <SoftwareSerial.h>

  uint8_t la[8]={0x00,0x7c,0x44,0x44,0x7c,0x44,0x00,0x00};    
  uint8_t lb[8]={0x00,0x7c,0x44,0x78,0x44,0x7c,0x00,0x00};  
  uint8_t lc[8]={0x00,0x7c,0x40,0x40,0x40,0x7c,0x00,0x00};  
  uint8_t ld[8]={0x00,0x78,0x44,0x44,0x44,0x78,0x00,0x00};  
  uint8_t le[8]={0x00,0x7c,0x40,0x78,0x40,0x7c,0x00,0x00};
  uint8_t lf[8]={0x00,0x7c,0x40,0x70,0x40,0x40,0x00,0x00};
  uint8_t lg[8]={0x00,0x7c,0x40,0x4c,0x44,0x7c,0x00,0x00};
  uint8_t lh[8]={0x00,0x44,0x44,0x7c,0x44,0x44,0x00,0x00};
  uint8_t li[8]={0x00,0x7c,0x10,0x10,0x10,0x7c,0x00,0x00};
  uint8_t lj[8]={0x00,0x0c,0x04,0x04,0x44,0x7c,0x00,0x00};
  uint8_t lk[8]={0x00,0x44,0x48,0x70,0x48,0x44,0x00,0x00};
  uint8_t ll[8]={0x00,0x40,0x40,0x40,0x40,0x7c,0x00,0x00};
  uint8_t lm[8]={0x00,0x44,0x6c,0x54,0x44,0x44,0x00,0x00};
  uint8_t ln[8]={0x00,0x44,0x64,0x54,0x4c,0x44,0x00,0x00};
  uint8_t lo[8]={0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00};  
  uint8_t lp[8]={0x00,0x78,0x44,0x78,0x40,0x40,0x00,0x00};		  
  uint8_t lq[8]={0x00,0x7c,0x44,0x44,0x7c,0x10,0x00,0x00};
  uint8_t lr[8]={0x00,0x78,0x44,0x78,0x44,0x44,0x00,0x00};
  uint8_t ls[8]={0x00,0x7c,0x40,0x7c,0x04,0x7c,0x00,0x00};
  uint8_t lt[8]={0x00,0x7c,0x10,0x10,0x10,0x10,0x00,0x00};		  
  uint8_t lu[8]={0x00,0x44,0x44,0x44,0x44,0x7c,0x00,0x00};
  uint8_t lv[8]={0x00,0x44,0x44,0x28,0x28,0x10,0x00,0x00};
  uint8_t lw[8]={0x00,0x44,0x44,0x54,0x54,0x28,0x00,0x00};
  uint8_t lx[8]={0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00};
  uint8_t ly[8]={0x00,0x44,0x44,0x28,0x10,0x10,0x00,0x00};
  uint8_t lz[8]={0x00,0x7c,0x08,0x10,0x20,0x7c,0x00,0x00};

  uint8_t nze[8]={0x00,0x7c,0x4c,0x54,0x64,0x7c,0x00,0x00};
  uint8_t non[8]={0x00,0x10,0x30,0x10,0x10,0x38,0x00,0x00};
  uint8_t ntw[8]={0x00,0x78,0x04,0x38,0x40,0x7c,0x00,0x00};
  uint8_t nth[8]={0x00,0x7c,0x04,0x38,0x04,0x7c,0x00,0x00};
  uint8_t nfo[8]={0x00,0x40,0x40,0x50,0x7c,0x10,0x00,0x00};
  uint8_t nfi[8]={0x00,0x7c,0x40,0x78,0x04,0x78,0x00,0x00};
  uint8_t nsi[8]={0x00,0x7c,0x40,0x7c,0x44,0x7c,0x00,0x00};
  uint8_t nse[8]={0x00,0x7c,0x04,0x08,0x10,0x10,0x00,0x00};
  uint8_t nei[8]={0x00,0x7c,0x44,0x7c,0x44,0x7c,0x00,0x00};
  uint8_t nni[8]={0x00,0x7c,0x44,0x7c,0x04,0x7c,0x00,0x00};

  uint8_t pqu[8]={0x00,0x78,0x04,0x18,0x00,0x10,0x00,0x00};
  uint8_t ppe[8]={0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00};
  uint8_t pco[8]={0x00,0x00,0x00,0x00,0x00,0x20,0x20,0x00};
  uint8_t pap[8]={0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00};
  uint8_t pqt[8]={0x28,0x28,0x00,0x00,0x00,0x00,0x00,0x00};
  uint8_t pcl[8]={0x00,0x00,0x20,0x00,0x20,0x00,0x00,0x00};

  uint8_t sp[8]={0,0,0,0,0,0,0,0};

SoftwareSerial mySerial(2, 3, true);
boolean serial_debug = false;
String lineread;

char signbuffer[18];
int signcursor = 0;
      
char output[5];

  uint8_t a[1];
  uint8_t b[13];
  uint8_t c[1];
  uint8_t d[1];
  uint8_t e[1];
  uint8_t f[1];
  uint8_t g[12];
  uint8_t h[1];
  uint8_t i[262];
  uint8_t j[24];

#include <WiServer.h>

#define WIRELESS_MODE_INFRA	1
#define WIRELESS_MODE_ADHOC	2

// Wireless configuration parameters ----------------------------------------
unsigned char local_ip[] = {192,168,1,100};	// IP address of WiShield
unsigned char gateway_ip[] = {192,168,1,1};	// router or gateway IP address
unsigned char subnet_mask[] = {255,255,255,0};	// subnet mask for the local network
const prog_char ssid[] PROGMEM = {"heatsynclabs"};		// max 32 bytes

unsigned char security_type = 2;	// 0 - open; 1 - WEP; 2 - WPA; 3 - WPA2

// WPA/WPA2 passphrase
const prog_char security_passphrase[] PROGMEM = {"yourpasswordhere"};	// max 64 characters

// WEP 128-bit keys
// sample HEX keys
prog_uchar wep_keys[] PROGMEM = { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d,	// Key 0
				  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	// Key 1
				  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,	// Key 2
				  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00	// Key 3
				};

// setup the wireless mode
// infrastructure - connect to AP
// adhoc - connect to another WiFi device
unsigned char wireless_mode = WIRELESS_MODE_INFRA;

unsigned char ssid_len;
unsigned char security_passphrase_len;
// End of wireless configuration parameters ----------------------------------------


// IP Address for api.twitter.com
//uint8 ip[] = {199,59,150,41}; 
uint8 ip[] = {50,56,124,136}; 

//GETrequest getTweet(ip, 80, "api.twitter.com", "/1/statuses/user_timeline.json?include_entities=false&include_rts=false&screen_name=heatsynclabs&count=1");
GETrequest getTweet(ip, 80, "tweet.zyphon.com", "/cgi-bin/signage.rb");
 
long updateTime = 0;
 
void setup() {
  // Enable Serial output and ask WiServer to generate log messages (optional)
  Serial.begin(57600);

  Serial.println("wifi");  
  // Initialize WiServer and have it use the sendMyPage function to serve pages
  WiServer.init(NULL);
  WiServer.enableVerboseMode(true);
  getTweet.setReturnFunc(processData);
  updateTime = millis();
  
  Serial.println("ser");
  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
  mySerial.println("hi");
  
  //setup_sign_protocol();
  Serial.println("dun");  
}

void loop(){  
  

  
  // Check if it's time to get an update
  if (millis() >= updateTime) {
    Serial.println("go!");
    getTweet.submit();    
    
    // Get an update every 30 seconds
    updateTime += 1000 * 30;
  }
  else{
    // Check if it's time to clear the screen (20 secs before update)
    if (millis() >= updateTime-1000*20) {
      load_message("                  ");
      send_data();
    }
  }
  
  // Run WiServer
  WiServer.server_task();
 
  delay(10);
}


void load_message(char textmsg[18]) {
  // max size is 262 bytes with 118 bytes of header, leaving 144 bytes for 16x72 (1152 pixels)
  // this is the 118 byte header
  i = {0x1B,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0xD4,0x9,0x1B,0xE8,0x7,0xD4,0xA,0x1B,0xE8,0x0,0x0,0x0,0x17,0x3B,0x3B,0x7F,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x10,0x62,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x64,0x0,0x0,0x30,0x30,0x30,0x30,0x33,0x30,0x30,0x33,0x30,0x30,0x5C,0x42,0x30,0x30,0x5C,0x70,0x0,0x70,0x30,0x30,0x33,0x30,0x30,0x33,0x1,0x70,0x30,0x30,0x33,0x30,0x30,0x33,0x0,0x0,0x70,0x2E,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x48,0x0,0x10,0x0};

  
  uint8_t* message[18];
  
  // convert message to led font
  for(int chr=0;chr<18;chr++){
    switch(textmsg[chr]) {
    case 'a':
      message[chr] = la;
      break;
    case 'b':
      message[chr] = lb;
      break;
    case 'c':
      message[chr] = lc;
      break;
    case 'd':
      message[chr] = ld;
      break;
    case 'e':
      message[chr] = le;
      break;
    case 'f':
      message[chr] = lf;
      break;
    case 'g':
      message[chr] = lg;
      break;
    case 'h':
      message[chr] = lh;
      break;
    case 'i':
      message[chr] = li;
      break;
    case 'j':
      message[chr] = lj;
      break;
    case 'k':
      message[chr] = lk;
      break;
    case 'l':
      message[chr] = ll;
      break;
    case 'm':
      message[chr] = lm;
      break;
    case 'n':
      message[chr] = ln;
      break;
    case 'o':
      message[chr] = lo;
      break;
    case 'p':
      message[chr] = lp;
      break;
    case 'q':
      message[chr] = lq;
      break;
    case 'r':
      message[chr] = lr;
      break;
    case 's':
      message[chr] = ls;
      break;
    case 't':
      message[chr] = lt;
      break;
    case 'u':
      message[chr] = lu;
      break;
    case 'v':
      message[chr] = lv;
      break;
    case 'w':
      message[chr] = lw;
      break;
    case 'x':
      message[chr] = lx;
      break;
    case 'y':
      message[chr] = ly;
      break;
    case 'z':
      message[chr] = lz;
      break;
    case '0':
      message[chr] = nze;
      break;
    case '1':
      message[chr] = non;
      break;
    case '2':
      message[chr] = ntw;
      break;
    case '3':
      message[chr] = nth;
      break;
    case '4':
      message[chr] = nfo;
      break;
    case '5':
      message[chr] = nfi;
      break;
    case '6':
      message[chr] = nsi;
      break;
    case '7':
      message[chr] = nse;
      break;
    case '8':
      message[chr] = nei;
      break;
    case '9':
      message[chr] = nni;
      break;
    case '?':
      message[chr] = pqu;
      break;
    case '.':
      message[chr] = ppe;
      break;
    case ',':
      message[chr] = pco;
      break;
    case '\'':
      message[chr] = pap;
      break;
    case '"':
      message[chr] = pqt;
      break;
    case ':':
      message[chr] = pcl;
      break;
    case ' ':
      message[chr] = sp;
      break;
    default:
      message[chr] = sp;
      break;
    }
  }


  int col;
  int prerow;
  int row;
  int ofst;
  
  // for each char in message:
  for(int chr=0;chr<18;chr++){ 
    // width is 9 bytes
    // each letter occupies 1 byte in width and 8 bytes in height (horizontal scanning)
    // max height is 16 lines 
    // max offset is 118+72+9+63 = 262
    
    col = chr%9;        // col must never exceed 9 bytes
    prerow = chr/9;     // if we're on a new row of text...
    row = 72*prerow;    // ...shift by 72 (8 lines of 9 bytes) 
    ofst = 118+row+col; // also we have an 118 byte offset due to the header

    i[ofst] = message[chr][0];
    i[ofst+9] = message[chr][1];
    i[ofst+18] = message[chr][2];
    i[ofst+27] = message[chr][3];
    i[ofst+36] = message[chr][4];
    i[ofst+45] = message[chr][5];
    i[ofst+54] = message[chr][6];
    i[ofst+63] = message[chr][7];
    
  }  
  
}

void ser_print(){
//   while (mySerial.available()) {
//    lineread = String(mySerial.read(),HEX);
//    lineread.toCharArray(output,5);
//  } 

}

void array_sw(uint8_t data[], int datasize) {  
  
  uint8_t datasum = 0;
  sw(0x2);
  sw(0x0);  

  for(int i=0;i<datasize;i++){
    sw(data[i]);
    datasum = datasum+data[i];
 
  }   
  sw(0x0);
  sw(datasum);
  sw(0x3);
 
  delay(20);
}


void sw(int hex) {
  mySerial.write((uint8_t)hex);
}

void sw(uint8_t hex) {
  mySerial.write(hex);
}

void send_data() {
  array_sw(a, sizeof(a));
  ser_print();
  array_sw(b, sizeof(b));
  ser_print();
  array_sw(c, sizeof(c));
  ser_print();
  array_sw(d, sizeof(d));
  ser_print();
  array_sw(e, sizeof(e));
  ser_print();
  array_sw(f, sizeof(f));
  ser_print();
  array_sw(g, sizeof(g));
  ser_print();
  array_sw(h, sizeof(h));
  ser_print();
  array_sw(i, sizeof(i));
  ser_print();
  array_sw(j, sizeof(j));
  ser_print(); 
}

void setup_sign_protocol() {

  // Protocol crap
  a = {0x1};
  b = {0x6,0x7,0xD4,0x9,0x5,0x1B,0xE8,0x8,0x17,0x37,0x1B,0xE8,0xE4};
  c = {0x0};
  d = {0xA};
  e = {0x1A};
  f = {0x1};
  g = {0x6,0x7,0xD4,0x9,0x5,0x1B,0xE8,0x8,0x17,0x38,0x0,0x9C};
  h = {0x18};
  // Set all LEDs on
  i = {0x1B,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x7,0xD4,0x9,0x1B,0xE8,0x7,0xD4,0xA,0x1B,0xE8,0x0,0x0,0x0,0x17,0x3B,0x3B,0x7F,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x40,0x0,0x10,0x62,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x64,0x0,0x0,0x30,0x30,0x30,0x30,0x33,0x30,0x30,0x33,0x30,0x30,0x5C,0x42,0x30,0x30,0x5C,0x70,0x0,0x70,0x30,0x30,0x33,0x30,0x30,0x33,0x1,0x70,0x30,0x30,0x33,0x30,0x30,0x33,0x0,0x0,0x70,0x2E,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x48,0x0,0x10,0x0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
  // Protocol crap
  j = {0x19,0x44,0x49,0x53,0x50,0x0,0x0,0x0,0x48,0x0,0x10,0x1,0x0,0x0,0x0,0x0,0x0,0x28,0x0,0x0,0x50,0x0,0x0,0x58};
 
}

// Function to handle data from the server
void processData(char* data, int len) {
  // Do stuff with the data here
  
  for(int i=0;i<len;i++){
    Serial.print(data[i]);
    if(data[i] == '^' || signcursor > 0) {
      // append to stream if we find a ^ or if we're already appending
      
      // advance past the ^
      if(data[i] == '^') {
        i=i+1;
      }
      
      while(data[i] != '$' && i < len) {
        signbuffer[signcursor] = data[i];
        signcursor++;
        i++;
        
        if(data[i] == '$' || signcursor > 17 || i > len) {
          // fill in any remaining letters in the buffer
          for(int j=signcursor;j<18;j++){
            signbuffer[j]='\0';
          }
          // send to the screen
          signcursor = 0;
          
          Serial.print("> sending:");
          Serial.println(signbuffer);

          load_message(signbuffer);
          send_data();
        }
      }
                     
    }
  }
}
