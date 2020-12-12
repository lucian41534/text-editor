
//
//  main.cpp
//  text
//
//  Created by HyeonJun
//
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <iomanip>
using namespace std;
int line = 1;
int lineend = 20;
int realbegin = 0;
void read(){
    int begin = 0;
    string input;
    string sentence;
    ifstream file;
    file.open("/Users/hyeonjun/Downloads/untitled folder/text/text/test.txt");
    getline(file,sentence);
    while (line <= lineend){
       
        cout<<line<<"|"<<sentence.substr(begin,75)<<endl;
        begin = begin + 75;
        line++;
    }
    lineend = line + 19;
    realbegin = begin;
}

void next(){
    int begin = 0;
    begin = realbegin;
    string input;
    string sentence;
    ifstream file;
    file.open("/Users/hyeonjun/Downloads/untitled folder/text/text/test.txt");
    getline(file,sentence);
    while (line <= lineend){
       
        cout<<line<<"|"<<sentence.substr(begin,75)<<endl;
        begin = begin + 75;
        line++;
    }
    lineend = line + 19;
    realbegin = begin;
}

void past(){
    int begin = 0;
    begin = realbegin-(75*20);
    line = line -20;
    lineend = lineend - 20;
    string input;
    string sentence;
    ifstream file;
    file.open("/Users/hyeonjun/Downloads/untitled folder/text/text/test.txt");
    getline(file,sentence);
    while (line <= lineend){
       
        cout<<line<<"|"<<sentence.substr(begin,75)<<endl;
        begin = begin + 75;
        line++;
    }
    lineend = line + 19;
}

int insert(){
    string text;
    ofstream insertwhat;
    insertwhat.open("/Users/hyeonjun/Downloads/untitled folder/text/text/test.txt");
    while(1){
        cout << line<< "|";
        getline(cin,text);
        line ++;
        if (text == "^c"){
            insertwhat.close();
            return false;
        }
        else
            insertwhat<<text<<endl;
    }
}
void exit(){
    
}
int main(){
    string command;
    
    cout << "             vi Editor            "<<endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    read();
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout << " n: 다음페이지, p:이전페이지, i:삽입, d:삭제, c:변경, s:찾기 , t: 저장 후 종료"<<endl;
    cout << "입력:";
    while(1){
        getline(cin,command);
        
        if ( command == "i"){
            insert();
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout << " n: 다음페이지, p:이전페이지, i:삽입, d:삭제, c:변경, s:찾기 , t: 저장 후 종료"<<endl;
            cout << "입력:";
        }
        if (command == "p"){
            past();
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout << " n: 다음페이지, p:이전페이지, i:삽입, d:삭제, c:변경, s:찾기 , t: 저장 후 종료"<<endl;
            cout << "입력:";
        }
        if (command == "n"){
            next();
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout << " n: 다음페이지, p:이전페이지, i:삽입, d:삭제, c:변경, s:찾기 , t: 저장 후 종료"<<endl;
            cout << "입력:";
        }
        if( command == "i"){
            read();
            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout << " n: 다음페이지, p:이전페이지, i:삽입, d:삭제, c:변경, s:찾기 , t: 저장 후 종료"<<endl;
            cout << "입력:";
        }
        
        else if (command == "t"){
            return false;
        }
    }
    return 0;
}
