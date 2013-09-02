#include "testApp.h"

int myRectX;
int myRectY;
//int myFrameRate;


//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(255, 255, 255);
    ofSetFrameRate(50);
    
    myRectX = 100;
    myRectY = 300;
    //myFrameRate = 100;
}

//--------------------------------------------------------------
void testApp::update(){
    myRectX++;
    
    if (myRectX > 1000)
    {
        myRectX = 0;
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(180, 100, 150);
    ofRect(myRectX+200, myRectY, 100, 100);
    ofSetColor(100, 150, 200);
    ofRect(myRectX+300, myRectY+100, 200, 200);
    ofSetColor(200, 150, 215);
    ofRect(myRectX, myRectY+150, 50, 50);
    ofSetColor(255, 210, 250);
    ofRect(myRectX+400, myRectY-250, 230, 230);
    ofSetColor(200, 255, 200);
    ofRect(myRectX+600, myRectY+100, 150, 150);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    //myFrameRate++;
    
    ofSetFrameRate (300);
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    //myFrameRate--;
    
    ofSetFrameRate (50);
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