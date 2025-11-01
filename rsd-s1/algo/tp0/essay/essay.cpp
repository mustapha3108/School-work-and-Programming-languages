#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<long long> generate(long long min, long long max, long long size){
    vector<long long> primelist(size);
    long long j = 0;
    for(long long i = min; i<=max && j<size; i++){
        long long half = i/2;
        bool isprime = true;
        if(i%2==0){
            isprime=false;
        }
        else{
            for(long long k = 3; k<half; k=k+2){
                if(i%k == 0){
                    isprime = false;
                    break;
                }
            }
        }
        if(isprime == true){
            primelist[j] = i;
            j++;
        }

    }
    return primelist;
}

void randomize(vector<long long> &mush){
    long long size = mush.size();
    long long x;
    long long random;
    for(int i = 0; i<size; i++){
        random = rand() % size;
        x = mush[i];
        mush[i] = mush[random];
        mush[random] = x;
    }
}

void writefile(string output, vector<long long> &mush){
    ofstream mushfile;
    mushfile.open (output);
    for(long long &m:mush){
        mushfile << m << "\n";
    }
    mushfile.close(); 
}


int main(){

vector<long long> random100 = generate(0,1000, 100);
vector<long long> random1000 = generate(0,100000, 1000);
vector<long long> test1 = generate(1000,1000000, 100);

vector<long long> test2;
long long digits = 100;
for(int i = 3; i<13; i++){
    vector<long long> test = generate(digits, digits*10 - 1, 10);
    test2.insert(test2.end(), test.begin(), test.end());
    digits = digits * 10;
}

vector<long long> test3;
digits = 100;
for(int i = 3; i<13; i=i+3){
    vector<long long> test = generate(digits, digits*10 - 1, 10);
    test3.insert(test3.end(), test.begin(), test.end());
    digits = digits * 1000;
}

randomize(random100);
randomize(random1000);
randomize(test1);
randomize(test2);
randomize(test3);

writefile("random100.txt", random100);
writefile("random1000.txt", random1000);
writefile("test1.txt", test1);
writefile("test2.txt", test2);
writefile("test3.txt", test3);



return 0;
}