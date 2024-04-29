// THis is the interview question of one of company in image processing industry
// Its about functions and pointers, references 

#include <iostream>
#include <vector>

using namespace std;

void foo_0(vector<string> v, string s){
    v.push_back(s);
};

void foo_1(vector<string>& v, string s){
    v.push_back(s);
};


void foo_2(vector<string>& v, const string& s){
    vector<string> *v_ptr = new vector<string>;
    (*v_ptr).insert((*v_ptr).end(), v.begin(), v.end());
    (*v_ptr).push_back(s);
};



void print_vec(const vector<string>& v){
    cout << "[ ";
    for (string x: v){
        cout << x << " ";
    }
    cout << "]" << endl;
}


int main(){
    string arr[] {"a", "b", "c"}; // array: fixed size
    vector<string> input_v(arr, arr + 3);
    
//    cout << arr << endl;
//    cout << &arr << endl;
//    cout << *arr << endl;
    cout << "Original: ";
    print_vec(input_v);
    
    cout << "foo_0: ";
    foo_0(input_v, "d");
    print_vec(input_v);
    
    cout << "foo_1: ";
    foo_1(input_v, "e");
    print_vec(input_v);
    
    cout << "foo_2: ";
    foo_2(input_v, "e");
    print_vec(input_v);
    
    
    return 0;
}