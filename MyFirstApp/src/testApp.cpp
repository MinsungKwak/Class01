#include "testApp.h"

int myCircleX;
int myCircleY;
int myCircleRadius;

//--------------------------------------------------------------
void testApp::setup(){
    myCircleX = 500;
    myCircleY = 350;
    myCircleRadius = 150;
}

//--------------------------------------------------------------
void testApp::update(){
    ofBackground(0,0,0);
    ofEnableSmoothing();

}

//--------------------------------------------------------------
void testApp::draw(){
	ofNoFill();
    //ofSetColor(255, 200, 230);
    
    ofCircle(myCircleX, myCircleY, myCircleRadius*3);
    ofCircle(myCircleX, myCircleY, myCircleRadius*2);
    ofCircle(myCircleX, myCircleY, myCircleRadius);
    ofCircle(myCircleX, myCircleY, myCircleRadius/2);
    ofCircle(myCircleX, myCircleY, myCircleRadius/4);
    ofCircle(myCircleX, myCircleY, myCircleRadius/8);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    ofSetColor(ofRandom(255),ofRandom(255), ofRandom(255));
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
//    myCircleRadius++;
//    myCircleX++;
    
    for(int i=0; i<100; i++)
    {
        ofCircle(myCircleX, myCircleY, myCircleRadius);
        myCircleRadius++;
    }
    
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