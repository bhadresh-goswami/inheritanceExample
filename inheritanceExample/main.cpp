//
//  main.cpp
//  inheritanceExample
//
//  Created by Mac on 29/11/18.
//  Copyright © 2018 tops. All rights reserved.
//

#include <iostream>

class Student{

private:
    int no;
    char name[20];
    
public:
    void setData(int no, char name[20])
    {
        this->no = no;
        //this->name = name;
        strcpy(this->name, name);
    }
    
    void Display()
    {
        std::cout << "Value of no is :"<<this->no;
        std::cout << "\nValue of name is :"<<this->name<<"\n\n";
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...

    Student std1;
    std1.setData(1, "bhadresh");
    std1.Display();
    
    return 0;
}
