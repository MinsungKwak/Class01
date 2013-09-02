#include "testApp.h"

int myX;
int myY;
int width;
int heigt;
int mouseY;

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(255, 255, 255);
    ofEnableSmoothing();

    myX = 400;
    myY = 300;
    width = 70;
    heigt = 100;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofEllipse(myX, myY, width, heigt);
    ofEllipse(myX+200, myY, width, heigt);
    ofRect(390, 400, 225, 50);

  
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    mouseY;
    
    if (mouseY >= 300)
    {
     ofEllipse(myX, myY, width++, heigt++);
    }
    
    else (mouseY < 300);
    {
     ofEllipse(myX, myY, width--, heigt--);
    }
    
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    ofSetColor(ofRandom(255),ofRandom(255), ofRandom(255));
    
}



//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}