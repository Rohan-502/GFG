string timeConversion(string s) {
    stringstream ss(s),res;
    string d;
    int c;
    char a=s[8],b=s[9];
    ss>>c;
    if(a=='P'&&b=='M'){
        if(c==12){
            string e=s.substr(0,8);
            return e;
        }else {
            c+=12;
            res << c;
            res >> d;
            d.append(s.substr(2,6));
            return d;
        }
    }else{
        if(c==12){
            d.append("00");
            d.append(s.substr(2,6));
            return d;
        }else{
            string e=s.substr(0,8);
            return e;
        }
    }
        
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

// Input (stdin)
// 12:05:39AM
// Expected Output
// 00:05:39

// Input (stdin)
// 07:05:45PM
// Expected Output
// 19:05:45
